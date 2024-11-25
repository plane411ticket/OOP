#include <iostream>
#include "Phong.h"
#include "Premium.h"

//Phuong thuc khoi tao mac dinh 
Premium::Premium():Phong()
{
    PhiDV = 0;
}

//Phuong thuc khoi tao mot the hien cua class Premium voi Dem, DV
Premium::Premium(int Dem, int DV):Phong(Dem)
{
    PhiDV = DV;
}

//Phuong thuc nhap thong tin phong Premium
void Premium::Nhap()
{
    Phong::Nhap();
    cout << "Nhap phi dich vu: ";
    cin >> PhiDV;
}

//Phuong thuc xuat thong tin cua phong Premium
void Premium::Xuat()
{
    cout << "Phong Premium co: " << SoDem << " dem, phi dich vu: " << PhiDV;
}

//Phuong thuc tinh doanh thu cua phong Premium
unsigned long long Premium::DoanhThu()
{
    return SoDem*500000 + PhiDV;
}