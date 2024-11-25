#ifndef BUSINESS_H_INCLUDED
#define BUSINESS_H_INCLUDED
#include "Phong.h"
#include <iostream>

using namespace std;
class Business:public Phong
{
    public:
        Business();
        Business(int Dem);
        void Nhap();
        void Xuat() override;
        unsigned long long DoanhThu() override; 
};



#endif //BUSINESS_H_INCLUDED