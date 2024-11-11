#ifndef SOPHUC_H_INCLUDED
#define SOPHUC_H_INCLUDED

#include <iostream>
using namespace std;

class SoPhuc
{
    private:
        double dThuc;
        double dAo;
    public:
        SoPhuc();
        SoPhuc(int thuc, int ao);
        SoPhuc(double thuc, double ao);
        SoPhuc(double thuc);

        void Set(double thuc, double ao);

        friend SoPhuc operator+(const SoPhuc &spp, const SoPhuc &sp);
        friend SoPhuc operator-(const SoPhuc &spp, const SoPhuc &sp);
        friend SoPhuc operator*(const SoPhuc &spp, const SoPhuc &sp);
        friend SoPhuc operator/(const SoPhuc &spp, const SoPhuc &sp);

        friend bool operator==(const SoPhuc &spp, const SoPhuc &sp);
        friend bool operator!=(const SoPhuc &spp, const SoPhuc &sp);

        friend istream& operator>>(istream& is, SoPhuc &spp);
        friend ostream& operator<<(ostream& os, const SoPhuc &spp);
};
#endif // SOPHUC_H_INCLUDED
