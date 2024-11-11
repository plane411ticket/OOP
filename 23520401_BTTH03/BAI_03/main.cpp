#include <iostream>
#include "ThoiGian.h"
using namespace std;

int main()
{
    ThoiGian a, c, d;
    int gio, phut, giay;
    cout << "Thoi gian A duoc khoi tao mac dinh: ";
    cout << a;

    ThoiGian b(4,1,1);
    cout << "\nThoi gian B duoc khoi tao voi gio bang 4, phut bang 1 va giay bang 1: " << b;

    cout << "\nThoi gian C voi gio, phut, giay duoc nhap vao tu ban phim: ";
    cin >> c;

    cout << "\nThoi gian D voi gio, phut, giay duoc nhap vao tu ban phim: ";
    cin >> d;

    cout << "Tong cua 5 va d: ";
    ThoiGian Tong01 = d + 5;
    cout << Tong01;
    cout << "\n";

    cout << "Hieu cua c va 10: ";
    ThoiGian Hieu01 = c - 10;
    cout << Hieu01;
    cout << "\n";

    ThoiGian tong = c+d;
    cout << "Tong cua Thoi gian c va d: ";
    cout << tong;
    cout << "\n";

    ThoiGian hieu = d-c;
    cout << "Hieu cua Thoi gian d va c: ";
    cout << hieu;
    cout << "\n";

    ThoiGian tong_02 = ++c;
    cout << "c++: ";
    cout << tong_02;
    cout << "\n";

    ThoiGian hieu_02 = --b;
    cout << "b--: ";
    cout << hieu_02;
    cout << "\n";

    if (b==c)
    {
        cout << "Thoi gian B bang Thoi gian C";
    }
    else
    {
        cout << "Thoi gian B khac Thoi gian C";
    }

    if (a!=d)
    {
        cout << "\nThoi gian A khac Thoi gian D";
    }
    else
    {
        cout << "\nThoi gian A bang Thoi gian D";
    }

    if (b>=d)
    {
        cout << "\nThoi gian B lon hon hoac bang Thoi gian D";
    }
    else
    {
        cout << "\nThoi gian B nho hon Thoi gian D";
    }

    if (a<=c)
    {
        cout << "\nThoi gian A nho hon hoac bang Thoi gian C";
    }
    else
    {
        cout << "\nThoi gian A lon hon Thoi gian C";
    }

    if (c>d)
    {
        cout << "\nThoi gian C lon hon Thoi gian D";
    }
    else
    {
        cout << "\nThoi gian C nho hon hoac bang Thoi gian D";
    }

    if (b<a)
    {
        cout << "\nThoi gian B nho hon Thoi gian A";
    }
    else
    {
        cout << "\nThoi gian B lon hon hoac bang Thoi gian A";
    }
}
