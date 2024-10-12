#include <iostream>
#include <vector>

using namespace std;
//So khop tung ki tu de xac nhan su xuat hien cua mang A trong B va dem so lan
int main()
{
    //Khoi tao gia tri
    int sopt_A, sopt_B;
    vector <int>solan, mang_A, mang_B;
    sopt_A = 0;
    sopt_B = 0;

    //Nhap so luong phan tu cua hai mang
    cout <<"Nhap vao so phan tu cua hai mang: ";
    cin >> sopt_A >>sopt_B;

    if (sopt_A > sopt_B)
    {
        cout <<"Mang A khong the xuat hien trong B vi mang A lon hon B";
    }
    else if ((sopt_A <= 0) || (sopt_B <= 0))
    {
        cout <<"Khong ton tai Mang A, B voi so phan tu nho hon hoac bang 0";
    }
    else
    {
        mang_A.resize(sopt_A);
        mang_B.resize(sopt_B);

        //Nhap cac phan tu cua hai mang
        cout <<"Nhap cac phan tu cua mang A: ";
        for (int i = 0; i < sopt_A; i++)
        {
            cin >> mang_A[i];
        }

        cout <<"Nhap cac phan tu cua mang B: ";
            for (int i = 0; i < sopt_B; i++)
        {
            cin >> mang_B[i];
        }

        //Duyet mang de dem so lan xuat hien
        for (int i = 0; i <= sopt_B - sopt_A; i++)
        {
            int j;
            for (j = 0; j < sopt_A; j++)
            {
                if (mang_B[i + j] != mang_A[j])
                {
                    break;
                }
            }
            if (j == sopt_A)
            {
                solan.push_back(i);
            }
        }

        //Xuat ket qua
        if (solan.size() == 0)
        {
            cout <<"Mang A khong xuat hien trong B";
        }

        else
        {
            cout <<"Mang A xuat hien trong B: "<<solan.size()<<" lan\n";
            cout <<"Mang A xuat hien trong B o vi tri: ";
            for (int i = 0; i < solan.size(); i++)
            {
                cout <<solan[i]<<" ";
            }
        }
    }
    return 0;
}
