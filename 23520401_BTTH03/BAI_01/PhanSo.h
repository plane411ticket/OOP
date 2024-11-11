#ifndef PHANSO_H_INCLUDED
#define PHANSO_H_INCLUDED

#include <iostream>
using namespace std;

class PhanSo
{
    private:
        int iTu;
        int iMau;
    public:
        PhanSo();
        PhanSo(int Tu, int Mau);
        PhanSo(int Tu);

        void Set(int Tu, int Mau);

        friend PhanSo operator+(const PhanSo &ps, const PhanSo &psp);
        friend PhanSo operator-(const PhanSo &ps, const PhanSo &psp);
        friend PhanSo operator*(const PhanSo &ps, const PhanSo &psp);
        friend PhanSo operator/(const PhanSo &ps, const PhanSo &psp);

        friend bool operator==(const PhanSo &ps, const PhanSo &psp);
        friend bool operator!=(const PhanSo &ps, const PhanSo &psp);
        friend bool operator>=(const PhanSo &ps, const PhanSo &psp);
        friend bool operator<=(const PhanSo &ps, const PhanSo &psp);
        friend bool operator>(const PhanSo &ps, const PhanSo &psp);
        friend bool operator<(const PhanSo &ps, const PhanSo &psp);

        friend istream& operator>>(istream& is, PhanSo &ps);
        friend ostream& operator<<(ostream& os, PhanSo &ps);
};

#endif // PHANSO_H_INCLUDED
