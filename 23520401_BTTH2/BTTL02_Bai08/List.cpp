#include "List.h"
#include <iostream>

using namespace std;

//Khoi tao gia tri mac dinh
List::List() : Mang(nullptr), kichthuoc(0) {}

//Xoa (Giai phong bo nho sau khi ket thuc)
List::~List()
{
    delete [] Mang;
}

//Them phan tu x vao List
//Dau vao: phan tu x muon them
//Dau ra: List moi voi n+1 phan tu va phan tu thu n = x
void List::Them(double x)
{
    double* Mang_Moi = new double[kichthuoc + 1];
    for(int i = 0; i < kichthuoc; i++)
    {
        Mang_Moi[i] = Mang[i];
    }

    Mang_Moi[kichthuoc] = x;
    delete [] Mang;
    Mang = Mang_Moi;
    kichthuoc = kichthuoc + 1;
}

//Xoa phan tu dau tien co gia tri x
//Dau vao: phan tu x muon xoa
//Dau ra: List moi co n-1 phan tu (neu tim thay x trong List)
void List::Xoa(double x)
{
    for (int i = 0; i < kichthuoc; i++)
    {
        if (Mang[i] == x)
        {
            for (int j = i; j < kichthuoc-1; j++)
            {
                Mang[j] = Mang [j+1];
            }

            kichthuoc = kichthuoc - 1;

            break;
        }
    }
}

//Xoa tat ca phan tu co gia tri x
//Dau vao: phan tu x muon xoa
//Dau ra: List moi khong con phan tu nao bang x (neu tim thay x trong List)
void List::Xoa_Tat_Ca(double x)
{
    for (int i = 0; i < kichthuoc; i++)
    {
        if (Mang[i] == x)
        {
            for (int j = i; j < kichthuoc-1; j++)
            {
                Mang[j] = Mang [j+1];
            }

            kichthuoc = kichthuoc - 1;
        }
    }
}

//Thay doi gia tri thu x bang gia tri y
//Dau vao: vi tri x de thay doi, gia tri y muon thay doi
//Dau ra: List da duoc thay doi gia tri (neu vi tri x co ton tai)
void List::Thay_Doi(int x, double y)
{
    if (x < kichthuoc && x >= 0)
    {
        Mang[x] = y;
    }
}

//Xuat toan bo phan tu cua List theo dinh dang de cho
void List::Xuat()
{
    cout << "[";
    for (int i = 0; i < kichthuoc; i++)
    {
        cout << Mang[i];
        if (i < kichthuoc - 1)
        {
            cout << ",";
        }
    }
    cout << "]";
}

