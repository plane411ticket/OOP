#include <algorithm>
#include <iostream>
#include <cstdlib>

using namespace std;
//Ta co: a/b > c>d => a*d > c*b
//Su dung cong thuc a*d > c*b de so sanh hai phan so
//Tao struct luu phan so PS gom tu so TS va mau so MS
struct ps {
    int tu;
    int mau;
};

// Ham rut gon phan so
//Dau vao: phan so voi TS va MS
//Dau ra: phan so voi TS/UCLN, MS/UCLN
ps Rut_gon(ps phanso) {
    int ucln = __gcd(phanso.tu, phanso.mau);
    if (ucln != 0) {
        phanso.tu = phanso.tu / ucln;
        phanso.mau = phanso.mau / ucln;
    }
    return phanso;
}

// Ham dinh dang dau (Dau am neu co, luon nam tren tu)
//Dau vao: phan so
//Dau ra: phan so voi dau am tren tu
ps Dinh_dang_dau(ps phanso) {
    if (phanso.tu * phanso.mau < 0) {
        phanso.tu = -1 * abs(phanso.tu);
        phanso.mau = abs(phanso.mau);
    } else {
        phanso.tu = abs(phanso.tu);
        phanso.mau = abs(phanso.mau);
    }
    return phanso;
}

int main() {
    // Khoi tao gia tri hai phan so
    ps phanso_01, phanso_02;
    phanso_01.tu = 0;
    phanso_01.mau = 0;
    phanso_02.tu = 0;
    phanso_02.mau = 0;

    // Nhap TS, MS voi MS luon khac 0
    cout << "Nhap phan so dau tien:\n";
    cout << "Nhap tu so: ";
    cin >> phanso_01.tu;
    cout << "Nhap mau so: ";
    cin >> phanso_01.mau;
    while (phanso_01.mau == 0) {
        cout << "Mau phai khac khong, vui long nhap lai mau: ";
        cin >> phanso_01.mau;
    }
    phanso_01 = Dinh_dang_dau(phanso_01);

    // Nhap TS, MS voi MS luon khac 0
    cout << "Nhap phan so cuoi cung:\n";
    cout << "Nhap tu so: ";
    cin >> phanso_02.tu;
    cout << "Nhap mau so: ";
    cin >> phanso_02.mau;
    while (phanso_02.mau == 0) {
        cout << "Mau phai khac khong, vui long nhap lai mau: ";
        cin >> phanso_02.mau;
    }
    phanso_02 = Dinh_dang_dau(phanso_02);

    //So sanh hai phan so va in ra phan so lon hon
    if (phanso_01.tu * phanso_02.mau > phanso_02.tu * phanso_01.mau){
        if (phanso_01.tu == 0){
            cout << "Phan so lon nhat: 0";
        }
        else if (phanso_01.tu % phanso_01.mau ==0){
            int ketqua = phanso_01.tu / phanso_01.mau;
            cout << "Phan so lon nhat: "<<ketqua;
        }
        else{
            phanso_01 = Dinh_dang_dau(phanso_01);
            cout << "Phan so lon nhat: "<<phanso_01.tu<<"/"<<phanso_01.mau;
        }
    }
    else if (phanso_01.tu * phanso_02.mau < phanso_02.tu * phanso_01.mau){
        if (phanso_02.tu == 0){
            cout << "Phan so lon nhat: 0";
        }
        else if (phanso_02.tu % phanso_02.mau ==0){
            int ketqua = phanso_02.tu / phanso_02.mau;
            cout << "Phan so lon nhat: "<<ketqua;
        }
        else{
            phanso_02 = Dinh_dang_dau(phanso_02);
            cout << "Phan so lon nhat: "<<phanso_02.tu<<"/"<<phanso_02.mau;
        }
    }
    else{
        cout <<"Hai phan so bang nhau, khong co phan so lon hon.\n";
        if (phanso_02.tu == 0){
            cout << "Phan so: 0";
        }
        else if (phanso_02.tu % phanso_02.mau ==0){
            int ketqua = phanso_02.tu / phanso_02.mau;
            cout << "Phan so: "<<ketqua;
        }
        else{
            phanso_02 = Dinh_dang_dau(phanso_02);
            cout << "Phan so: "<<phanso_02.tu<<"/"<<phanso_02.mau;
        }
    }
    return 0;
}
