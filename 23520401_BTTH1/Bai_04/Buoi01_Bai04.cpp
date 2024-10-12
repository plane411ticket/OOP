#include <iostream>
#include <cmath>

using namespace std;
//Ham tinh sinx theo cong thuc Taylor
//Ham tinh giai thua
//Dau vao: n
//Dau ra: n! (Tinh de quy, lay n*(n-1) cho de khi n = 0)
long long GiaiThua(long long n){
    if (n == 0){
        return 1;
    }
    return n * GiaiThua(n - 1);
}

int main()
{
    long double x, tong, giatrithun, bandau;
    long long n;

    //Nhap gia tri cua x
    cout << "Nhap gia tri cua x: ";
    cin >> x;

    bandau = x;

    //Xu li so lieu de x luon nam khoang {-3Pi/2; 3Pi/2}
    //Xu li voi so 2Pi vì sau moi 2Pi vong tron luong giac se lap lại gia tri
    while(x > (3*M_PI/2))
    {
        x = x - 2*M_PI;
    }
    while(x < (-(3*M_PI/2)))
    {
        x = x + 2*M_PI;
    }

    tong = x;
    giatrithun = x;
    n = 1;

    //Tinh sin(x) theo cong thuc Taylor
    while (abs(giatrithun) >= 0.00001)
    {
        long long giatri = GiaiThua(2*n + 1);
        giatrithun = pow(-1, n) * (pow(x, 2*n + 1)) /giatri;
        tong += giatrithun;
        n += 1;
    }

    cout << "Voi do chinh xac 0.00001, Sin(" << bandau << ") = " << tong;

    return 0;
}
