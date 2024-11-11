#include "NgayThangNam.h"
#include <set>
#include <iostream>
#include <iomanip>

using namespace std;

set<int>Thang_31ngay = {1, 3, 5, 7, 8, 10, 12};
set<int>Thang_30ngay = {4, 6, 9, 11};

//Phuong thuc khoi tao mac dinh
NgayThangNam::NgayThangNam()
{
    iNgay = 1;
    iThang = 1;
    iNam = 1;
}

//Phuong thuc khoi tao voi Nam, Thang, Ngay
NgayThangNam::NgayThangNam(int Nam, int Thang, int Ngay)
{
    iNgay = Ngay;
    iThang = Thang;
    iNam = Nam;
}

//Phuong thuc kiem tra xem co la nam nhuan
bool NgayThangNam::LaNamNhuan(int nam) const
{
    if((nam%4 == 0 && nam%100 != 0) || (nam % 400 == 0))
    {
        return true;
    }
    return false;
}

//Phuong thuc tinh so ngay tu 1/1/1 den ngay thang nam can tinh
int NgayThangNam::TinhNgay() const
{
    int nam = iNam;
    int thang = iThang;
    int ngay = iNgay;
    int tongsongay = 0;

    tongsongay += ngay; //So ngay cua NgayThangNam muon tinh

    thang--; //Bat dau xet tu thang truoc do, xac dinh so ngay trong thang
    while (thang > 0)
    {
        if (thang == 2)
        {
            if (LaNamNhuan(nam))
            {
                tongsongay += 29;
            }
            else
            {
                tongsongay += 28;
            }
        }
        else if (Thang_31ngay.find(thang) != Thang_31ngay.end())
        {
            tongsongay += 31;
        }
        else if (Thang_30ngay.find(thang) != Thang_30ngay.end())
        {
            tongsongay += 30;
        }
        thang --;
    }

    nam --; //Bat dau xet tu nam truoc do, xac dinh so ngay trong nam
    while (nam > 0)
    {
        if(LaNamNhuan(nam))
        {
            tongsongay += 366;
        }
        else
        {
            tongsongay += 365;
        }
        nam--;
    }
    return tongsongay;
}

//Phuong thuc tim ra ngay lon nhat cua mot thang
int NgayThangNam::NgayLN(int thang, int nam) const
{
    if (Thang_31ngay.find(thang) != Thang_31ngay.end())
    {
        return 31;
    }

    if (Thang_30ngay.find(thang) != Thang_30ngay.end())
    {
        return 30;
    }
    if (thang == 2 && LaNamNhuan(nam))
    {
        return 29;
    }
    if (thang == 2 && LaNamNhuan(nam) == false)
    {
        return 28;
    }

}

//Phuong thuc operator + de cong them ngay vao mot the hien cua class NgayThangNam
NgayThangNam operator+(const NgayThangNam &ntn, int ngay)
{
    NgayThangNam kq;
    kq.iNgay = ntn.iNgay;
    kq.iThang = ntn.iThang;
    kq.iNam = ntn.iNam;

    int ngayln = ntn.NgayLN(ntn.iThang, ntn.iNam);
    kq.iNgay += ngay;
    
    while (kq.iNgay > ngayln) 
    {
        kq.iNgay -= ngayln;
        kq.iThang++;
        if (kq.iThang > 12) 
        {
            kq.iThang = 1;
            kq.iNam++;
        }
        ngayln = ntn.NgayLN(kq.iThang, kq.iNam);
    }
    return kq;
}

//Phuong thuc operator - de tru di ngay vao mot the hien cua class NgayThangNam
NgayThangNam operator-(const NgayThangNam &ntn, int ngay)
{
    NgayThangNam kq;
    kq.iNgay = ntn.iNgay;
    kq.iThang = ntn.iThang;
    kq.iNam = ntn.iNam;

    kq.iNgay -= ngay;
    while (kq.iNgay < 1) 
    {
        kq.iThang--;
        if (kq.iThang < 1) 
        {
            kq.iThang = 12;
            kq.iNam--;
        }
        int ngayln = ntn.NgayLN(kq.iThang, kq.iNam);
        kq.iNgay += ngayln;
    }
    return kq;
}

//Phuong thuc tinh khoang cach giua hai ngay
int operator-(const NgayThangNam &ntn, const NgayThangNam &a) 
{
    int songay = ntn.TinhNgay() - a.TinhNgay();
    return abs(songay);
}

//Phuong thuc operator ++ de cong them 1 ngay vao mot the hien cua class NgayThangNam
NgayThangNam operator++(NgayThangNam &ntn)
{
    NgayThangNam kq;
    kq.iNgay = ntn.iNgay;
    kq.iThang = ntn.iThang;
    kq.iNam = ntn.iNam;

    int ngayln = ntn.NgayLN(ntn.iThang, ntn.iNam);
    kq.iNgay += 1;
    
    while (kq.iNgay > ngayln) 
    {
        kq.iNgay -= ngayln;
        kq.iThang++;
        if (kq.iThang > 12) 
        {
            kq.iThang = 1;
            kq.iNam++;
        }
        ngayln = ntn.NgayLN(ntn.iThang, ntn.iNam);
    }
    return kq;
}

//Phuong thuc operator -- de tru di 1 ngay vao mot the hien cua class NgayThangNam
NgayThangNam operator--(NgayThangNam &ntn)
{
    NgayThangNam kq;
    kq.iNgay = ntn.iNgay;
    kq.iThang = ntn.iThang;
    kq.iNam = ntn.iNam;

    kq.iNgay -= 1;
    while (kq.iNgay < 1) 
    {
        kq.iThang--;
        if (kq.iThang < 1) 
        {
            kq.iThang = 12;
            kq.iNam--;
        }
        int ngayln = ntn.NgayLN(kq.iThang, kq.iNam);
        kq.iNgay += ngayln;
    }
    
    return kq;
}

//Phuong thuc operator == de so sanh hai the hien cua class NgayThangNam co bang nhau
bool operator==(const NgayThangNam &ntn1, const NgayThangNam &ntn2)
{
    return ntn1.iNam == ntn2.iNam && ntn1.iThang == ntn2.iThang && ntn1.iNgay == ntn2.iNgay;
}

//Phuong thuc operator != de so sanh hai the hien cua class NgayThangNam co khac nhau
bool operator!=(const NgayThangNam &ntn1, const NgayThangNam &ntn2)
{
    return  ntn1.iNam != ntn2.iNam || ntn1.iThang != ntn2.iThang || ntn1.iNgay != ntn2.iNgay;
}

//Phuong thuc operator >= de so sanh the hien thu nhat cua class NgayThangNam co lon hon hoac bang the hien thu hai
bool operator>=(const NgayThangNam &ntn1, const NgayThangNam &ntn2)
{
    return ntn1.TinhNgay() >= ntn2.TinhNgay();
}

//Phuong thuc operator <= de so sanh the hien thu nhat cua class NgayThangNam co nho hon hoac bang the hien thu hai
bool operator<=(const NgayThangNam &ntn1, const NgayThangNam &ntn2)
{
    return ntn1.TinhNgay() <= ntn2.TinhNgay();
}

//Phuong thuc operator > de so sanh the hien thu nhat cua class NgayThangNam co lon hon the hien thu hai
bool operator>(const NgayThangNam &ntn1, const NgayThangNam &ntn2)
{
    return ntn1.TinhNgay() > ntn2.TinhNgay();
}

//Phuong thuc operator < de so sanh the hien thu nhat cua class NgayThangNam co nho hon the hien thu hai
bool operator<(const NgayThangNam &ntn1, const NgayThangNam &ntn2)
{
    return ntn1.TinhNgay() < ntn2.TinhNgay();
}

istream& operator>>(istream& is, NgayThangNam &ntn)
{
    is >> ntn.iNgay >> ntn.iThang >> ntn.iNam;
    while (ntn.iThang > 12 || ntn.iThang < 1 || ntn.iNam < 1 || ntn.iNgay < 1 || 
            (Thang_30ngay.find(ntn.iThang)!= Thang_30ngay.end() && ntn.iNgay > 30) || 
            (Thang_31ngay.find(ntn.iThang)!= Thang_31ngay.end() && ntn.iNgay > 31) || 
            (ntn.LaNamNhuan(ntn.iNam) == false && ntn.iNgay > 28 && ntn.iThang == 2) || 
            (ntn.LaNamNhuan(ntn.iNam) == true && ntn.iNgay > 29 && ntn.iThang == 2))
    {
        cout << "Ngay khong hop le, vui long nhap lai ngay, thang, nam: ";
        is >> ntn.iNgay >> ntn.iThang >> ntn.iNam;
    }
}

ostream& operator<<(ostream& os, const NgayThangNam &ntn)
{
    os << "\n+---------------------+\n";
    os << "| Ngay: ";
    os << setw(2) << setfill('0') << ntn.iNgay << "/" << setw(2) << setfill('0') << ntn.iThang << "/"<< setw(2) << setfill('0') << ntn.iNam;
    os << " |\n";
    os << "+---------------------+\n";
    return os;
}
