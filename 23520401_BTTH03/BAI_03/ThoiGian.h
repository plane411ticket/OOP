#ifndef THOIGIAN_H_INCLUDED
#define THOIGIAN_H_INCLUDED

#include <iostream>
using namespace std;

class ThoiGian
{
    private:
        int iGio;
        int iPhut;
        int iGiay;
    public:
        ThoiGian();
        ThoiGian(int Gio, int Phut, int Giay);
        void Set(int Gio, int Phut, int Giay);

        int TinhGiay() const;
        ThoiGian TinhLaiGio(int Giay) const;

        friend ThoiGian operator+(const ThoiGian &tg, const int &Giay);
        friend ThoiGian operator-(const ThoiGian &tg, const int &Giay);

        friend ThoiGian operator+(const ThoiGian &tg, const ThoiGian &tgp);
        friend ThoiGian operator-(const ThoiGian &tg, const ThoiGian &tgp);

        friend ThoiGian operator++(ThoiGian &tg);
        friend ThoiGian operator--(ThoiGian &tg);

        friend bool operator==(const ThoiGian &tg, const ThoiGian &tgp);
        friend bool operator!=(const ThoiGian &tg, const ThoiGian &tgp);
        friend bool operator>=(const ThoiGian &tg, const ThoiGian &tgp);
        friend bool operator<=(const ThoiGian &tg, const ThoiGian &tgp);
        friend bool operator>(const ThoiGian &tg, const ThoiGian &tgp);
        friend bool operator<(const ThoiGian &tg, const ThoiGian &tgp);

        friend istream& operator>>(istream& is, ThoiGian &tg);
        friend ostream& operator<<(ostream& os, const ThoiGian &tg);
};

#endif // THOIGIAN_H_INCLUDED
