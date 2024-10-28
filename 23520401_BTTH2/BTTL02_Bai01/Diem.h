#ifndef DIEM_H
#define DIEM_H



class Diem
{
    private:
        float iHoanh, iTung;

    public:
        Diem();
        Diem(float Hoanh, float Tung);
        Diem(const Diem &x);
        void Xuat();
        float GetTungDo();
        float GetHoanhDo();
        void SetTungDo();
        void SetHoanhDo();
        void TinhTien();
};

#endif // DIEM_H
