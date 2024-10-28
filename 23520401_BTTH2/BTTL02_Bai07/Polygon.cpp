#include "Polygon.h"
#include <iostream>
#include <vector>
#include "Diem.h"
using namespace std;

//Ham khoi tao gia tri mac dinh
Polygon::Polygon() : n(0) {}

//Ham nhap thong tin ve da giac
//Dau vao: so luong dinh, toa do cac dinh
//Dau ra: da giac
void Polygon::Nhap()
{
    //Nhap so luong dinh cua da giac
    cin >> n;
    while (n < 3)
    {
        //cout << "So luong dinh khong hop le, vui long nhap lai: ";
        cin >> n;
    }

    Mang.resize(n);

    for (int i = 0; i < n; i++)
    {
        Mang[i].Nhap();
    }
}

//Tinh dien tich cua da giac
//Dau vao: toa do cua da giac
//Dau ra: dien tich cua da giac
void Polygon::TinhDienTich()
{
    float Duong_Cheo_01 = 0.0;
    float Duong_Cheo_02 = 0.0;
    float Dien_Tich = 0.0;
    Mang.push_back(Mang[0]);
    for (int i = 0; i < n; i++)
    {
        Duong_Cheo_01 += Mang[i].getX()*Mang[i+1].getY();
        Duong_Cheo_02 += Mang[i].getY()*Mang[i+1].getX();
    }
    Dien_Tich = abs((Duong_Cheo_01 - Duong_Cheo_02)*1/2);
    cout << Dien_Tich;
}
