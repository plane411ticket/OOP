#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    List Danh_Sach;
    int Dieu_Kien;
    while(true)
    {
        cin >> Dieu_Kien ;
        if (Dieu_Kien == -1)
        {
            Danh_Sach.Xuat();
            break;
        }
        else if (Dieu_Kien == 0)
        {
            double x;
            cin >> x;
            Danh_Sach.Them(x);
        }

        else if (Dieu_Kien == 1)
        {
            double x;
            cin >> x;
            Danh_Sach.Xoa(x);
        }

        else if (Dieu_Kien == 2)
        {
            double x;
            cin >> x;
            Danh_Sach.Xoa_Tat_Ca(x);
        }

        else if (Dieu_Kien == 3)
        {
            int i;
            double x;
            cin >> i >> x;
            Danh_Sach.Thay_Doi(i, x);
        }
    }
}
