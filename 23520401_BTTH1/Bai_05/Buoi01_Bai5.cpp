#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
//Ham tinh ngay ke tiep, ngay hom truoc va so thu tu trong nam cua mot ngay duoc nhap tu ban phim
//Su dung set de xac nhan thang co 30 hay 31 ngay
set<int>Thang_31ngay = {1, 3, 5, 7, 8, 10, 12};
set<int>Thang_30ngay = {4, 6, 9, 11};

//Tao struct luu ngay, thang nam
struct ThoiGian
{
    int ngay, thang, nam;
};

//Ham kiem tra nam nhuan
//Dau vao: Nam
//Dau ra: Neu nam nhuan, tra ve true. Nguoc lai, tra ve false.
bool NamNhuan(ThoiGian Ngay)
{
    if((Ngay.nam%4 == 0 && Ngay.nam%100 != 0) || (Ngay.nam % 400 == 0))
    {
        return true;
    }
    return false;
}

//Ham kiem tra ngay duoc nhap co ton tai
//Dau vao: ngay, thang, nam
//Dau ra: Dap ung duoc het cac dieu kien, tra ve true. Nguoc lai, tra ve false.
bool kiemtra_tontai(ThoiGian KT, bool kiemtra)
{
    if (KT.ngay>31 || KT.ngay<1 || KT.thang > 12 || KT.thang <1 || KT.nam < 0)
    {
        return false;
    }

    if (Thang_30ngay.find(KT.thang) != Thang_30ngay.end() && KT.ngay == 31)
    {
        return false;
    }

    if ((KT.thang == 2) && (kiemtra == false) && (KT.ngay > 28))
    {
        return false;
    }

    if ((KT.thang == 2) && (kiemtra == true) && (KT.ngay > 29))
    {
        return false;
    }
    return true;
}

//Ham tinh ngay ke tiep
//Dau vao: Ngay, thang, nam tu ban phim
//Dau ra: Ngay ke tiep cua ngay duoc truyen vao ham
void TinhNgayKeTiep(ThoiGian Ngay, bool kiemtra)
{
    if(Thang_30ngay.find(Ngay.thang) != Thang_30ngay.end())
    {
        if (Ngay.ngay < 30)
        {
            cout <<Ngay.ngay + 1<<"/"<<Ngay.thang<<"/"<<Ngay.nam;
        }
        else if (Ngay.ngay == 30)
        {
            cout <<"01/"<<Ngay.thang + 1<<"/"<<Ngay.nam;
        }
    }
    else if (Thang_31ngay.find(Ngay.thang) != Thang_31ngay.end())
    {
        if  (Ngay.ngay < 31)
        {
            cout <<Ngay.ngay + 1<<"/"<<Ngay.thang<<"/"<<Ngay.nam;
        }
        else if (Ngay.ngay == 31)
        {
            if (Ngay.thang != 12)
            {
                cout <<"01/"<<Ngay.thang + 1<<"/"<<Ngay.nam;
            }
            else
            {
                cout <<"01/01/"<<Ngay.nam + 1;
            }

        }
    }
    else
    {
        if (Ngay.ngay <28)
        {
            cout <<Ngay.ngay + 1<<"/"<<Ngay.thang<<"/"<<Ngay.nam;
        }
        else if ((Ngay.ngay == 28) && (kiemtra == true))
        {
            cout <<Ngay.ngay + 1<<"/"<<Ngay.thang<<"/"<<Ngay.nam;
        }
        else if ((Ngay.ngay == 29) && (kiemtra == true))
        {
            cout <<"01/03/"<<Ngay.nam;
        }
        else if ((Ngay.ngay == 28) && (kiemtra == false))
        {
            cout <<"01/03/"<<Ngay.nam;
        }
    }
}

//Ham tinh ngay hom qua.
//Dau vao: Ngay, thang, nam.
//Dau ra: Ngay hom qua cua ngay duoc nhap vao ham.
void TinhNgayTruocDo(ThoiGian Ngay, bool kiemtra)
{
    if(Thang_30ngay.find(Ngay.thang) != Thang_30ngay.end())
    {
        if (Ngay.ngay > 1)
        {
            cout <<Ngay.ngay - 1<<"/"<<Ngay.thang<<"/"<<Ngay.nam;
        }
        else if (Ngay.ngay == 1)
        {
            cout <<"31/"<<Ngay.thang - 1<<"/"<<Ngay.nam;
        }
    }
    else if (Thang_31ngay.find(Ngay.thang) != Thang_31ngay.end())
    {
        if  (Ngay.ngay > 1)
        {
            cout <<Ngay.ngay - 1<<"/"<<Ngay.thang<<"/"<<Ngay.nam;
        }
        else if (Ngay.ngay == 1)
        {
            if (Ngay.thang == 8)
            {
                cout <<"31/"<<Ngay.thang - 1<<"/"<<Ngay.nam;
            }
            else if (Ngay.thang == 1)
            {
                cout <<"31/12/"<<Ngay.nam - 1;
            }
            else if (Ngay.thang == 3)
            {
                if (kiemtra == false)
                {
                    cout <<"28/"<<Ngay.thang-1<<"/"<<Ngay.nam;
                }
                else if (kiemtra == true)
                {
                    cout <<"29/"<<Ngay.thang-1<<"/"<<Ngay.nam;
                }

            }
            else
            {
                cout <<"30/"<<Ngay.thang-1<<"/"<<Ngay.nam;
            }
        }
    }
    else
    {
        if (Ngay.ngay >1)
        {
            cout <<Ngay.ngay - 1<<"/"<<Ngay.thang<<"/"<<Ngay.nam;
        }
        else if (Ngay.ngay == 1)
        {
            cout <<"31/01/"<<Ngay.nam;
        }
    }
}

//Ham tinh so thu tu cua ngay trong nam
//Dau vao: ngay, thang, nam
//Dau ra: so thu tu cua ngay trong nam
int SoThuTuTrongNam(ThoiGian Ngay, bool kiemtra)
{
    int mang[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int STT = 0;
    for (int i = 0; i < Ngay.thang - 1; i++)
    {
        if (Thang_31ngay.find(mang[i]) != Thang_31ngay.end())
        {
            STT += 31;
        }
        else if (Thang_30ngay.find(mang[i]) != Thang_30ngay.end())
        {
            STT += 30;
        }
        else if ((mang[i] == 2) && kiemtra == true)
        {
            STT +=29;
        }
        else if ((mang[i] == 2) && kiemtra == false)
        {
            STT += 28;
        }
    }
    STT += Ngay.ngay;
    return STT;
}

int main()
{
    //Khoi tao gia tri
    ThoiGian NgayKiemTra;
    int SoThuTuNgay;
    //Nhap ngay, thang, nam
    cout <<"Nhap thoi gian: \n";
    cout <<"Nhap ngay: ";
    cin >> NgayKiemTra.ngay;
    cout <<"Nhap thang: ";
    cin >> NgayKiemTra.thang;
    cout <<"Nhap nam: ";
    cin >>NgayKiemTra.nam;

    //Kiem tra ngay, thang, nam
    bool lanamnhuan = NamNhuan(NgayKiemTra);
    bool check = kiemtra_tontai(NgayKiemTra, lanamnhuan);
    while (check == false)
    {
        cout <<"Ngay, thang, nam khong hop le, vui long nhap lai: ";
        cout <<"Nhap ngay: ";
        cin >> NgayKiemTra.ngay;
        cout <<"Nhap thang: ";
        cin >> NgayKiemTra.thang;
        cout <<"Nhap nam: ";
        cin >>NgayKiemTra.nam;
        lanamnhuan = NamNhuan(NgayKiemTra);
        check = kiemtra_tontai(NgayKiemTra, lanamnhuan);
    }

    //In ra ngay ke tiep, ngay hom qua va so thu tu cua ngay trong nam
    cout <<"Ngay ke tiep: ";
    TinhNgayKeTiep(NgayKiemTra, lanamnhuan);
    cout <<"\n";
    cout <<"Ngay truoc do: ";
    TinhNgayTruocDo(NgayKiemTra, lanamnhuan);
    cout <<"\n";
    SoThuTuNgay = SoThuTuTrongNam(NgayKiemTra, lanamnhuan);
    cout <<"Ngay thu "<<SoThuTuNgay<<" cua nam "<<NgayKiemTra.nam;

     return 0;
}
