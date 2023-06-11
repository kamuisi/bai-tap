#ifndef ClassNhanVien_H
#define ClassNhanVien_H
#include "Header.h"
class NhanVien
{
    protected:
        std::string sMaNhanVien, sHovaTen, sSDT,sEmail;
        int iTuoi;
    public:
        friend class QuanLy;
        virtual int GetThoiGian(int &a);
        virtual long GetSanPham();
        virtual void Nhap();
        virtual void Xuat();
};  
#endif