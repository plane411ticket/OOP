#include <iostream>
#include "GiaSuc.h"
using namespace std;
GiaSuc::GiaSuc()
{
    SoLuong = 0;
    Sua = 0;
}
GiaSuc::GiaSuc(int SL, int SS)
{
    SoLuong = SL;
    Sua = SS;
}
int GiaSuc::getSLGS()
{
    return SoLuong;
}
void GiaSuc::TangSLGS(int SL)
{
    SoLuong += SL;
}
int GiaSuc::getSLS()
{
    return Sua;
}
void GiaSuc::TangSLS(int SL)
{
    Sua += SL;
}