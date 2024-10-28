#include "Dinh.h"
#include <iostream>
#include <cmath>
using namespace std;

//Khoi tao mac dinh voi gia tri 0
//Khong co dau vao va dau ra
Dinh::Dinh()
{
    iHoanh = 0;
    iTung = 0;
}

//Khoi tao voi gia tri khi code cua class Dinh
//Dau vao: Hoanh do va tung do cua Dinh
Dinh::Dinh(float Hoanh, float Tung)
{
    iHoanh = Hoanh;
    iTung = Tung;
}

//Nhap  gia tri vao tu ban phim
//Dau ra: mot the hien cua class Dinh
void Dinh::Nhap()
{
    cout << "Nhap hoanh do: ";
    cin >> iHoanh;
    cout << "Nhap tung do: ";
    cin >>iTung;
}

//Khoi tao voi copy constructor
//Dau vao: Mot the hien cua class Dinh da duoc khai bao truoc do
//Dau ra: Mot the hien cua class Dinh duoc sao nguyen gia tri tu gia tri dau vao
Dinh::Dinh(const Dinh &x)
{
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}

//Xuat gia tri ra man hinh
//Dau ra: gia tri iHoanh va iTung
void Dinh::Xuat()
{
    cout << "(" <<iHoanh<<";"<<iTung<<")";
}

//Xuat gia tri tung do cua dinh iTung
//Dau ra: gia tri iTung
float Dinh::GetTungDo()
{
    return iTung;
}

//Xuat gia tri hoanh do cua dinh iHoanh
//Dau ra: gia tri iHoanh
float Dinh::GetHoanhDo()
{
    return iHoanh;
}

//Thay doi gia tri tung do cua dinh iTung
//Dau vao: gia tri tung do muon doi
void Dinh::SetTungDo()
{
    float tungdo;
    cout <<"Gia tri tung do muon thay doi: ";
    cin >> tungdo;
    iTung = tungdo;
}

//Thay doi gia tri hoanh do
//Dau vao: gia tri hoanh do muon doi
void Dinh::SetHoanhDo()
{
    float hoanhdo;
    cout <<"Gia tri hoanh do muon thay doi: ";
    cin >> hoanhdo;
    iHoanh = hoanhdo;
}

//Tinh tien dinh theo mot vecto
//Dau vao: toa do vecto(x,y) de tinh tien
//Dau ra: dinh da tinh tien
void Dinh::TinhTien(float x, float y)
{
    iHoanh += x; // Tịnh tiến theo hoành độ
    iTung += y;  // Tịnh tiến theo tung độ
}

//Nhan tung dinh voi chi so muon phong to
//Dau vao: so lan phong to
//Dau ra: dinh da phong to
void Dinh::PhongTo(float x)
{
    iHoanh *= x;
    iTung  *= x;
}

//Nhan tung dinh voi chi so muon thu nho
//Dau vao: so lan thu nho
//Dau ra: dinh da thu nho
void Dinh::ThuNho(float x)
{
    iHoanh = iHoanh/x;
    iTung = iTung/x;
}

//Phep quay dinh voi tam quay va goc quay
//Dau vao: Tam quay, Goc quay
//Dau ra: Dinh sau khi quay
void Dinh::Quay(Dinh tamquay, float gocquay)
{
    iHoanh = tamquay.GetHoanhDo()+ (iHoanh - tamquay.GetHoanhDo())*cos(gocquay) - (iTung - tamquay.GetTungDo())*sin(gocquay);
    iTung = tamquay.GetTungDo() + (iHoanh - tamquay.GetHoanhDo())*sin(gocquay) + (iTung - tamquay.GetTungDo())*cos(gocquay);
}




