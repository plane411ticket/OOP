#include <iostream>
#include <cstdlib>
#include <ctime>
#include "GiaSuc.h"
#include "De.h"
#include "Bo.h"
#include "Cuu.h"
using namespace std;

int main()
{
    srand(time(0));
    int SLBo, SLDe, SLCuu;
    cout << "Nhap vao so luong bo: ";
    cin >> SLBo;
    while (SLBo <= 0) 
    {
        cout << "So luong bo khong hop le. Vui long nhap lai: ";
        cin >> SLBo;
    }

    cout << "Nhap vao so luong de: ";
    cin >> SLDe;
    while (SLDe <= 0) 
    {
        cout << "So luong de khong hop le. Vui long nhap lai: ";
        cin >> SLDe;
    }

    cout << "Nhap vao so luong cuu: ";
    cin >> SLCuu;
    while (SLCuu <= 0) 
    {
        cout << "So luong cuu khong hop le. Vui long nhap lai: ";
        cin >> SLCuu;
    }

    Bo NuoiBo01(SLBo, 0);
    De NuoiDe01(SLDe, 0);
    Cuu NuoiCuu01(SLCuu, 0);

    NuoiBo01.Keu();
    NuoiDe01.Keu();
    NuoiCuu01.Keu();

    NuoiBo01.SinhCon();
    NuoiDe01.SinhCon();
    NuoiCuu01.SinhCon();

    NuoiBo01.ChoSua();
    NuoiDe01.ChoSua();
    NuoiCuu01.ChoSua();

    cout << "So luong bo: " << NuoiBo01.getSLGS() << endl;
    cout << "So luong de: " << NuoiDe01.getSLGS() << endl;
    cout << "So luong cuu: " << NuoiCuu01.getSLGS() << endl;

    cout << "Luong sua cua bo: " << NuoiBo01.getSLS() << endl;
    cout << "Luong sua cua de: " << NuoiDe01.getSLS() << endl;
    cout << "Luong sua cua cuu: " << NuoiCuu01.getSLS() << endl;
    
}