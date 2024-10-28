#include <iostream>
#include <cmath>
#include <vector>
#include "Diem.h"
#include "Da_Giac.h"

using namespace std;

int main()
{
    cout<<"================ BAT DAU ================\n\n";
    Da_Giac Da_Giac_01;
    Da_Giac_01.Nhap();
    Da_Giac_01.Xuat();
    cout<<"\n_________________________________________\n";
    Da_Giac_01.TinhTien();
    Da_Giac_01.Xuat();
    cout<<"\n_________________________________________\n";
    Da_Giac_01.PhongTo();
    Da_Giac_01.Xuat();
    cout<<"\n_________________________________________\n";
    Da_Giac_01.ThuNho();
    Da_Giac_01.Xuat();
    cout<<"\n_________________________________________\n";
    Da_Giac_01.Quay();
    Da_Giac_01.Xuat();
    cout<<"\n\n================ KET THUC ================";

    return 0;
}
