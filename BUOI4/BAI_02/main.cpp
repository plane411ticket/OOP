#include <iostream>
#include "Phong.h"
#include "Deluxe.h"
#include "Premium.h"
#include "Business.h"

using namespace std;

int main()
{
    Business PhongB02;
    Deluxe PhongD02;
    Premium PhongP02;

    cout << "=============================BAT  DAU=============================\n\n";
    cout << "Phong Business duoc khoi tao o ham main: \n";
    Business PhongB01(10);
    PhongB01.Xuat();
    cout << "\n__________________________________________________________________\n";
    
    cout << "\nPhong Business duoc nhap vao: \n";
    PhongB02.Nhap();
    cout << "__________________________________________________________________\n";

    cout << "\nPhong Deluxe duoc khoi tao o ham main: \n";
    Deluxe PhongD01(12, 250000, 200000);
    PhongD01.Xuat();
    cout << "\n__________________________________________________________________\n";

    cout << "\nPhong Deluxe duoc nhap vao: \n";
    PhongD02.Nhap();
    cout << "__________________________________________________________________\n";

    cout << "\nPhong Premium duoc nhap vao: \n";
    PhongP02.Nhap();
    cout << "__________________________________________________________________\n\n";

    unsigned long long delu = PhongD01.DoanhThu() + PhongD02.DoanhThu();
    unsigned long long prem = PhongP02.DoanhThu();
    unsigned long long busi = PhongB01.DoanhThu() + PhongB02.DoanhThu();

    if (busi == delu && delu == prem) 
    {
        cout << "Ba phong co doanh thu bang nhau: " << prem  << " "  << busi << " "  << delu << endl;
    } 
    else if (busi >= delu && busi >= prem) 
    {
        cout << "Phong Business co doanh thu cao nhat: " << busi << endl;
    } 
    else if (delu >= prem) 
    {
        cout << "Phong Deluxe co doanh thu cao nhat: " << delu << endl;
    } 
    else 
    {
        cout << "Phong Premium co doanh thu cao nhat: " << prem << endl;
    }
    cout << "\n=============================KET THUC=============================\n";
    
}