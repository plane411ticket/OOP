#ifndef CUU_H_INCLUDED
#define CUU_H_INCLUDED

#include <iostream>
#include "GiaSuc.h"
using namespace std;
class Cuu : public GiaSuc
{
    private:
    public:
        Cuu();
        Cuu(int SL, int SS);
        void SinhCon() override;
        void ChoSua() override;
        void Keu() override;
};


#endif // CUU_H_INCLUDED