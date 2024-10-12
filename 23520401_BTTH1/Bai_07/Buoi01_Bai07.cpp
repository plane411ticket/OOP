#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <regex>
#include <iomanip>
#include <ctime>

using namespace std;
//Tao vector co kieu du lieu struct ThongTinChuyenBay de luu cac gia tri va thao tac.
// Tao struct luu thong tin chuyen bay.
struct ThongTinChuyenBay{
    string MCBay;
    string NBay;
    string GBay;
    string NDi;
    string NDen;
};

// Ham kiem tra ma chuyen bay.
// Dau vao: ma chuyen bay.
// Dau ra: true neu ma chuyen bay hop le, nguoc lai false.
bool KiemTraMaChuyenBay(string MCB){
    if (MCB.size()>5){
        return false;
    }
    for (char Ki_Tu : MCB){
        if (isalnum(Ki_Tu)== 0){
            return false;
        }
    }
    return true;
}

//Ham kiem tra nam nhuan.
// Dau vao: nam.
// Dau ra: true neu nam do la nam nhuan, nguoc lai false.
bool KiemTraNamNhuan(int year){
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        return true;
    }
    else{
        return false;
    }
}

//Ham kiem tra ngay bay.
//Dau vao: ngay.
//Dau ra: tru neu ngay dung dinh dang, va dung so ngay cua thang, nguoc lai false.
bool KiemTraNgayBay(const std::string& date){
    regex date_pattern(R"(^(0?[1-9]|[12][0-9]|3[01])/(0?[1-9]|1[0-2])/([0-9]{4})$)");
    smatch match;

    if (regex_match(date, match, date_pattern)){
        int ngay = stoi(match.str(1));
        int thang = stoi(match.str(2));
        int nam = stoi(match.str(3));

        // Kiem tra thang 2
        if (thang == 2){
            if (KiemTraNamNhuan(nam)){
                if (ngay > 29){
                    return false;
                }
            }
            else{
                if (ngay > 28){
                    return false;
                }
            }
        }
        // Kiem tra cac thang co 30 ngay
        if ((thang == 4 || thang == 6 || thang == 9 || thang == 11) && (ngay > 30)){
            return false;
        }
        return true;
    }

    return false;
}

//Ham kiem tra gio bay.
//Dau vao: gio bay.
//Dau ra: true neu gio dung theo dinh dang tu 00:00-24:00, false neu nguoc lai.
bool KiemTraGioBay(string GB){
    regex time_pattern(R"(^([01]?[0-9]|2[0-3]):[0-5][0-9]$)");
    return regex_match(GB, time_pattern);
}

// Ham kiem tra dia diem(Diem di va Diem den).
//Dau vao: dia diem.
//Dau ra: true neu dia diem nho hon 21 ki tu va khong chua ki tu dac biet, nguoc lai false.
bool KiemTraDiaDiem(const string& DD){
    if (DD.size() > 20){
        return false;
    }
    for (char Ki_Tu : DD){
        if (!isalpha(Ki_Tu) && !isspace(Ki_Tu)){
            return false;
        }
    }
    return true;
}

//Ham nhap thong tin chuyen bay, neu kiem tra khong hop le thi nhap lai.
void NhapThongTinChuyenBay(vector<ThongTinChuyenBay>& DanhSachChuyenBay, int soluong){
    for(int i = 0; i < soluong; i++){
        ThongTinChuyenBay ChuyenBay;
        cout <<"____________________________________\n\n";
        cout << "Nhap thong tin chuyen bay thu " << i + 1 << ": ";
        cout <<"\n\nNhap ma chuyen bay: ";
        getline(cin, ChuyenBay.MCBay);
        while(KiemTraMaChuyenBay(ChuyenBay.MCBay) == false){
            cout << "Ma chuyen bay khong hop le, vui long nhap lai: ";
            getline(cin, ChuyenBay.MCBay);
        }

        cout <<"\nNhap ngay bay: ";
        getline(cin, ChuyenBay.NBay);
        while(KiemTraNgayBay(ChuyenBay.NBay) == false){
            cout << "Ngay bay khong hop le, vui long nhap lai: ";
            getline(cin, ChuyenBay.NBay);
        }

        cout <<"\nNhap gio bay: ";
        getline(cin, ChuyenBay.GBay);
        while(KiemTraGioBay(ChuyenBay.GBay)==false){
            cout << "Gio bay khong hop le, vui long nhap lai: ";
            getline(cin, ChuyenBay.GBay);
        }

        cout <<"\nNhap noi di: ";
        getline(cin, ChuyenBay.NDi);
        while(KiemTraDiaDiem(ChuyenBay.NDi)==false){
            cout << "Noi di khong hop le, vui long nhap lai: ";
            getline(cin, ChuyenBay.NDi);
        }

        cout <<"\nNhap noi den: ";
        getline(cin, ChuyenBay.NDen);
        while(KiemTraDiaDiem(ChuyenBay.NDen)==false){
            cout << "Noi den khong hop le, vui long nhap lai: ";
            getline(cin, ChuyenBay.NDen);
        }

        while(ChuyenBay.NDen==ChuyenBay.NDi){
            cout << "\nNoi den bi trung, vui long nhap lai: ";
            getline(cin, ChuyenBay.NDen);
        }

        DanhSachChuyenBay.push_back(ChuyenBay);
    }
}

//Ham tim kiem chuyen bay theo ma chuyen bay.
//Dau vao: danh sach chuyen bay, ma chuyen bay can tim, so luong.
//Dau ra: danh sach cac chuyen bay ma bang voi ma chuyen bay can tim.
vector<ThongTinChuyenBay> TimKiemTheoMaCBay(vector<ThongTinChuyenBay> DSChuyenBay, string MCBay, int soluong){
    vector<ThongTinChuyenBay> KetQua;
    for (int i =0; i < soluong; i++){
        if (DSChuyenBay[i].MCBay == MCBay){
            KetQua.push_back(DSChuyenBay[i]);
        }
    }
    return KetQua;
}

//Ham tim kiem chuyen bay theo noi di.
//Dau vao: danh sach chuyen bay, noi di can tim, so luong.
//Dau ra: danh sach cac chuyen bay ma noi di trung voi noi di can tim.
vector<ThongTinChuyenBay> TimKiemTheoNoiDi(vector<ThongTinChuyenBay> DSChuyenBay, string DiaDiem, int soluong){
    vector<ThongTinChuyenBay> KetQua;
    for (int i =0; i < soluong; i++){
        if (DSChuyenBay[i].NDi == DiaDiem){
            KetQua.push_back(DSChuyenBay[i]);
        }
    }
    return KetQua;
}

// Ham tim kiem chuyen bay theo noi den.
//Dau vao: danh sach chuyen bay, noi den can tim, so luong.
//Dau ra: danh sach cac chuyen bay ma noi den trung voi noi dencan tim.
vector<ThongTinChuyenBay> TimKiemTheoNoiDen(vector<ThongTinChuyenBay> DSChuyenBay, string DiaDiem, int soluong){
    vector<ThongTinChuyenBay> KetQua;
    for (int j =0; j < soluong; j++){
        if (DSChuyenBay[j].NDen == DiaDiem){
            KetQua.push_back(DSChuyenBay[j]);
        }
    }
    return KetQua;
}

//Ham chuyen doi ngay gio tu string sang struct tm de xac dinh thoi gian.
//Dau vao: chuoi ngay, chuoi gio.
//Dau ra: struct thoi gian theo dinh dang DD/MM/YY/HH/MM.
tm ChuyenDinhDan(string ngay, string gio){
    tm time_struct = {};
    stringstream ss(ngay + " " + gio);
    ss >> get_time(&time_struct, "%d/%m/%Y %H:%M");
    return time_struct;
}

//Ham Comparison, tham so thu 3 cho ham sort.
//Dau vao: thong tin hai chuyen bay.
//Dau ra: true neu chuyen bay thu nhat nho hon chuyen bay thu hai.
bool KiemTraLonNho(ThongTinChuyenBay& cb1, ThongTinChuyenBay& cb2){
    tm time1 = ChuyenDinhDan(cb1.NBay, cb1.GBay);
    tm time2 = ChuyenDinhDan(cb2.NBay, cb2.GBay);
    return mktime(&time1) < mktime(&time2);
}

// Ham sap xep chuyen bay dua tren ngay bay va thoi gian bay, co su dung tham so thu 3 Comparison Function.
void SapXepTheoNgayGioBay(vector<ThongTinChuyenBay>& DSChuyenBay){
    sort(DSChuyenBay.begin(), DSChuyenBay.end(), KiemTraLonNho);
}

// Ham tra ve danh sach chuyen bay khoi hanh tu mot dia diem trong mot ngay nhat dinh.
//Dau vao: danh sach hai chuyen bay, noi di can tim, ngay di can tim va so luonng.
//Dau ra: danh sach cac chuyen bay co cung noi di va ngay di voi noi di va ngay di can tim.
vector<ThongTinChuyenBay> HienThiTheoNoiDiVaNgay(vector<ThongTinChuyenBay> DSChuyenBay, string DiaDiem, string Ngay, int soluong){
    vector<ThongTinChuyenBay> Ket_Qua;
    for (int i = 0; i < soluong; i++){
        if ((DSChuyenBay[i].NDi == DiaDiem) && (DSChuyenBay[i].NBay == Ngay)){
            Ket_Qua.push_back(DSChuyenBay[i]);
        }
    }
    return Ket_Qua;
}

// Ham dem so chuyen bay tu noi di den noi den duoc nhap vao tu ban phim.
//Dau vao: danh sach chuyen bay, noi di can tim, noi den can tim, so luong.
//Dau ra: so luong cac chuyen bay co noi di va noi den trung voi noi di va noi den can tim.
int DemChuyenBay(vector<ThongTinChuyenBay> DSChuyenBay, string DiaDiemDi, string DiaDiemDen, int soluong){
    int SCB = 0;
    for (int i = 0; i < soluong; i++){
        if ((DSChuyenBay[i].NDi == DiaDiemDi) && (DSChuyenBay[i].NDen == DiaDiemDen)){
            SCB++;
        }
    }
    return SCB;
}

// Ham hien thi danh sach cac chuyen bay
void XuatDanhSachChuyenBay(vector<ThongTinChuyenBay> DSChuyenBay, int soluong){
    cout << left << setw(15) << "Ma chuyen bay"
         << setw(15) << "Ngay bay"
         << setw(10) << "Gio bay"
         << setw(20) << "Noi di"
         << setw(20) << "Noi den" << "\n";

    cout << "=======================================================================\n";

    for (int i = 0; i < soluong; i++){
        cout << left << setw(15) << DSChuyenBay[i].MCBay
             << setw(15) << DSChuyenBay[i].NBay
             << setw(10) << DSChuyenBay[i].GBay
             << setw(20) << DSChuyenBay[i].NDi
             << setw(20) << DSChuyenBay[i].NDen << "\n";
    }
    cout << "=======================================================================\n";
}
int main()
{
    cout << "\n================== HANG HANG KHONG QUOC GIA VIET NAM ==================\n";
    cout << "                  DA NANG AIRLINE XIN KINH CHAO QUY KHACH              \n";
    cout << "=======================================================================\n";

    //Khoi tao danh sach chuyen bay
    vector<ThongTinChuyenBay> DanhSachChuyenBay;
    int soluong;

    // Nhap so luong chuyen bay va thong tin tung chuyen bay
    cout << "\n>> Vui long nhap so luong chuyen bay: ";
    cin >> soluong;
    cin.ignore();

    cout << "\n-----------------------------------------------------------------------\n";
    cout << "Nhap thong tin cac chuyen bay duoi day:\n";
    cout << "-----------------------------------------------------------------------\n";

    NhapThongTinChuyenBay(DanhSachChuyenBay, soluong);

    //Sap xep cac chuyen bay, chuyen bay nao som se duoc xep truoc
    SapXepTheoNgayGioBay(DanhSachChuyenBay);

    cout << "\n=======================================================================\n";
    cout << "\n>> Sap xep chuyen bay theo ngay gio: \n";
    cout << "\n-----------------------------------------------------------------------\n";
    cout << "Xuat thong tin cac chuyen bay da duoc sap xep theo ngay gio bay: \n";
    cout << "-----------------------------------------------------------------------\n\n";
    XuatDanhSachChuyenBay(DanhSachChuyenBay, soluong);
    //Tim kiem chuyen bay theo ma chuyen bay
    cout << "\n=======================================================================\n";
    string mcb;
    cout <<"\n>> Ma chuyen bay ban muon tim kiem: ";
    getline(cin, mcb);
    cout << "\n-----------------------------------------------------------------------\n";
    cout << "Xuat thong tin cac chuyen bay muon tim kiem theo ma chuyen bay: \n";
    cout << "-----------------------------------------------------------------------\n\n";
    vector<ThongTinChuyenBay> KetQuaTimKiemTheoMaCBay = TimKiemTheoMaCBay(DanhSachChuyenBay, mcb, soluong);
    if (KetQuaTimKiemTheoMaCBay.size() == 0){
        cout << "Khong tim thay chuyen bay hop le\n";
    }
    else{
        XuatDanhSachChuyenBay(KetQuaTimKiemTheoMaCBay, KetQuaTimKiemTheoMaCBay.size());
    }

    //Tim kiem chuyen bay theo noi di va ngay di
    cout << "\n=======================================================================\n\n";
    string diadiemdi, ngaydi;
    cout <<">> Nhap noi di va ngay di cua chuyen bay de tim kiem: ";
    cout <<"\n>>> Nhap noi di: ";
    getline(cin,diadiemdi);
    cout <<">>> Nhap ngay di: ";
    getline(cin,ngaydi);
    vector<ThongTinChuyenBay> KetQuaTimKiemTheoNoiDiNgay = HienThiTheoNoiDiVaNgay(DanhSachChuyenBay, diadiemdi, ngaydi, soluong);
    if (KetQuaTimKiemTheoNoiDiNgay.size() == 0){
        cout << "\n-----------------------------------------------------------------------\n";
        cout << "Khong tim thay chuyen bay hop le den "<<diadiemdi<<" ngay "<<ngaydi<<"\n";
        cout << "-----------------------------------------------------------------------\n";
    }
    else{
        cout << "\n-----------------------------------------------------------------------\n";
        cout << "Tim thay chuyen bay hop le den "<<diadiemdi<<" ngay "<<ngaydi<<": \n";
        cout << "-----------------------------------------------------------------------\n\n";
        XuatDanhSachChuyenBay(KetQuaTimKiemTheoNoiDiNgay, KetQuaTimKiemTheoNoiDiNgay.size());
    }

    //Dem so luong chuyen bay di tu noi di den noi den duoc nhap tu ban phim
    cout << "\n=======================================================================\n";
    string diadiemdi01, diadiemden01;
    cout <<"\n>> Nhap noi di va noi den cua chuyen bay muon tim kiem: ";
    cout <<"\n>>> Nhap noi di: ";
    getline(cin, diadiemdi01);
    cout <<">>> Nhap noi  den: ";
    getline(cin, diadiemden01);
    int SoLuongChuyenBay = DemChuyenBay(DanhSachChuyenBay, diadiemdi01, diadiemden01, soluong);
    if (SoLuongChuyenBay == 0){
        cout << "\n-----------------------------------------------------------------------\n";
        cout << "Khong tim thay chuyen bay hop le di tu "<<diadiemdi01<<" den "<<diadiemden01<<"\n";
        cout << "-----------------------------------------------------------------------\n";
    }
    else{
        cout << "\n-----------------------------------------------------------------------\n";
        cout << "So luong chuyen bay hop le di tu "<<diadiemdi01<<" den "<<diadiemden01<<": "<<SoLuongChuyenBay;
        cout << "\n-----------------------------------------------------------------------\n";
    }
    cout << "\n=======================================================================\n";
    cout << "\n     CAM ON QUY KHACH DA TRAI NGHIEM DICH VU CUA DA NANG AIRLINE\n";
    cout << "    XIN KINH CHUC QUY KHACH CO NHUNG TRAI NGHIEM HON CA MOT CHUYEN BAY\n\n";
    cout << "=======================================================================\n";
    return 0;
}
