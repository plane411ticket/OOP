#include <iostream>
#include <cmath>
#include "SoPhuc.h"
using namespace std;

//Phuong thuc khoi tao mac dinh 
SoPhuc::SoPhuc()
{
    Set(0, 0);
}

//Khoi tao mot the hien cua class so phuc voi thuc va ao kieu int
SoPhuc::SoPhuc(int thuc, int ao)
{
    Set(thuc, ao);
}

//Khoi tao mot the hien cua class so phuc voi thuc va ao kieu double
SoPhuc::SoPhuc(double thuc, double ao)
{
    Set(thuc, ao);
}

//Khoi tao mot the hien cua class so phuc voi thuc va ao mac dinh la 0
SoPhuc::SoPhuc(double thuc)
{
    Set(thuc, 0);
}

//Ham de thay doi, tao gia tri cua so phuc
void SoPhuc::Set(double thuc, double ao)
{
    dThuc = thuc;
    dAo = ao;
}

//Ham de operator toan tu cong
SoPhuc operator+(const SoPhuc &spp, const SoPhuc &sp)
{
    return SoPhuc(spp.dThuc + sp.dThuc, spp.dAo + sp.dAo);
}

//Ham de operator toan tu tru
SoPhuc operator-(const SoPhuc &spp, const SoPhuc &sp)
{
    return SoPhuc(spp.dThuc - sp.dThuc, spp.dAo - sp.dAo);
}

//Ham de operator toan tu nhan
SoPhuc operator*(const SoPhuc &spp, const SoPhuc &sp)
{
    return SoPhuc(spp.dThuc*sp.dThuc - spp.dAo*sp.dAo, spp.dThuc*sp.dAo + spp.dAo*sp.dThuc);
}

//Ham de operator toan tu chia
SoPhuc operator/(const SoPhuc &spp, const SoPhuc &sp)
{
    if(sp.dThuc==0 && sp.dAo==0)
    {
        return SoPhuc(1e-10, 1e-10);
    }
    return SoPhuc((spp.dThuc*sp.dThuc + spp.dAo*sp.dAo)/(pow(sp.dThuc, 2) + pow(sp.dAo,2)), (spp.dThuc*sp.dAo - spp.dAo*sp.dThuc)/(pow(sp.dThuc, 2) + pow(sp.dAo,2)));
}

//Ham de operator toan tu so sanh bang
bool operator==(const SoPhuc &spp, const SoPhuc &sp)
{
    return spp.dThuc == sp.dThuc && spp.dAo == sp.dAo;
}

//Ham de operator toan tu so sanh khac
bool operator!=(const SoPhuc &spp, const SoPhuc &sp)
{
    return spp.dThuc != sp.dThuc || spp.dAo != sp.dAo;
}

//Ham de operator toan tu >>  dung de nhap so phuc
istream& operator>>(istream& is, SoPhuc &sp) {
    cout << "\nNhap phan thuc: ";
    is >> sp.dThuc;

    cout << "Nhap phan ao: ";
    is >> sp.dAo;

    return is;
}

//Ham de operator toan tu <<  dung de xuat ket qua
ostream& operator<<(ostream& os, const SoPhuc &sp) 
{
    if(sp.dThuc==1e-10 && sp.dAo==1e-10)
    {
        os << "Khong the tinh toan.";
        return os;
    }
    os << sp.dThuc;
    if (sp.dAo >= 0)
    {
        os << "+";
    }
    os << sp.dAo << "i";
    return os;
}
