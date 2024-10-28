#include "Tam_Giac.h"
#include <iostream>
#include <cmath>
using namespace std;

//Nhap vao cac dinh cua tam giac
void Tam_Giac::Nhap()
{
    cout << "Nhap diem A cua tam giac ABC: \n";
    A.Nhap();
    cout << "Nhap diem B cua tam giac ABC: \n";
    B.Nhap();
    cout << "Nhap diem C cua tam giac ABC: \n";
    C.Nhap();
}
//Xuat cac dinh cua tam giac
void Tam_Giac::Xuat()
{
    cout << "Dinh A cua tam giac ABC: ("<<A.GetHoanhDo()<<":"<<A.GetTungDo()<<")";
    cout << "\nDinh B cua tam giac ABC: ("<<B.GetHoanhDo()<<":"<<B.GetTungDo()<<")";
    cout << "\nDinh C cua tam giac ABC: ("<<C.GetHoanhDo()<<":"<<C.GetTungDo()<<")";
}
//Tinh tien tam giac
//Dau vao: vector de tinh tien
//Dau ra: tam giac da tinh tien
void Tam_Giac::TinhTien()
{
    float x, y;
    cout << "\nNhap vector t(x, y) de tinh tien diem: ";
    cout << "\nNhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    A.TinhTien(x, y);
    B.TinhTien(x, y);
    C.TinhTien(x, y);
}
//Phong to tam giac
//Dau vao: so lan n de phong to
//Dau ra: tam giac da phong to n lan
void Tam_Giac::PhongTo()
{
    float solan;
    cout << "\nNhap so lan de phong to tam giac: ";
    cin >>solan;
    if (solan > 0)
    {
        A.PhongTo(solan);
        B.PhongTo(solan);
        C.PhongTo(solan);
    }
}
//Thu nho tam giac
//Dau vao: so lan n de thu nho
//Dau ra: tam giac da thu nho n lan
void Tam_Giac::ThuNho()
{
    float solan;
    cout << "\nNhap so lan de thu nho tam giac: ";
    cin >>solan;
    if (solan > 0)
    {
        A.ThuNho(solan);
        B.ThuNho(solan);
        C.ThuNho(solan);
    }
}
//Quay tam giac
//Dau vao: goc quay va tam quay
//Dau ra: tam giac da quay
void Tam_Giac::Quay()
{
    Dinh tamquay;
    float gocquay=0;
    cout << "\nNhap tam quay cua tam giac: \n";
    tamquay.Nhap();
    cout << "Nhap goc quay cua tam giac (Theo do): ";
    cin >> gocquay;
    gocquay = gocquay * 3.14 / 180.0;
    A.Quay(tamquay, gocquay);
    B.Quay(tamquay, gocquay);
    C.Quay(tamquay, gocquay);
}
