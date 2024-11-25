#ifndef BO_H_INCLUDED
#define BO_H_INCLUDED

#include <iostream>
#include "GiaSuc.h"
using namespace std;
class Bo : public GiaSuc
{
    private:
    public:
        Bo();
        Bo(int SL, int SS);
        void SinhCon() override;
        void ChoSua() override;
        void Keu() override;
};


#endif // BO_H_INCLUDED