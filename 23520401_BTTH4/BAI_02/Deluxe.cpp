#include <iostream>
#include "Phong.h"
#include "Deluxe.h"

using namespace std;

//Phuong thuc khoi tao mac dinh 
Deluxe::Deluxe():Phong()
{
    PhiDV = 0;
    PhiPV = 0;
}

//Phuong thuc khoi tao mot the hien cua class Deluxe voi Dem, DV, PV
Deluxe::Deluxe(int Dem, int DV, int PV):Phong(Dem)
{
    PhiDV = DV;
    PhiPV = PV;
}

//Phuong thuc nhap thong tin phong Deluxe
void Deluxe::Nhap()
{
    Phong::Nhap();
    cout << "Nhap phi dich vu: ";
    cin >> PhiDV;
    cout << "Nhap phi phuc vu: ";
    cin >> PhiPV;
}

//Phuong thuc xuat thong tin cua phong Deluxe
void Deluxe::Xuat()
{
    cout << "Phong Deluxe co: " << SoDem << " dem, phi dich vu: " << PhiDV << ", phi phuc vu: " << PhiPV;
}

//Phuong thuc tinh doanh thu cua phong Deluxe
unsigned long long Deluxe::DoanhThu()
{
    return SoDem*750000 + PhiDV + PhiPV;
}
