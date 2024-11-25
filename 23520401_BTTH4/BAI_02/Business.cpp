#include <iostream>
#include "Business.h"
#include "Phong.h"
using namespace std;

//Phuong thuc khoi tao mac dinh 
Business::Business():Phong() {};

//Phuong thuc khoi tao mot the hien cua class Business voi Dem
Business::Business(int Dem):Phong(Dem) {};

//Phuong thuc nhap thong tin phong Business
void Business::Nhap()
{
    Phong::Nhap();
}

//Phuong thuc xuat thong tin cua phong Business
void Business::Xuat()
{
    cout << "Phong Business co: " << SoDem << " dem";
}

//Phuong thuc tinh doanh thu cua phong Business
unsigned long long Business::DoanhThu()
{
    return SoDem*300000;
}