#include <iostream>
#include "Diem.h"


using namespace std;

int main()
{
    //Khoi tao mot the hien cua class Diem voi gia tri mac dinh
    Diem a;
    //Khoi tao mot the hien cua class Diem voi 1, 2
    Diem b(1,2);
    //Copy b vao c
    Diem c(b);
    cout << "Diem C: ";
    c.Xuat();
    //Lay ra hoanh do, tung do cua a
    cout << "Hoanh do diem A: " << a.GetHoanhDo();
    cout << "\n";
    cout << "Tung do diem A: " << a.GetTungDo();
    cout << "\n";
    //Thay doi hoanh do, tung do cua b
    b.SetHoanhDo();
    b.Xuat();
    b.SetTungDo();
    b.Xuat();
    //Tinh tien a
    a.TinhTien();
    a.Xuat();
}
