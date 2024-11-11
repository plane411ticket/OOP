#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main()
{
    SoPhuc a, c, d;
    int thuc, ao;
    cout << "So phuc A duoc khoi tao mac dinh: ";
    cout << a;

    SoPhuc b(4,11);
    cout << "\nSo phuc B duoc khoi tao voi phan thuc bang 4 va phan ao bang 11: " << b;

    cout << "\nSo phuc C voi phan thuc va phan ao duoc nhap vao tu ban phim: ";
    cin >> c;

    cout << "So phuc D voi phan thuc va phan ao duoc nhap vao tu ban phim: ";
    cin >> d;

    SoPhuc tong = c+b;
    cout << "\nTong cua so phuc c va so phuc b: ";
    cout << tong;
    cout << "\n";

    SoPhuc hieu = a-d;
    cout << "Hieu cua so phuc a va so phuc d: ";
    cout << hieu;
    cout << "\n";

    SoPhuc tich = b*d;
    cout << "Tich cua so phuc b va so phuc d: ";
    cout << tich;
    cout << "\n";

    SoPhuc thuong = c/d;
    cout << "Thuong cua so phuc c va so phuc d: ";
    cout << thuong;
    cout << "\n\n";

    if (b==c)
    {
        cout << "So phuc B bang So phuc C";
    }
    else
    {
        cout << "So phuc B khac So phuc C";
    }

    if (a!=c)
    {
        cout << "\nSo phuc A khac So phuc C";
    }
    else
    {
        cout << "\nSo phuc A bang So phuc C";
    }

    cout << "\n\nTong, hieu, tich, thuong giua so phuc va so nguyen: \n";

    cout << "Tong cua 5 va b: ";
    SoPhuc Tong01 = 5 + b;
    cout << Tong01;
    cout << "\n";

    cout << "Hieu cua c va 10: ";
    SoPhuc Hieu01 = c - 10;
    cout << Hieu01;
    cout << "\n";

    cout << "Tich cua a va 15: ";
    SoPhuc Tich01 = a * 15;
    cout << Tich01;
    cout << "\n";

    cout << "Thuong cua 20 va b: ";
    SoPhuc Thuong01 = 20/b;
    cout << Thuong01;
    cout << "\n";
}
