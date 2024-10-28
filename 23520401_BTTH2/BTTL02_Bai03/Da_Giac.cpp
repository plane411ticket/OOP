#include "Da_Giac.h"
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

//Nhap cac dinh cua da giac
//Dau vao: so luong dinh, toa do dinh
//Dau ra: khoi tao xong cac dinh
void Da_Giac::Nhap()
{
    cout << "Nhap so luong dinh cua da giac: ";
    cin >> n;
    while(n<3)
    {
        cout <<"Da giac co toi thieu 3 dinh, vui long nhap lai: ";
        cin >> n;
    }
    Dinh = new Diem[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap diem thu "<<i+1<<" : \n";
        Dinh[i].Nhap();
    }
}

//Xuat gia tri cac dinh ra man hinh
void Da_Giac::Xuat()
{
    for (int i = 0; i < n; i++)
    {
        cout << "Dinh thu "<<i<<" cua da giac: ("<<Dinh[i].GetHoanhDo()<<":"<<Dinh[i].GetTungDo()<<")\n";
    }
}

//Tinh tien cac dinh cua da giac theo vector
//Dau vao: toa do cac diem cua da giac va vector de tinh tien
//Dau ra: da giac da duoc tinh tien
void Da_Giac::TinhTien()
{
    float x, y;
    cout << "\nNhap vector t(x, y) de tinh tien da giac: ";
    cout << "\nNhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    for (int i = 0; i < n; i++)
    {
        Dinh[i].TinhTien(x, y);
    }
}

//Phong to da giac
//Dau vao: toa do cac diem cua da giac va so lan phong to
//Dau ra: da giac da phong to
void Da_Giac::PhongTo()
{
    float solan;
    cout << "\nNhap so lan de phong to da giac: ";
    cin >>solan;
    if (solan > 0)
    {
        for (int i = 0; i < n; i++)
        {
            Dinh[i].PhongTo(solan);
        }
    }
}

//Thu nho da giac
//Dau vao: toa do cac diem cua da giac va so lan thu nho
//Dau ra: da giac da thu nho
void Da_Giac::ThuNho()
{
    float solan;
    cout << "\nNhap so lan de thu nho da giac: ";
    cin >>solan;
    if (solan > 0)
    {
        for (int i = 0; i < n; i++)
        {
            Dinh[i].ThuNho(solan);
        }
    }
}

//Quay da giac theo tam quay va goc quay
//Dau vao: toa do cac diem cua da giac, tam quay va goc quay
//Dau ra: da giac da quay
void Da_Giac::Quay()
{
    Diem tamquay;
    float gocquay=0;
    cout << "\nNhap tam quay cua da giac: \n";
    tamquay.Nhap();
    cout << "Nhap goc quay cua da giac (theo do): ";
    cin >> gocquay;
    gocquay = (gocquay*3.14)/180;
    for (int i = 0; i < n; i++)
    {
        Dinh[i].Quay(tamquay, gocquay);
    }
}
