#ifndef POLYGON_H_INCLUDED
#define POLYGON_H_INCLUDED
#include "Diem.h"
#include <vector>
using namespace std;
class Polygon
{
    private:
        int n;
        vector<Diem>Mang;
    public:
        Polygon();
        void Nhap();
        void TinhDienTich();
};


#endif // POLYGON_H_INCLUDED
