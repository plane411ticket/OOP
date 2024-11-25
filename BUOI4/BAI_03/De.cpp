#include <iostream>
#include <cstdlib>
#include "GiaSuc.h"
#include "De.h"
using namespace std;

De::De():GiaSuc(){}
De::De(int SL, int SS) : GiaSuc(SL, SS){}

void De::SinhCon()
{
    int SLGS = 0;
    for (int i = 0; i < SoLuong; i++)
    {
        SLGS += rand() % (4 - 1 + 1) + 1;
    }
    TangSLGS(SLGS);
}
void De::ChoSua()
{
    int SLSua = 0;
    for (int i = 0; i < SoLuong; i++)
    {
        SLSua += rand() % (10 - 0 + 1) + 0;
    }
    TangSLS(SLSua);
    
}
void De::Keu()
{
    for (int i = 0; i < SoLuong; i++)
    {
        cout << "Eeeee Eeeee \n";
    }
}

