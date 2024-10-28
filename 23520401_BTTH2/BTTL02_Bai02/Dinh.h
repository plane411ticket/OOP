#ifndef DINH_H_INCLUDED
#define DINH_H_INCLUDED

class Dinh
{
    private:
        float iHoanh, iTung;

    public:
        Dinh();
        Dinh(float Hoanh, float Tung);
        Dinh(const Dinh &x);
        void Nhap();
        void Xuat();
        float GetTungDo();
        float GetHoanhDo();
        void SetTungDo();
        void SetHoanhDo();
        void TinhTien(float x, float y);
        void PhongTo(float x);
        void ThuNho(float x);
        void Quay(Dinh tamquay, float gocquay);
};

#endif // DINH_H_INCLUDED
