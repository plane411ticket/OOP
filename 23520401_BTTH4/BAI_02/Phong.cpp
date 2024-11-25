#include <iostream>
#include "Phong.h"

using namespace std;

//Phuong thuc khoi tao mac dinh 
Phong::Phong()
{
    SoDem = 0;
}

//Khoi tao mot the hien cua class phong Dem
Phong::Phong(int Dem)
{
    SoDem = Dem;
}

//Phuong thuc nhap thong tin cua phong
void Phong::Nhap()
{
    cout << "Nhap so dem o loai phong nay: ";
    cin >> SoDem;
}

