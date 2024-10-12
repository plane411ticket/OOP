#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
//Su dung mot vector kieu struct HocSinh de luu thong tin va thao tac du lieu.
//Tao struct luu thong tin hoc sinh
struct HocSinh{
    string HoTen, HocLuc;
    float DiemToan, DiemVan, DiemNgoaiNgu, DiemTrungBinh;
};

//Ham kiem tra ho ten
bool KiemTraHoTen(string HoTen){
    if (HoTen.length() < 2 || HoTen.length() > 50){
        return false;
    }
    for (char Ki_Tu : HoTen){
        if (!isalpha(Ki_Tu) && !isspace(Ki_Tu)){
            return false;
        }
    }
    return true;
}

//Ham kiem tra diem so
//Dau vao: diem
//Dau ra: true neu diem hop le, false neu nguoc lai
float NhapDiemMonHoc(){
    float Diem = -1;
    cin >> Diem;
    while ((Diem < 0) || (Diem > 10)){
        cout << "Diem vua nhap khong hop le, vui long nhap lai: ";
        cin >> Diem;
    }
    return Diem;
}

//Ham tinh diem trung binh va xet hoc luc
//Dau vao: diem toan, diem van, diem ngoai ngu
//Dau ra: diem trung binh theo cong thuc va hoc luc
void TinhDiemTrungBinh(HocSinh& HS){
    HS.DiemTrungBinh = (2 * HS.DiemToan + HS.DiemVan + HS.DiemNgoaiNgu) / 4.0;
    if (HS.DiemTrungBinh >= 9) HS.HocLuc = "Xuat sac";
    else if (HS.DiemTrungBinh >= 8) HS.HocLuc = "Gioi";
    else if (HS.DiemTrungBinh >= 6.5) HS.HocLuc = "Kha";
    else if (HS.DiemTrungBinh >= 5) HS.HocLuc = "Trung binh";
    else HS.HocLuc = "Yeu";
}

//Ham nhap thong tin hoc sinh
void NhapThongTinHocSinh(vector<HocSinh>& DanhSachHocSinh, int SL){
    for (int i = 0; i < SL; ++i){
        HocSinh HS;
        cin.ignore();
        cout <<"________________________________\n\n";
        cout << "Nhap thong tin cho hoc sinh thu " << i + 1 << ": ";
        cout <<"\nNhap ho va ten: ";
        getline(cin, HS.HoTen);
        while (!KiemTraHoTen(HS.HoTen)){
            cout << "Ho ten khong hop le, vui long nhap lai: ";
            getline(cin, HS.HoTen);
        }

        cout << "Nhap diem toan cua hoc sinh: ";
        HS.DiemToan = NhapDiemMonHoc();
        cout << "Nhap diem van cua hoc sinh: ";
        HS.DiemVan = NhapDiemMonHoc();
        cout << "Nhap diem ngoai ngu cua hoc sinh: ";
        HS.DiemNgoaiNgu = NhapDiemMonHoc();

        TinhDiemTrungBinh(HS);
        DanhSachHocSinh.push_back(HS);
    }
}

//Ham xuat thong tin hoc sinh
void XuatThongTinHocSinh(HocSinh& HS){
    cout << "\nHo Ten: " << HS.HoTen;
    cout << "\nDiem Toan: " << HS.DiemToan;
    cout << "\nDiem Van: " << HS.DiemVan;
    cout << "\nDiem Ngoai ngu: " << HS.DiemNgoaiNgu;
    cout << "\nDiem Trung Binh: " << HS.DiemTrungBinh;
    cout << "\nHoc Luc: " << HS.HocLuc << "\n";
}

//Ham tim hoc sinh co diem trung binh cao nhat
//Dau vao: Danh sach hoc sinh duoc nhap vao, so luong hoc sinh
//Dau ra: Hoc sinh co diem trung binh cao nhat
HocSinh TimHocSinhDTBCaoNhat(vector<HocSinh>& DanhSachHocSinh, int SL){
    HocSinh DTBCaoNhat = DanhSachHocSinh[0];
    for (int i = 1; i < SL; i++){
        if (DanhSachHocSinh[i].DiemTrungBinh > DTBCaoNhat.DiemTrungBinh){
            DTBCaoNhat = DanhSachHocSinh[i];
        }
    }
    return DTBCaoNhat;
}

//Ham tim kiem hoc sinh theo ten
//Dau vao: Danh sach hoc sinh duoc nhap vao, so luong hoc sinh va ten can kiem
//Dau ra: Hoc sinh co ten trung voi ten can kiem
void TimKiemHocSinhTheoTen(vector<HocSinh>& DanhSachHocSinh, string& Ten, int  SL){
    bool TonTai = false;
    transform(Ten.begin(), Ten.end(), Ten.begin(), ::tolower);

    for (int i = 0; i < SL;  i++){
        string TenHS = DanhSachHocSinh[i].HoTen;
        transform(TenHS.begin(), TenHS.end(), TenHS.begin(), ::tolower);

        if (TenHS.find(Ten) != string::npos){
            XuatThongTinHocSinh(DanhSachHocSinh[i]);
            TonTai= true;
        }
    }
    if (TonTai == false){
        cout << "Khong tim thay hoc sinh co ten: " << Ten << " trong danh sach dang quan ly\n";
    }
}

//Ham xuat thong tin hoc sinh co diem toan thap nhat
//Dau vao: Danh sach hoc sinh duoc nhap vao, so luong hoc sinh
//Dau ra: Hoc sinh co diem toan thap nhat
void XuatHocSinhDiemToanThapNhat(vector<HocSinh>& DanhSachHocSinh,  int SL){
    float DiemToanTN = DanhSachHocSinh[0].DiemToan;
    for (int i = 0; i < SL; i++){
        if (DanhSachHocSinh[i].DiemToan < DiemToanTN){
            DiemToanTN = DanhSachHocSinh[i].DiemToan;
        }
    }

    cout << "\nDanh sach hoc sinh co diem toan thap nhat: ";
    for (int j = 0; j < SL; j++){
        if (DanhSachHocSinh[j].DiemToan == DiemToanTN){
            XuatThongTinHocSinh(DanhSachHocSinh[j]);
        }
    }
}

int main()
{
    //Khoi tao gia tri
    vector<HocSinh> DanhSachHocSinh;
    int SoLuong = 0;
    cout <<"\n================BAT DAU================\n\n";

    cout << "Nhap so luong hoc sinh can quan ly: ";
    cin >> SoLuong;

    //Nhap thong tin hoc sinh va tinh diem trung binh
    NhapThongTinHocSinh(DanhSachHocSinh, SoLuong);

    //Xuat thong tin hoc sinh: ten, diem trung binh, hoc luc
    cout <<"\n________________________________\n\n";
    cout << "Xuat thong tin hoc sinh, diem trung binh va hoc luc: ";
    for (int i = 0; i < SoLuong; i++){
        XuatThongTinHocSinh(DanhSachHocSinh[i]);
    }

    //Tim hoc sinh co diem trung binh cao nhat
    HocSinh DTB_Cao_Nhat = TimHocSinhDTBCaoNhat(DanhSachHocSinh, SoLuong);
    cout <<"\n________________________________\n\n";
    cout << "Hoc sinh co diem trung binh cao nhat: ";
    XuatThongTinHocSinh(DTB_Cao_Nhat);

    //Tim hoc sinh theo ten (linh hoat)
    string Ten;
    cout <<"\n________________________________\n";
    cout << "\nNhap ten hoc sinh can tim: ";
    cin.ignore();
    getline(cin, Ten);
    TimKiemHocSinhTheoTen(DanhSachHocSinh, Ten, SoLuong);

    //Tim hoc sinh co diem toan thap nhat
    cout <<"________________________________";
    XuatHocSinhDiemToanThapNhat(DanhSachHocSinh, SoLuong);
    cout <<"================KET THUC================\n";

    //cout <<"\n";
    return 0;
}
