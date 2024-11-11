#include <iostream>
#include "PhanSo.h"

using namespace std;

int main()
{
    PhanSo a, c, d;
    int tuso, mauso;
    cout << "Phan so A duoc khoi tao mac dinh: ";
    cout << a;

    PhanSo b(4,1);
    cout << "\nPhan so B: " << b;

    cout << "\nNhap phan so C: ";
    cin >> c;

    cout << "Nhap phan so D: ";
    cin >> d;

    PhanSo tong = b+d;
    cout << "\nPhan so B cong phan so D: ";
    cout << tong;
    cout << "\n";

    PhanSo hieu = c-d;
    cout << "Phan so C tru phan so D: ";
    cout << hieu;
    cout << "\n";

    PhanSo tich = b*c;
    cout << "Phan so B nhan phan so C: ";
    cout << tich;
    cout << "\n";

    PhanSo thuong = d/c;
    cout << "Phan so D chia phan so C: ";
    cout << thuong;
    cout << "\n\n";

    if (b==5)
    {
        cout << "Phan so B bang 5";
    }
    else
    {
        cout << "Phan so B khac 5";
    }

    if (a!=c)
    {
        cout << "\nPhan so A khac phan so C";
    }
    else
    {
        cout << "\nPhan so A bang phan so C";
    }

    if (b>=c)
    {
        cout << "\nPhan so B lon hon hoac bang phan so C";
    }
    else
    {
        cout << "\nPhan so B nho hon phan so C";
    }

    if (a<=-10)
    {
        cout << "\nPhan so A nho hon hoac bang -10";
    }
    else
    {
        cout << "\nPhan so A lon hon -10";
    }

    if (d>b)
    {
        cout << "\nPhan so D lon hon phan so B";
    }
    else
    {
        cout << "\nPhan so D nho hon hoac bang phan so B";
    }

    if (12>d)
    {
        cout << "\nPhan so D nho hon 12";
    }
    else
    {
        cout << "\nPhan so D lon hon hoac bang 12";
    }
   
    PhanSo Tong01 = 5 + b;
    cout << "\n\nSo 5 cong Phan so B: ";
    cout << Tong01;
    cout << "\n";

    PhanSo Hieu01 = c - 7;
    cout << "Phan so C tru so 7: ";
    cout << Hieu01;
    cout << "\n";

    PhanSo Tich01 = d * 12;
    cout << "Phan so D nhan so 12: ";
    cout << Tich01;
    cout << "\n";

    PhanSo Thuong01 = 6/d;
    cout << "So 6 chia Phan so D: ";
    cout << Thuong01;
    cout << "\n";
}

