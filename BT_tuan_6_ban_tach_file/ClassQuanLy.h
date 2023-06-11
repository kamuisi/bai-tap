#ifndef ClassQuanLy_H
#define ClassQuanLy_H
#include "Header.h"
#include "ClassNhanVien.h"
#include "ClassNhanVienBanHang.h"
#include "ClassNhanVienHanhChinh.h"
class QuanLy
{
    private:
        long lTrungBinhSanPhamBanRa = 0;
        long lSoNhanVienBanHang = 0;
        int ViTriNguoiBan[100];
        int iMaxThuaGio = 0;
        int iNhanVienMaxThuaGio = 0;
        NhanVien *dsKhenThuong[100];
    public:
        void TinhTrungBinh();
        void Nhap();
        void QuanLyNhanSu();
};
#endif