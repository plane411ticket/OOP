#ifndef QUANLY_H_INCLUDED
#define QUANLY_H_INCLUDED

#include "NhanVien.h"
#include <iostream>
#include <string>
using namespace std;

class QuanLy:public NhanVien
{
    private:
        long double TyLeThuong;
    public:
        QuanLy();
        QuanLy(string ma, string ten, unsigned long long tien, long double luong);
        void Nhap();
        long double TienThuong() override;
        void Xuat();
};

#endif // QUANLY_H_INCLUDED
