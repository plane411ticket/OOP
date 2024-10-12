#include <bits/stdc++.h>

using namespace std;
//Tinh tong, hieu, tich, thuong cua hai phan so
//Tao struct luu phan so PS gom tu so TS va mau so MS
struct ps{
    int tu;
    int mau;
};

//Ham rut gon phan so
//Dau vao: phan so voi TS va MS
//Dau ra: phan so voi TS/UCLN va MS/UCLN
ps rut_gon(ps phanso){
    int ucln= __gcd(phanso.tu, phanso.mau);
    if (ucln != 0)
    {
        phanso.tu = phanso.tu/ucln;
        phanso.mau = phanso.mau/ucln;
    }
    return phanso;
}

//Ham tinh tong cua hai phan so
//Dau vao: hai phan so
//Dau ra: mot phan so la tong hai phan so tren
ps tinh_tong(ps one, ps two){
    ps tong;
    tong.mau = one.mau*two.mau;
    tong.tu = one.tu*two.mau + two.tu*one.mau;
    tong = rut_gon(tong);
    if (tong.mau < 0)
    {
        tong.mau *= -1;
        tong.tu *= -1;
    }
    return tong;
};

//Ham tinh hieu cua hai phan so
//Dau vao: hai phan so
//Dau ra: mot phan so la hieu hai phan so tren
ps tinh_hieu(ps one, ps two){
    ps hieu;
    hieu.mau = one.mau*two.mau;
    hieu.tu = one.tu*two.mau - two.tu*one.mau;
    hieu = rut_gon(hieu);
    if (hieu.mau < 0)
    {
        hieu.mau *= -1;
        hieu.tu *= -1;
    }
    return hieu;
}

//Ham tinh tich cua hai phan so
//Dau vao: hai phan so
//Dau ra: mot phan so la tich hai phan so tren
ps tinh_tich(ps one, ps two){
    ps tich;
    tich.mau = one.mau*two.mau;
    tich.tu = one.tu*two.tu;
    tich = rut_gon(tich);
    if (tich.mau < 0)
    {
        tich.mau *= -1;
        tich.tu *= -1;
    }
    return tich;
}

//Ham tinh thuong cua hai phan so
//Dau vao: hai phan so
//Dau ra: mot phan so la thuong hai phan so tren
ps tinh_thuong(ps one, ps two){
    ps thuong;
    thuong.mau = one.mau*two.tu;
    thuong.tu = one.tu*two.mau;
    thuong = rut_gon(thuong);
    if (thuong.mau < 0)
    {
        thuong.mau *= -1;
        thuong.tu *= -1;
    }
    return thuong;
}

//Ham dinh dang dau (Dau am neu co, luon nam tren tu)
//Dau vao: phan so
//Dau ra: phan so voi dau am luon nam tren tu
ps Dinh_dang_dau(ps phanso)
{
    if (phanso.tu * phanso.mau < 0)
    {
        phanso.tu = -1 * abs(phanso.tu);
        phanso.mau = abs(phanso.mau);
    }
    else
    {
        phanso.tu = 1*abs(phanso.tu);
        phanso.mau = 1*abs(phanso.mau);
    }
    return phanso;
}

//Xuat hai phan so
void xuat(ps phanso)
{
    if (phanso.tu == 0)
    {
        cout << "0";
    }
    else if (phanso.tu % phanso.mau ==0)
    {
        int ketqua = phanso.tu / phanso.mau;
        cout << ketqua;
    }
    else
    {
        phanso = Dinh_dang_dau(phanso);
        cout << phanso.tu<<"/"<<phanso.mau;
    }
}

int main()
{
    //Khoi tao hai phan so
    ps phanso_01;
    ps phanso_02;
    ps tong;
    ps hieu;
    ps tich;
    ps thuong;
    phanso_01.tu = 0;
    phanso_01.mau = 0;
    phanso_02.tu = 0;
    phanso_02.mau = 0;

    //Nhap tu so, mau so phan so 1
    cout << "Nhap phan so dau tien: "<<"\n";
    cout << "Nhap tu so: ";
    cin  >>phanso_01.tu;
    cout << "Nhap mau so: ";
    cin  >>phanso_01.mau;
    while (phanso_01.mau == 0)
    {
        cout << "Mau phai khac khong, vui long nhap lai mau: ";
        cin >> phanso_01.mau;
    }

    //Nhap tu so, mau so phan so thu 2
    cout << "Nhap phan so cuoi cung: "<<"\n";
    cout << "Nhap tu so: ";
    cin  >>phanso_02.tu;
    while (phanso_02.tu == 0)
    {
        cout << "Tu phai khac khong, vui long nhap lai tu: ";
        cin >> phanso_02.tu;
    }
    cout << "Nhap mau so: ";
    cin  >>phanso_02.mau;
    while (phanso_02.mau == 0)
    {
        cout << "Mau phai khac khong, vui long nhap lai mau: ";
        cin >> phanso_02.mau;
    }

    //Tinh tong, hieu, tich, thuong hai phan so
    tong = tinh_tong(phanso_01,phanso_02);
    hieu = tinh_hieu(phanso_01,phanso_02);
    tich = tinh_tich(phanso_01, phanso_02);
    thuong = tinh_thuong(phanso_01, phanso_02);

    //Xuat ket qua
    cout << "Tong: ";
    xuat(tong);
    cout << "\nHieu: ";
    xuat(hieu);
    cout << "\nTich: ";
    xuat (tich);
    if (phanso_02.tu != 0)
    {
        cout << "\nThuong: ";
        xuat(thuong);
    }
    else
    {
        cout <<"\nPhep toan khong the chia vi tu cua phan so hai bang 0";
    }
    return 0;
}
