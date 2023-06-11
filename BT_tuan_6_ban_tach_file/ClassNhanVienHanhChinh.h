#ifndef ClassNhanVienHanhChinh_H
#define ClassNhanVienHanhChinh_H
#include "Header.h"
#include "ClassNhanVien.h"
class NhanVien;
class NhanVienHanhChinh : public NhanVien
{
    private:
        int iThoiGianLamThuaGio;
    public:
        friend class QuanLy;
        int GetThoiGian(int &a);
        void Nhap();
        void Xuat();
};
#endif