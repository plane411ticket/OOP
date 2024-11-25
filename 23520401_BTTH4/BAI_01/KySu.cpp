#include "NhanVien.h"
#include "KySu.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Phuong thuc khoi tao mac dinh 
KySu::KySu():NhanVien()
{
    GioLT = 0;
}

//Phuong thuc khoi tao mot the hien cua class NhanVien voi ma, ten, tien va gio (Gio lam them)
KySu::KySu(string ma, string ten, unsigned long long tien, int gio):NhanVien(ma, ten, tien)
{
    GioLT = gio;
}

//Phuong thuc nhap thong tin ky su
void KySu::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so gio lam them: ";
    cin >> GioLT;
    cin.ignore();
}

//Phuong thuc tinh tien thuong cho ky su
long double KySu:: TienThuong()
{
    long double LuongCT = GioLT*10;
    return LuongCT;
}

//Phuong thuc xuat thong tin ky su
void KySu::Xuat()
{
    NhanVien::Xuat();
    cout << "\nTien thuong: " << fixed << setprecision(0) << TienThuong() << "0000";
}
