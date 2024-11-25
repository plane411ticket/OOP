#include "NhanVien.h"
#include "QuanLy.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//Phuong thuc khoi tao mac dinh 
QuanLy::QuanLy() : NhanVien()
{
    TyLeThuong = 0;
}

//Phuong thuc khoi tao mot the hien cua class QuanLy voi ma, ten, tien va luong (Ty le thuong)
QuanLy::QuanLy(string ma, string ten, unsigned long long tien, long double luong) : NhanVien(ma, ten, tien)
{
    TyLeThuong = luong;
}

//Phuong thuc nhap thong tin quan ly
void QuanLy::Nhap() 
{
    NhanVien::Nhap();
    cout << "Nhap ty le thuong: ";
    cin >> TyLeThuong;
    cin.ignore();
}

//Phuong thuc tinh tien thuong cho quan ly
long double QuanLy:: TienThuong()
{
    long double  LuongCT = TyLeThuong*LuongCB;
    return LuongCT;
}

//Phuong thuc xuat thong tin quan ly
void QuanLy::Xuat()
{
    NhanVien::Xuat();
    cout << "\nTien thuong: " << fixed << setprecision(2) << TienThuong();
    cout << "\n";
}