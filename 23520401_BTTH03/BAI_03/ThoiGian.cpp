#include <iostream>
#include <iomanip>
#include "ThoiGian.h"
using namespace std;

//Phuong thuc thiet lap mac dinh
ThoiGian::ThoiGian()
{
    Set(0, 0, 0);
}

//Phuong thuc thiet lap mot the hien cua class ThoiGian voi Gio, Phut, Giay
ThoiGian::ThoiGian(int Gio, int Phut, int Giay)
{
    Set(Gio, Phut, Giay);
}

//Phuong thuc de thay doi , tao gia tri cua ThoiGian
void ThoiGian::Set(int Gio, int Phut, int Giay)
{
    iGio = Gio;
    iPhut = Phut;
    iGiay = Giay;
}

//Phuong thuc doi tu thoi gian ra giay
int ThoiGian::TinhGiay() const
{
    return iGio * 3600 + iPhut * 60 + iGiay;
}

//Phuong thuc doi tu giay ra thoi gian
ThoiGian ThoiGian::TinhLaiGio(int Giay) const
{
    if (Giay >= 3600 * 24)
    {
        Giay = Giay - 3600 * 24;
    }

    int x = Giay / 3600;
    Giay = Giay % 3600;

    int y = Giay / 60;
    Giay = Giay % 60;

    int z = Giay;

    return ThoiGian(x, y, z);
}

//Phuong thuc cong them Giay
ThoiGian operator+(const ThoiGian &tg, const int &Giay)
{
    int giay_tg = tg.TinhGiay() + Giay;
    ThoiGian kq;
    return kq.TinhLaiGio(giay_tg);
}

//Phuong thuc tru di Giay
ThoiGian operator-(const ThoiGian &tg, const int &Giay)
{
    int giay_tg = abs(tg.TinhGiay() - Giay);
    return tg.TinhLaiGio(giay_tg);
}

//Phuong thuc cong them thoi gian
ThoiGian operator+(const ThoiGian &tg, const ThoiGian &tgp)
{
    int giay01 = tg.TinhGiay();
    int giay02 = tgp.TinhGiay();
    return tg.TinhLaiGio(giay01 + giay02);
}

//Phuong thuc tru di thoi gian
ThoiGian operator-(const ThoiGian &tg, const ThoiGian &tgp)
{
    int giay01 = tg.TinhGiay();
    int giay02 = tgp.TinhGiay();
    int hieu = abs(giay01-giay02);
    return tg.TinhLaiGio(hieu);
}

//Phuong thuc cong them 1 giay
ThoiGian operator++(ThoiGian &tg)
{
    int giay01 = tg.TinhGiay();
    giay01 = giay01 + 1;
    return tg.TinhLaiGio(giay01);
}

//Phuong thuc tru di 1 giay
ThoiGian operator--(ThoiGian &tg)
{
    int giay01 = tg.TinhGiay();
    giay01 = giay01 - 1;
    return tg.TinhLaiGio(giay01);
}

//Phuong thuc de operator toan tu == (bang)
bool operator==(const ThoiGian &tg, const ThoiGian &tgp)
{
    return tg.TinhGiay() == tgp.TinhGiay();
}

// de operator toan tu != (khac)
bool operator!=(const ThoiGian &tg, const ThoiGian &tgp)
{
    return tg.TinhGiay() != tgp.TinhGiay();
}

//Phuong thuc de operator toan tu >= (Lon hon hoac bang)
bool operator>=(const ThoiGian &tg, const ThoiGian &tgp)
{
    return tg.TinhGiay() >= tgp.TinhGiay();
}

//Phuong thuc de operator toan tu <= (Nho hon hoac bang)
bool operator<=(const ThoiGian &tg, const ThoiGian &tgp)
{
    return tg.TinhGiay() <= tgp.TinhGiay();
}

//Phuong thuc de operator toan tu > (Lon hon)
bool operator>(const ThoiGian &tg, const ThoiGian &tgp)
{
    return tg.TinhGiay() > tgp.TinhGiay();
}

//Phuong thuc de operator toan tu < (Nho hon)
bool operator<(const ThoiGian &tg, const ThoiGian &tgp)
{
    return tg.TinhGiay() < tgp.TinhGiay();
}

//Phuong thuc de operator toan tu >> (Nhap gia tri)
istream& operator>>(istream& is, ThoiGian &tg)
{
    cout << "\nNhap gio: ";
    is >> tg.iGio;
    while (tg.iGio < 0 || tg.iGio > 23)
    {
        cout << "Gio phai thuoc [0,23]. Nhap lai gio: ";
        is >> tg.iGio;
    }

    cout << "Nhap phut: ";
    is >> tg.iPhut;
    while (tg.iPhut < 0 || tg.iPhut > 59)
    {
        cout << "Phut phai thuoc [0,59]. Nhap lai phut: ";
        is >> tg.iPhut;
    }

    cout << "Nhap giay: ";
    is >> tg.iGiay;
    while (tg.iGiay < 0 || tg.iGiay > 59)
    {
        cout << "Giay phai thuoc [0,59]. Nhap lai giay: ";
        is >> tg.iGiay;
    }

    return is;
}

//Phuong thuc de operator toan tu << (Xuat gia tri)
ostream& operator<<(ostream& os, const ThoiGian &tg)
{
    os << "\n+---------------------+" << endl;
    os << "| Thoi gian: ";
    os << setw(2) << setfill('0') << tg.iGio << ":" << setw(2) << setfill('0') << tg.iPhut << ":"<< setw(2) << setfill('0') << tg.iGiay;
    os << " |" << endl;
    os << "+---------------------+" << endl;
    return os;
}
