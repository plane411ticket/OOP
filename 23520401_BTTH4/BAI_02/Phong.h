#ifndef PHONG_H_INCLUDED
#define PHONG_H_INCLUDED
#include <iostream>

using namespace std;

class Phong
{
    protected:
        int SoDem;
    public:
        Phong();
        Phong(int dem);
        void Nhap();
        virtual void Xuat() = 0;
        virtual unsigned long long DoanhThu() = 0;

};

#endif // PHONG_H_INCLUDED