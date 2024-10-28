#include <iostream>
#include <vector>
using namespace std;

struct ps
{
    float tu;
    float mau;
};

int main()
{
    int n;
    int vtnn=0;
    int vtln=0;
    float ln = -99999.0;
    float nn = 99999.0;
    vector <ps> Mang;

    //Nhap vao so luong phan tu, tu so va mau so
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

    //Duyet qua mang de tim ra phan so nho nhat va phan so lon nhat
    for (int i = 0; i < n; i++)
    {
        float a = Mang[i].tu/Mang[i].mau;

        if (ln < a)
        {
            ln = a;
            vtln = i;
        }

        if (nn > a)
        {
            nn = a;
            vtnn = i;
        }
    }

    //In ra phan so nho nhat va lon nhat
    cout << "Phan so nho nhat: " << Mang[vtnn].tu << "/" << Mang[vtnn].mau;
    cout << "\nPhan so lon nhat: " << Mang[vtln].tu << "/" << Mang[vtln].mau;
}
