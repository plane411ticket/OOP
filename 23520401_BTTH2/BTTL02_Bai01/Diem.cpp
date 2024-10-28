#include "Diem.h"
#include <iostream>
using namespace std;

//Khoi tao mac dinh voi gia tri 0
//Khong co dau vao va dau ra
Diem::Diem()
{
    iHoanh = 0.0;
    iTung = 0.0;
}

//Khoi tao voi gia tri khi code cua class Diem
//Dau vao: hoanh do va tung do cua diem
Diem::Diem(float Hoanh, float Tung)
{
    iHoanh = Hoanh;
    iTung = Tung;
}

//Khoi tao voi copy constructor
//Dau vao: mot the hien cua class Diem da duoc khai bao truoc do
//Dau ra: mot the hien cua class Diem duoc sao nguyen gia tri tu gia tri dau vao
Diem::Diem(const Diem &x)
{
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}

//Xuat gia tri ra man hinh
//Dau ra: gia tri iHoanh va iTung
void Diem::Xuat()
{
    cout << "(" <<iHoanh<<";"<<iTung<<")"<<"\n";
}

//Xuat gia tri tung do cua diem iTung
//Dau ra: gia tri iTung
float Diem::GetTungDo()
{
    return iTung;
}

//Xuat gia tri hoanh do cua diem iHoanh
//Dau ra: gia tri iHoanh
float Diem::GetHoanhDo()
{
    return iHoanh;
}

//Thay doi gia tri tung do cua diem iTung
//Dau vao: gia tri tung do muon doi
void Diem::SetTungDo()
{
    float tungdo;
    cout <<"Gia tri tung do muon thay doi: ";
    cin >> tungdo;
    iTung = tungdo;
}

//Thay doi gia tri hoanh do
//Dau vao: gia tri tung do muon doi
void Diem::SetHoanhDo()
{
    float hoanhdo;
    cout <<"Gia tri hoanh do muon thay doi: ";
    cin >> hoanhdo;
    iHoanh = hoanhdo;
}

//Tinh tien diem theo mot vecto
//Dau vao: toa do vecto de tinh tien
//Dau ra: diem da tinh tien
void Diem::TinhTien()
{
    float x, y;
    cout << "Nhap toa do vector t(x, y) de tinh tien diem: ";
    cin >> x >> y;
    iHoanh += x;
    iTung += y;
}




