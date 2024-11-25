#include <iostream>
#include <cstdlib>
#include "GiaSuc.h"
#include "Cuu.h"
using namespace std;

//Phuong thuc khoi tao mac dinh 
Cuu::Cuu():GiaSuc(){}

//Phuong thuc khoi tao mot the hien cua class Cuu voi SL, SS
Cuu::Cuu(int SL, int SS) : GiaSuc(SL, SS){}

//Phuong thuc sinh con cua Cuu
void Cuu::SinhCon()
{
    int SLGS = 0;
    for (int i = 0; i < SoLuong; i++)
    {
        SLGS += rand() % (3 - 1 + 1) + 1;
    }
    TangSLGS(SLGS);
}

//Phuong thuc cho sua cua Cuu
void Cuu::ChoSua()
{
    int SLSua = 0;
    for (int i = 0; i < SoLuong; i++)
    {
        SLSua += rand() % (5 - 0 + 1) + 0;
    }
    TangSLS(SLSua);
}

//Phuong thuc keu cua Cuu
void Cuu::Keu()
{
    for (int i = 0; i < SoLuong; i++)
    {
        cout << "Beeeee Beeeee \n";
    }
}

