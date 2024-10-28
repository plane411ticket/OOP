#include "Diem.h"
#include <iostream>
#include <cmath>
using namespace std;

//Khoi tao mac dinh voi gia tri 0
//Khong co dau vao va dau ra
Diem::Diem()
{
    iHoanh = 0;
    iTung = 0;
}

//Khoi tao voi gia tri khi code cua class Diem
//Dau vao: Hoanh do va tung do cua Diem
Diem::Diem(float Hoanh, float Tung)
{
    iHoanh = Hoanh;
    iTung = Tung;
}

//Nhap  gia tri vao tu ban phim
//Dau ra: mot the hien cua class Diem
void Diem::Nhap()
{
    cout << "Nhap hoanh do: ";
    cin >> iHoanh;
    cout << "Nhap tung do: ";
    cin >>iTung;
}

//Khoi tao voi copy constructor
//Dau vao: Mot the hien cua class Diem da duoc khai bao truoc do
//Dau ra: Mot the hien cua class Diem duoc sao nguyen gia tri tu gia tri dau vao
Diem::Diem(const Diem &x)
{
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}

//Xuat gia tri ra man hinh
//Dau ra: gia tri iHoanh va iTung
void Diem::Xuat()
{
    cout << "(" <<iHoanh<<";"<<iTung<<")";
}

//Xuat gia tri tung do cua Diem iTung
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
//Dau vao: gia tri hoanh do muon doi
void Diem::SetHoanhDo()
{
    float hoanhdo;
    cout <<"Gia tri hoanh do muon thay doi: ";
    cin >> hoanhdo;
    iHoanh = hoanhdo;
}

//Tinh tien diem theo mot vecto
//Dau vao: toa do vecto(x,y) de tinh tien
//Dau ra: diem da tinh tien
void Diem::TinhTien(float x, float y)
{
    iHoanh += x; // Tịnh tiến theo hoành độ
    iTung += y;  // Tịnh tiến theo tung độ
}

//Nhan tung diem voi chi so muon phong to
//Dau vao: so lan phong to
//Dau ra: diem da phong to
void Diem::PhongTo(float x)
{
    iHoanh *= x;
    iTung  *= x;
}

//Nhan tung diem voi chi so muon thu nho
//Dau vao: so lan thu nho
//Dau ra: diem da thu nho
void Diem::ThuNho(float x)
{
    iHoanh = iHoanh/x;
    iTung = iTung/x;
}

//Phep quay dinh voi tam quay va goc quay
//Dau vao: Tam quay, Goc quay
//Dau ra: Dinh sau khi quay
void Diem::Quay(Diem tamquay, float gocquay)
{
    iHoanh = tamquay.GetHoanhDo()+ (iHoanh - tamquay.GetHoanhDo())*cos(gocquay) - (iTung - tamquay.GetTungDo())*sin(gocquay);
    iTung = tamquay.GetTungDo() + (iHoanh - tamquay.GetHoanhDo())*sin(gocquay) + (iTung - tamquay.GetTungDo())*cos(gocquay);
}




