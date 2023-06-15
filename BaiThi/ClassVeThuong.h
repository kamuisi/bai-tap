#ifndef ClassVeThuong_H
#define ClassVeThuong_H
#include "ClassVe.h"
class VeThuong : public Ve
{
    private:
        long GiaDichVu;
        int SoDichVu;
    public:
        friend class QuanLy;
        void TinhTienVe();
        void Nhap();
        void Xuat();
};
#endif