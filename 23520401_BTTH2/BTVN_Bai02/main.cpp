#include <iostream>
#include <vector>
#include <utility>
#include<algorithm>
using namespace std;

//Khoi tao kieu du lieu de luu phan so
struct ps
{
    float tu;
    float mau;
};

int main()
{
    int n, k;
    int vtnn=0;
    int vtln=0;
    float ln = -99999.0;
    float nn = 99999.0;
    vector <ps> Mang;
    vector <pair<float,int>> Danh_Sach;

    //Nhap vao cac gia tri
    cout << "Nhap so luong phan so va so thu k: ";
    cin >> n >> k;
    Mang.resize(n);
    cout << "Nhap phan so: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> Mang[i].tu >> Mang[i].mau;
        while(Mang[i].mau == 0)
        {
            cout << "Mau khong hop le, vui long nhap lai: ";
            cin >> Mang[i].mau;
        }
    }

    //Luu lai gia tri thuc va vi tri
    //Sap xep tang dan
    //Lay ra phan tu lon thu k  va be thu k
    if (k <= n && k > 0)
    {
        for (int i = 0; i < n; i++)
        {
            float a = Mang[i].tu/Mang[i].mau;
            Danh_Sach.push_back(make_pair(a, i));
        }

        sort(Danh_Sach.begin(), Danh_Sach.end());
        cout << "Phan so nho thu " << k <<": "<< Mang[Danh_Sach[k-1].second].tu << "/" << Mang[Danh_Sach[k-1].second].mau;


        cout << "\nPhan so lon thu " << k <<": "<< Mang[Danh_Sach[n-k].second].tu << "/" << Mang[Danh_Sach[n-k].second].mau;
    }
}

