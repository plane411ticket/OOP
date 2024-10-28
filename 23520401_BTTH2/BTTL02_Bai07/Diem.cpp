#include "Diem.h"
#include <iostream>
using namespace std;

//Nhap tung do va hoanh do cua cac dinh da giac
void Diem::Nhap()
{
    cin >> x >> y;
}

//Lay ra hoanh do cua mot diem
//Dau vao: khong co
//Dau ra: hoanh do
float Diem::getX()
{
    return x;
}

//Lay ra tung do cua mot diem
//Dau vao: khong co
//Dau ra: tung do
float Diem::getY()
{
    return y;
}
