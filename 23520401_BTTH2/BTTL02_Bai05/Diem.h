#ifndef DIEM_H_INCLUDED
#define DIEM_H_INCLUDED

class Diem
{
    private:
        float iHoanh, iTung;

    public:
        Diem(): iHoanh(0), iTung(0) {}
        void Nhap();
        void Xuat();
        void NhanDoi();
        void GocToaDo();
        void TinhTien();
};
#endif // DIEM_H_INCLUDED
