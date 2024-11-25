#include <iostream>
#include <cstdlib>
#include "GiaSuc.h"
#include "Bo.h"
using namespace std;

//Phuong thuc khoi tao mac dinh 
Bo::Bo():GiaSuc(){}

//Phuong thuc khoi tao mot the hien cua class Bo voi SL, SS
Bo::Bo(int SL, int SS) : GiaSuc(SL, SS){}

//Phuong thuc sinh con cua Bo
void Bo::SinhCon()
{
    int SLGS = 0;
    for (int i = 0; i < SoLuong; i++)
    {
        SLGS += rand() % (3 - 1 + 1) + 1;
    }
    TangSLGS(SLGS);
}

//Phuong thuc cho sua cua Bo
void Bo::ChoSua()
{
    int SLSua = 0;
    for (int i = 0; i < SoLuong; i++)
    {
        SLSua += rand() % (20 - 0 + 1) + 0;
    }
    TangSLS(SLSua);
}

//Phuong thuc keu cua Bo
void Bo::Keu()
{
    for (int i = 0; i < SoLuong; i++)
    {
        cout << "Booaaa Booaaa \n";
    }
}

