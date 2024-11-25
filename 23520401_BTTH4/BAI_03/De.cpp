#include <iostream>
#include <cstdlib>
#include "GiaSuc.h"
#include "De.h"
using namespace std;

//Phuong thuc khoi tao mac dinh 
De::De():GiaSuc(){}

//Phuong thuc khoi tao mot the hien cua class De voi SL, SS
De::De(int SL, int SS) : GiaSuc(SL, SS){}

//Phuong thuc sinh con cua De
void De::SinhCon()
{
    int SLGS = 0;
    for (int i = 0; i < SoLuong; i++)
    {
        SLGS += rand() % (4 - 1 + 1) + 1;
    }
    TangSLGS(SLGS);
}

//Phuong thuc cho sua cua De
void De::ChoSua()
{
    int SLSua = 0;
    for (int i = 0; i < SoLuong; i++)
    {
        SLSua += rand() % (10 - 0 + 1) + 0;
    }
    TangSLS(SLSua);
    
}

//Phuong thuc keu cua De
void De::Keu()
{
    for (int i = 0; i < SoLuong; i++)
    {
        cout << "Eeeee Eeeee \n";
    }
}

