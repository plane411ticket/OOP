#ifndef DELUXE_H_INCLUDED
#define DELUXE_H_INCLUDED
#include <iostream>
#include "Phong.h"

using namespace std;

class Deluxe:public Phong
{   
    private:
        int PhiDV;
        int PhiPV;
    public:
        Deluxe();
        Deluxe(int Dem, int DV, int PV);
        void Nhap();
        void Xuat() override;
        unsigned long long DoanhThu() override;
};

#endif // DELUXE_H_INCLUDED