#include <iostream>
#include <cmath>
#include "Dinh.h"
#include "Tam_Giac.h"

using namespace std;

int main()
{
    cout<<"================ BAT DAU ================\n\n";
    Tam_Giac tamgiac_ABC;
    tamgiac_ABC.Nhap();
    tamgiac_ABC.Xuat();
    cout<<"\n_________________________________________\n";
    tamgiac_ABC.TinhTien();
    tamgiac_ABC.Xuat();
    cout<<"\n_________________________________________\n";
    tamgiac_ABC.PhongTo();
    tamgiac_ABC.Xuat();
    cout<<"\n_________________________________________\n";
    tamgiac_ABC.ThuNho();
    tamgiac_ABC.Xuat();
    cout<<"\n_________________________________________\n";
    tamgiac_ABC.Quay();
    tamgiac_ABC.Xuat();
    cout<<"\n\n================ KET THUC ================";

    return 0;
}
