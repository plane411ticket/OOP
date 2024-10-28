#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

//Kieu du lieu luu thong tin cua phan so gom tu va mau
struct ps
{
    float tu;
    float mau;
};

int main()
{
    int n;
    ps Dich;
    float GiaTri=0.0;
    vector <ps> Mang;
    vector <pair<float,int>> Danh_Sach;

    //Nhap vao so luong, mang phan so va phan so dich
    cout << "Nhap so luong phan so: ";
    cin >> n;
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

    cout << "Nhap phan so dich: ";
    cin >> Dich.tu >> Dich.mau;
    GiaTri = Dich.tu/Dich.mau;

    //Tao pair de luu gia tri thuc cua phan so va vi tri
    for (int i = 0; i < n; i++)
    {
        float a = Mang[i].tu/Mang[i].mau;
        Danh_Sach.push_back(make_pair(a, i));
    }

    //Sap xep theo tang dan gia tri thuc cua phan so
    sort(Danh_Sach.begin(), Danh_Sach.end());

    //Voi mang co n phan tu se lay ra duoc 2^n tap con
    //Lay tung phan tu trong cac tap con nhan nhau
    //Neu bang thi ket thuc
    //Neu khong bang thi tiep tuc
    for (int i = 0; i < (1 << n); i++) //Lay ra tat ca tap con
    {
        float KetQua = 1.0;
        vector <pair<float,int>> KQua;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j)) //Lay ra phan tu cua tap con
            {
                KetQua *= Danh_Sach[j].first;
                KQua.push_back(Danh_Sach[j]);
            }
            if (((KetQua - GiaTri) == 0) && (j == (n-1)))
            {
                for (int k = 0; k < KQua.size(); k++)
                {
                    cout << Mang[KQua[k].second].tu << "/" << Mang[KQua[k].second].mau << " ";
                }
                i = 1 << n; //Dung vong lap
            }
        }
    }

}

