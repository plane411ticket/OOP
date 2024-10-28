#ifndef THI_SINH_H_INCLUDED
#define THI_SINH_H_INCLUDED
#include <string>
using namespace std;
class Diem
{
    private:
        int iNgay, iThang, iNam;
        float fToan, fVan, fAnh;
        float fTong;
        string Ten, MSSV;
    public:
        void Nhap();
        void Xuat();
        void Tong();
        float getfTong();
};


#endif // THI_SINH_H_INCLUDED
