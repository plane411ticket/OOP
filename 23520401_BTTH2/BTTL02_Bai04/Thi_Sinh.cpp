#include "Thi_Sinh.h"
#include <iostream>
using namespace std;

//Nhap thong tin cua thi sinh
//Dau vao: Ten, MSSV, iNgay, iThang, iNam, fToan, fVan, fAnh
//Dau ra: the  hien cua class Thong_Tin_Thi_Sinh
void Thong_Tin_Thi_Sinh :: Nhap()
{
    cout << "\nNhap ho va ten: ";
    getline(cin, Ten);
    cout << "Nhap MSSV: ";
    getline(cin, MSSV);
    cout << "Nhap ngay sinh: ";
    cin >>iNgay;
    cout << "Nhap thang sinh: ";
    cin >>iThang;
    cout << "Nhap nam sinh: ";
    cin >>iNam;
    cout << "Nhap diem toan: ";
    cin >>fToan;
    while(fToan < 0 || fToan > 10)
    {
        cout << "Diem khong hop le, vui long nhap lai: ";
        cin >>fToan;
    }
    cout << "Nhap diem van: ";
    cin >>fVan;
    while(fVan < 0 || fVan > 10)
    {
        cout << "Diem khong hop le, vui long nhap lai: ";
        cin >>fVan;
    }
    cout << "Nhap diem anh: ";
    cin >>fAnh;
    while(fAnh < 0 || fAnh > 10)
    {
        cout << "Diem khong hop le, vui long nhap lai: ";
        cin >>fAnh;
    }
}

//Xuat thong tin cua thi sinh
//Dau vao: khong co
//Dau ra: in ra man hinh thong tin cua thi sinh
void Thong_Tin_Thi_Sinh :: Xuat()
{
    cout << "\nHo va ten: " << Ten;
    cout << "\nMSSV: " <<MSSV;
    cout << "\nNgay thang nam sinh: "<<iNgay<<"/"<<iThang<<"/"<<iNam;
    cout << "\nDiem toan: " <<fToan;
    cout << "\nDiem van: "<<fVan;
    cout << "\nDiem anh: "<<fAnh;
    cout << "\nDiem tong: "<<fTong;
}

//Tinh tong diem cua thi sinh
void Thong_Tin_Thi_Sinh :: Tong()
{
    fTong = fToan + fVan + fAnh;
}

//Lay diem ra diem tong cua thi sinh
//Dau vao: khong co
//Dau ra: tong diem fToan, fVan, fAnh cua thi sinh
float Thong_Tin_Thi_Sinh ::getfTong()
{
    return fTong;
}
