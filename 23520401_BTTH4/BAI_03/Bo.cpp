#include <iostream>
#include <cstdlib>
#include "GiaSuc.h"
#include "Bo.h"
using namespace std;

Bo::Bo():GiaSuc(){}
Bo::Bo(int SL, int SS) : GiaSuc(SL, SS){}

void Bo::SinhCon()
{
    int SLGS = 0;
    for (int i = 0; i < SoLuong; i++)
    {
        SLGS += rand() % (3 - 1 + 1) + 1;
    }
    TangSLGS(SLGS);
}
void Bo::ChoSua()
{
    int SLSua = 0;
    for (int i = 0; i < SoLuong; i++)
    {
        SLSua += rand() % (20 - 0 + 1) + 0;
    }
    TangSLS(SLSua);
}
void Bo::Keu()
{
    for (int i = 0; i < SoLuong; i++)
    {
        cout << "Booaaa Booaaa \n";
    }
}

