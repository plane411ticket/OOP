#ifndef PREMIUM_H_INCLUDED
#define PREMIUM_H_INCLUDED
#include <iostream>
#include "Phong.h"

using namespace std;

class Premium:public Phong
{
    private:
        int PhiDV;
    public:
        Premium();
        Premium(int Dem, int DV);
        void Nhap();
        void Xuat() override;
        unsigned long long DoanhThu() override;
};

#endif //PREMIUM_H_INCLUDED