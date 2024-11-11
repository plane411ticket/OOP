#ifndef NGAYTHANGNAM_H_INCLUDED
#define NGAYTHANGNAM_H_INCLUDED

#include <iostream>
#include <set>
using namespace std;

class NgayThangNam
{
    private:
        int iNgay;
        int iThang;
        int iNam;

    public:
        NgayThangNam();
        NgayThangNam(int Nam, int Thang, int Ngay);

        int TinhNgay() const;
        bool LaNamNhuan(int nam) const;
        int NgayLN(int thang, int nam) const; 

        friend NgayThangNam operator+(const NgayThangNam &ntn, int ngay);
        friend NgayThangNam operator-(const NgayThangNam &ntn, int ngay);
        friend int operator-(const NgayThangNam &ntn, const NgayThangNam &a); 

        friend NgayThangNam operator++(NgayThangNam &ntn);
        friend NgayThangNam operator--(NgayThangNam &ntn);

        friend bool operator==(const NgayThangNam &ntn1, const NgayThangNam &ntn2);
        friend bool operator!=(const NgayThangNam &ntn1, const NgayThangNam &ntn2);
        friend bool operator>=(const NgayThangNam &ntn1, const NgayThangNam &ntn2);
        friend bool operator<=(const NgayThangNam &ntn1, const NgayThangNam &ntn2);
        friend bool operator>(const NgayThangNam &ntn1, const NgayThangNam &ntn2);
        friend bool operator<(const NgayThangNam &ntn1, const NgayThangNam &ntn2);

        friend istream& operator>>(istream& is, NgayThangNam &ntn);
        friend ostream& operator<<(ostream& os, const NgayThangNam &ntn);
};

#endif // NGAYTHANGNAM_H_INCLUDED
