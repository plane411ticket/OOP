#include <iostream>
#include "NgayThangNam.h"
using namespace std;

int main()
{
    NgayThangNam a, c, d;

    cout << "Ngay thang nam A duoc khoi tao mac dinh: ";
    cout << a;

    NgayThangNam b(2005,9,1);
    cout << "Ngay thang nam B duoc khoi tao voi nam bang 2005, thang bang 9 va ngay bang 1: " << b;

    cout << "Ngay thang nam C voi ngay, thang, nam duoc nhap vao tu ban phim: ";
    cin >> c;

    cout << "Ngay thang nam D voi ngay, thang, nam duoc nhap vao tu ban phim: ";
    cin >> d;

    cout << "Tong cua 5 va d: ";
    NgayThangNam Tong01 = d + 5;
    cout << Tong01;
    cout << "\n";

    cout << "Hieu cua c va 10: ";
    NgayThangNam Hieu01 = c - 10;
    cout << Hieu01;
    cout << "\n";

    int hieu = b-d;
    cout << "Hieu cua Ngay thang nam b va d: ";
    cout << hieu;
    cout << "\n";

    NgayThangNam tong_02 = ++d;
    cout << "\nd++: ";
    cout << tong_02;
    cout << "\n";

    NgayThangNam hieu_02 = --c;
    cout << "c--: ";
    cout << hieu_02;
    cout << "\n";

    if (b==c)
    {
        cout << "Ngay thang nam B bang Ngay thang nam C";
    }
    else
    {
        cout << "Ngay thang nam B khac Ngay thang nam C";
    }

    if (a!=d)
    {
        cout << "\nNgay thang nam A khac Ngay thang nam D";
    }
    else
    {
        cout << "\nNgay thang nam A bang Ngay thang nam D";
    }

    if (b>=c)
    {
        cout << "\nNgay thang nam B lon hon hoac bang Ngay thang nam C";
    }
    else
    {
        cout << "\nNgay thang nam B nho hon Ngay thang nam C";
    }

    if (a<=b)
    {
        cout << "\nNgay thang nam A nho hon hoac bang Ngay thang nam B";
    }
    else
    {
        cout << "\nNgay thang nam A lon hon Ngay thang nam B";
    }

    if (a>c)
    {
        cout << "\nNgay thang nam A lon hon Ngay thang nam C";
    }
    else
    {
        cout << "\nNgay thang nam A nho hon hoac bang Ngay thang nam C";
    }

    if (b<c)
    {
        cout << "\nNgay thang nam B nho hon Ngay thang nam C";
    }
    else
    {
        cout << "\nNgay thang nam B lon hon hoac bang Ngay thang nam C";
    }
}
