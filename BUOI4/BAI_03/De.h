#ifndef DE_H_INCLUDED
#define DE_H_INCLUDED

#include <iostream>
#include "GiaSuc.h"
using namespace std;
class De : public GiaSuc
{
    private:
    public:
        De();
        De(int SL, int SS);
        void SinhCon() override;
        void ChoSua() override;
        void Keu() override;
};


#endif // DE_H_INCLUDED