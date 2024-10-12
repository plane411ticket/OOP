#include <algorithm>
#include <iostream>
#include <cstdlib>

using namespace std;
//Tinh UCLN giua tu so TS va mau so MS. Chia TS va MS cho UCLN.
//Tao struct luu TS va MS cua phan so.
struct ps{
    int tu;
    int mau;
};

//Ham tinh UCLN cua TS va MS.
//Dau vao: TS va MS
//Dau ra: TS/UCLN, MS/UCLN
ps Rut_gon(ps phanso){
    int ucln= __gcd(phanso.tu, phanso.mau);
    if (ucln != 0){
        phanso.tu = phanso.tu/ucln;
        phanso.mau = phanso.mau/ucln;
    }
    return phanso;
}

//Ham dinh dang dau sao cho dau am (neu co) luon nam tren tu.
ps Dinh_dang_dau(ps phanso){
    if (phanso.tu * phanso.mau < 0){
        phanso.tu = -1 * abs(phanso.tu);
        phanso.mau = abs(phanso.mau);
    }
    else{
        phanso.tu = 1*abs(phanso.tu);
        phanso.mau = 1*abs(phanso.mau);
    }
    return phanso;
}

int main(){
    //Khoi tao phan so.
    ps phanso;
    phanso.tu = 0;
    phanso.mau = 0;

    //Nhap TS va MS. Neu MS = 0, nhap lai MS.
    cout << "Nhap phan so: "<<"\n";
    cout << "Nhap tu so: ";
    cin  >>phanso.tu;
    cout << "Nhap mau so: ";
    cin  >>phanso.mau;
    while (phanso.mau == 0){
        cout << "Mau phai khac khong, vui long nhap lai mau: ";
        cin >> phanso.mau;
    }

    //Xuat ket qua sau khi rut gon.
    if (phanso.tu == 0){
        cout << "Phan so da rut gon: 0";
    }
    else if (phanso.tu % phanso.mau ==0){
        int ketqua = phanso.tu / phanso.mau;
        cout << "Phan so da rut gon: "<<ketqua;
    }
    else{
        phanso = Rut_gon(phanso);
        phanso = Dinh_dang_dau(phanso);
        cout << "Phan so da rut gon: "<<phanso.tu<<"/"<<phanso.mau;
    }

    return 0;
}
