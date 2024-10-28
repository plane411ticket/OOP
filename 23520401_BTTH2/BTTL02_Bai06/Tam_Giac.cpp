#include "Tam_Giac.h"
#include <iostream>
#include <cmath>

using namespace std;
float PI=3.14;

//Phuong thuc thiet lap mac dinh
//Dau vao: khong co
//Dau ra: cac dinh voi toa do va hoanh do bang 0
Tam_Giac::Tam_Giac(): x1(0), x2(0), x3(0), y1(0), y2(0), y3(0){}

//Nhap toa do cac dinh tam giac
//Dau vao: gia tri tung do, hoanh do cua tung dinh
//Dau ra: toa do ba dinh cua tam giac
void Tam_Giac::Nhap()
{
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;
}

//Tinh tien cac dinh cua tam giac theo goc  va do dai
//Dau vao: goc tinh tien va do dai tinh tien
//Dau ra: tam giac voi cac dinh da tinh tien
void Tam_Giac::TinhTien()
{
    float huong, dodai;
    cin >> huong;
    cin >> dodai;
    huong = (huong*PI)/180;
    x1 = x1 + dodai*cos(huong);
    x2 = x2 + dodai*cos(huong);
    x3 = x3 + dodai*cos(huong);
    y1 = y1 + dodai*sin(huong);
    y2 = y2 + dodai*sin(huong);
    y3 = y3 + dodai*sin(huong);
}

//Xuat ra toa do 3 dinh cua tam giac
//Dau ra: tung do va hoanh do cua ba dinh
void Tam_Giac::Xuat()
{
    cout << "(" << x1 << "," << y1 << ")\n";
    cout << "(" << x2 << "," << y2 << ")\n";
    cout << "(" << x3 << "," << y3 << ")";
}
