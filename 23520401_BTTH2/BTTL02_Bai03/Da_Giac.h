#ifndef DA_GIAC_H_INCLUDED
#define DA_GIAC_H_INCLUDED
#include "Diem.h"
class Da_Giac
{
    private:
        int n;
        Diem* Dinh;
    public:
        Da_Giac() : Dinh(nullptr) {} //Ham khoi tao mac dinh
        ~Da_Giac() { delete[] Dinh; } //Ham pha huy
        void Nhap();
        void Xuat();
        void TinhTien();
        void PhongTo();
        void ThuNho();
        void Quay();
};

#endif // DA_GIAC_H_INCLUDED
