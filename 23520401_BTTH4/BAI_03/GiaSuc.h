#ifndef GIASUC_H_INCLUDED
#define GIASUC_H_INCLUDED

#include <iostream>
using namespace std;
class GiaSuc
{
    protected:
        int SoLuong;
        int Sua;
    public:
        GiaSuc();
        GiaSuc(int SL, int SS);
        virtual void SinhCon() = 0;
        virtual void ChoSua() = 0;
        virtual void Keu() = 0;
        int getSLGS();
        void TangSLGS(int SL);
        int getSLS();
        void TangSLS(int SL);
};




#endif // GIASUC_H_INCLUDED