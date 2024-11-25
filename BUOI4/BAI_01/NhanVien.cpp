#include <iostream>
#include "NhanVien.h"
#include <string>
using namespace std;

//Phuong thuc khoi tao mac dinh 
NhanVien::NhanVien ()
{
    MANV = "";
    HoTen = "";
    LuongCB = 0;
}

//Phuong thuc khoi tao mot the hien cua class nhan vien voi ma, ten va tien
NhanVien::NhanVien (string ma, string ten, unsigned long long tien)
{
    MANV = ma;
    HoTen = ten;
    LuongCB = tien;
}

//Phuong thuc nhap
void NhanVien::Nhap ()
{
    cout << "Nhap ma nhan vien: ";
    getline(cin, MANV);
    cout << "Nhap ho ten: ";
    getline(cin, HoTen);
    cout << "Nhap luong co ban: ";
    cin >> LuongCB;
}

//Phuong thuc xuat thong tin nhan vien
void NhanVien:: Xuat()
{
    cout << "\nMa nhan vien: " << MANV;
    cout << "\nHo va ten: " << HoTen;
    cout << "\nLuong co ban: " << LuongCB;
}
