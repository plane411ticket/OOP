#include "Diem.h"
#include <iostream>
using namespace std;

// Nhap gia tri vao tu ban phim
// Dau ra : mot the hien cua class Diem
void Diem::Nhap()
{
    cin >> iHoanh;
    cin >> iTung;
}

// Xuat gia tri ra man hinh
// Dau ra : gia tri iHoanh va iTung
void Diem::Xuat()
{
    cout << "(" <<iHoanh<<","<<iTung<<")"<<"\n";
}

// Nhan doi gia tri cua tung do va hoanh do
// Dau vao: toa do mot diem
// Dau ra: toa do voi hoanh do va tung do gap doi ban dau
void Diem::NhanDoi()
{
    iHoanh *= 2;
    iTung  *= 2;
}

// Ham dua ve goc toa do
// Dau vao: toa do mot diem
// Dau ra: toa do cua goc toa do (0,0)
void Diem::GocToaDo()
{
    iHoanh = 0;
    iTung  = 0;
}

// Ham tinh tien diem
// Dau vao: toa do mot diem, chieu tinh tien va do dai tịnh tien
// Dau ra: diem da duoc tinh tien
void Diem::TinhTien()
{
    int k;
    float d;
    cin >> k;
    cin >> d;
    if (k == 0)
    {
        iHoanh += d;
    }
    else
    {
        iTung  += d;
    }
}




