#ifndef NHANVIEN_H_INCLUDED
#define NHANVIEN_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

class NhanVien
{
    protected:
        string MANV;
        string HoTen;
        unsigned long long LuongCB;
    public:
        NhanVien();
        NhanVien(string ma, string ten, unsigned long long tien);
        void Nhap();
        void Xuat();
        virtual long double TienThuong() = 0;
};

#endif // NHANVIEN_H_INCLUDED
