#include <iostream>
#include <cstdlib>
#include "GiaSuc.h"
#include "Cuu.h"
using namespace std;

Cuu::Cuu():GiaSuc(){}
Cuu::Cuu(int SL, int SS) : GiaSuc(SL, SS){}

void Cuu::SinhCon()
{
    int SLGS = 0;
    for (int i = 0; i < SoLuong; i++)
    {
        SLGS += rand() % (3 - 1 + 1) + 1;
    }
    TangSLGS(SLGS);

}
void Cuu::ChoSua()
{
    int SLSua = 0;
    for (int i = 0; i < SoLuong; i++)
    {
        SLSua += rand() % (5 - 0 + 1) + 0;
    }
    TangSLS(SLSua);
}
void Cuu::Keu()
{
    for (int i = 0; i < SoLuong; i++)
    {
        cout << "Beeeee Beeeee \n";
    }
}

