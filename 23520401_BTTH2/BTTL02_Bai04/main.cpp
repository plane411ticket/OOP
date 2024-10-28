#include <iostream>
#include <vector>
#include "Thi_Sinh.h"
using namespace std;

int main()
{
    cout << "=============================== BAT DAU ===============================";
    int n=0;
    cout << "\n-----------------------------------------------------------------------\n";
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    while (n <= 0)
    {
        cout <<"\nThong tin khong hop le, vui long nhap lai: ";
        cin >>n;
    }
    cout << "-----------------------------------------------------------------------";
    vector <Thong_Tin_Thi_Sinh> DSThiSinh(n);
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap thong tin thi sinh thu "<<i+1<<":";
        cout<<"\n_________________________________________\n";
        cin.ignore();
        DSThiSinh[i].Nhap();
        DSThiSinh[i].Tong();
    }

    cout << "\n-----------------------------------------------------------------------\n";
    cout <<"Danh sach thi sinh co diem tong > 15 diem: ";
    cout << "\n-----------------------------------------------------------------------";
    int dem = 0;

    //Duyet qua fTong cua toan bo thi sinh va in ra thong tin cac thi sinh co diem > 15
    for (int j = 0; j < n; j++)
    {
        if (DSThiSinh[j].getfTong()>15)
        {
            DSThiSinh[j].Xuat();
            dem += 1;
            cout<<"\n_________________________________________\n";
        }
    }
    if (dem == 0)
    {
        cout << "\nKhong co thi sinh nao diem tong lon hon 15.";
    }

    float diemmax = 0;

    //Duyet qua fTong cua toan bo thi sinh va in ra thong tin cac thi sinh co diem cao nhat
    for (int k = 0; k < n; k++)
    {
        if (diemmax < DSThiSinh[k].getfTong())
        {
            diemmax = DSThiSinh[k].getfTong();
        }
    }
    cout << "\n-----------------------------------------------------------------------\n";
    cout << "Thi sinh co diem tong cao nhat: \n";
    cout << "-----------------------------------------------------------------------";
    for (int j = 0; j < n; j++)
    {
        if (DSThiSinh[j].getfTong()== diemmax)
        {
            DSThiSinh[j].Xuat();
            cout<<"\n_________________________________________\n";
        }
    }
}
