#include <iostream>
#include "Diem.h"
using namespace std;

int main()
{
    cout << "============ BAT DAU ============\n";
    Diem Diem_01;
    int n, value;
    //Nhap toa do cua diem
    Diem_01.Nhap();
    //Nhap so luong chi thi
    cin >> n;

    //Nhap cac chi thi
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        if (value == 1)
        {
            Diem_01.NhanDoi();
        }
        else if (value == 2)
        {
            Diem_01.GocToaDo();
        }
        else if (value == 3)
        {
            Diem_01.TinhTien();
        }
    }

    //Xuat ket qua
    Diem_01.Xuat();
    cout << "============ KET THUC ============";
}
