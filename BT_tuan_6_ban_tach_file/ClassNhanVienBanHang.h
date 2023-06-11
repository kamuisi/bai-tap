#ifndef ClassNhanVienBanHang_H
#define ClassNhanVienBanHang_H
#include "Header.h"
#include "ClassNhanVien.h"
class NhanVienBanHang : public NhanVien
{
    private:
        long lSoSanPhamDaBan;
    public:
        friend class QuanLy;
        long GetSanPham();
        void Nhap();
        void Xuat();
};
#endif