#include <iostream>
#include "GiaSuc.h"
using namespace std;

//Phuong thuc khoi tao mac dinh 
GiaSuc::GiaSuc()
{
    SoLuong = 0;
    Sua = 0;
}

//Khoi tao mot the hien cua class GiaSuc voi SL, SS
GiaSuc::GiaSuc(int SL, int SS)
{
    SoLuong = SL;
    Sua = SS;
}

//Phuong thuc lay so luong gia suc
int GiaSuc::getSLGS()
{
    return SoLuong;
}

//Phuong thuc tang so luong gia suc
void GiaSuc::TangSLGS(int SL)
{
    SoLuong += SL;
}

//Phuong thuc lay san luong sua
int GiaSuc::getSLS()
{
    return Sua;
}

//Phuong thuc tang san luong sua
void GiaSuc::TangSLS(int SL)
{
    Sua += SL;
}