#include <iostream>
#include "NhanVien.h"
#include "QuanLy.h"
#include "KySu.h"
using namespace std;

int main()
{
    cout << "====================Quan Ly====================\n";
    QuanLy A;
    A.Nhap();
    A.Xuat();
    cout << "====================Ky   Su====================\n";
    KySu B;
    B.Nhap();
    B.Xuat();
    cout << "\n===============================================";
}
