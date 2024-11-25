#ifndef KYSU_H_INCLUDED
#define KYSU_H_INCLUDED

#include "NhanVien.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class KySu:public NhanVien
{
    private:
        int GioLT;
    public:
        KySu();
        KySu(string ma, string ten, unsigned long long tien, int gio);
        void Nhap();
        long double TienThuong() override;
        void Xuat();
};

#endif // QUANLY_H_INCLUDED
