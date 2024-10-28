#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

class List{
    private:
        double* Mang;
        unsigned int kichthuoc;
    public:
        List();
        ~List ();
        void Them(double x);
        void Xoa(double x);
        void Xoa_Tat_Ca (double x);
        void Thay_Doi (int x, double y);
        void Xuat();

};

#endif // LIST_H_INCLUDED
