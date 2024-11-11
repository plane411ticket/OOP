#include <iostream>
#include "PhanSo.h"
#include <algorithm>
using namespace std;

//Phuong thuc thiet lap mac dinh 
PhanSo::PhanSo()
{
    Set(0, 1);
}

//Thiet lap mot the hien cua class phan so voi Tu va Mau
PhanSo::PhanSo(int Tu, int Mau)
{
    Set(Tu, Mau);
}

//Khoi tao phan so voi tu va mau mac dinh la 1
PhanSo::PhanSo(int Tu)
{
    Set(Tu, 1);
}

//Ham de thay doi, tao gia tri cua phan so
void PhanSo::Set(int Tu, int Mau)
{
    iTu = Tu;
    iMau = Mau;
}

//Ham de operator toan tu cong, dung cho ca so nguyen
PhanSo operator+(const PhanSo &psp, const PhanSo &ps)
{
    return PhanSo(psp.iTu*ps.iMau + ps.iTu*psp.iMau, psp.iMau*ps.iMau);
}

//Ham de operator toan tu tru, dung cho ca so nguyen
PhanSo operator-(const PhanSo &psp, const PhanSo &ps)
{
    return PhanSo(psp.iTu*ps.iMau - ps.iTu*psp.iMau, psp.iMau*ps.iMau);
}

//Ham de operator toan tu nhan, dung cho ca so nguyen
PhanSo operator*(const PhanSo &psp, const PhanSo &ps)
{
    return PhanSo(psp.iTu*ps.iTu, psp.iMau*ps.iMau);
}

//Ham de operator toan tu chia, dung cho ca so nguyen
PhanSo operator/(const PhanSo &psp, const PhanSo &ps)
{
    if (ps.iTu == 0)
    {
        return PhanSo(0,0); //Bao hieu khong the chia
    }
    return PhanSo(psp.iTu*ps.iMau, psp.iMau*ps.iTu);
}

//Ham de operator toan tu so sanh bang, dung cho ca so nguyen
bool operator==(const PhanSo &psp, const PhanSo &ps) 
{
    return psp.iTu*ps.iMau == ps.iTu*psp.iMau;
}

//Ham de operator toan tu so sanh khac, dung cho ca so nguyen
bool operator!=(const PhanSo &psp, const PhanSo &ps) 
{
    return psp.iTu*ps.iMau != ps.iTu*psp.iMau;
}

//Ham de operator toan tu so sanh lon hon hoac bang, dung cho ca so nguyen
bool operator>=(const PhanSo &psp, const PhanSo &ps) 
{
    return psp.iTu*ps.iMau >= ps.iTu*psp.iMau;
}

//Ham de operator toan tu so sanh nho hon hoac bang, dung cho ca so nguyen
bool operator<=(const PhanSo &psp, const PhanSo &ps) 
{
    return psp.iTu*ps.iMau <= ps.iTu*psp.iMau;
}

//Ham de operator toan tu so sanh lon hon, dung cho ca so nguyen
bool operator>(const PhanSo &psp, const PhanSo &ps) 
{
    return psp.iTu*ps.iMau > ps.iTu*psp.iMau;
}

//Ham de operator toan tu so sanh nho hon, dung cho ca so nguyen
bool operator<(const PhanSo &psp, const PhanSo &ps) 
{
    return psp.iTu*ps.iMau < ps.iTu*psp.iMau;
}

//Ham de operator toan tu >>  dung de nhap ket qua
istream& operator>>(istream& is, PhanSo &ps) 
{
    cout << "\nNhap tu so: ";
    is >> ps.iTu;

    cout << "Nhap mau so: ";
    is >> ps.iMau;

    //Mau so phai khac khong
    while (ps.iMau == 0) {
        cout << "Mau so phai khac 0. Nhap lai mau so: ";
        is >> ps.iMau;
    }

    //Dinh dang dau
    if (ps.iTu*ps.iMau < 0)
    {
        ps.iTu = -abs(ps.iTu);
        ps.iMau = abs(ps.iMau);
    }
    else if (ps.iTu*ps.iMau > 0)
    {
        ps.iTu = abs(ps.iTu);
        ps.iMau = abs(ps.iMau);
    }

    return is;
}

//Ham de operator toan tu <<  dung de xuat ket qua
ostream& operator<<(ostream& os, PhanSo &ps) 
{
    if (ps.iTu == 0 && ps.iMau == 0)
    {
        os << "Khong the tinh toan.";
    }
    else
    {
        if (ps.iMau < 0)
        {
            ps.iTu = -ps.iTu;
            ps.iMau = -ps.iMau;
        }

        int UCLN = __gcd(ps.iTu, ps.iMau);
        os << ps.iTu/UCLN;
        os << "/" << ps.iMau/UCLN;
    }

    return os;
}
