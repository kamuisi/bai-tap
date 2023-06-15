#ifndef ClassVeTap_H
#define ClassVeTap_H
#include "ClassVe.h"
class VeTap : public Ve
{
    private:
        int SoGioTap;
    public:
        friend class QuanLy;
        void TinhTienVe();
        void Nhap();
        void Xuat();
};
#endif