#ifndef ClassVeVip_H
#define ClassVeVip_H
#include "ClassVe.h"
class VeVip : public Ve
{
    public:
        friend class QuanLy;
        void TinhTienVe();
        void Nhap();
        void Xuat();
};
#endif