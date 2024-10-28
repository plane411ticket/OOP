#ifndef DIEM_H_INCLUDED
#define DIEM_H_INCLUDED

class Diem
{
    private:
        float iHoanh, iTung;

    public:
        Diem();
        Diem(float Hoanh, float Tung);
        Diem(const Diem &x);
        void Nhap();
        void Xuat();
        float GetTungDo();
        float GetHoanhDo();
        void SetTungDo();
        void SetHoanhDo();
        void TinhTien(float x, float y);
        void PhongTo(float x);
        void ThuNho(float x);
        void Quay(Diem tamquay, float gocquay);
};

#endif // DIEM_H_INCLUDED
