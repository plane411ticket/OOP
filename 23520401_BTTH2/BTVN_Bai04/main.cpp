#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int n, k = 0;
    bool check = false;
    vector<vector<int>> MT_Ban_Dau;
    vector<vector<int>> MT;
    vector<vector<int>> MT_Moi;

    //Nhap so hang/ cot cua ma tran vuong
    //cout << "Nhap so hang/cot cua ma tran vuong: ";
    cin >> n;
    MT.resize(n, vector<int>(n));
    MT_Moi.resize(n, vector<int>(n));
    MT_Ban_Dau.resize(n, vector<int>(n));


    //Nhap gia tri cua ma tran
    //cout << "Nhap gia tri cua ma tran: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> MT[i][j];
            MT_Ban_Dau[i][j] = MT[i][j];
        }
    }


    //So sanh ma tran bien doi voi ma tran ban dau
    //Neu bang thi thoat khoi vong lap
    //Neu khong bang thi tang k, va chay lai cong thuc
    //Bien doi theo cong thuc Arnold's Cat Mapp
    while (check == false)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                MT_Moi[i][j] = MT[(2*i+j)%n][(i+j)%n];
            }
        }
        k += 1;
        if (MT_Ban_Dau==MT_Moi)
        {
            check = true;
        }
        else
        {
            MT = MT_Moi;
        }
    }
    cout << k;
}
