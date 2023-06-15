#ifndef ClassVe_H
#define ClassVe_H
#include "Header.h"
class Ve
{
    protected:
        long GiaVe;
    public:
        friend class QuanLy;
        virtual void TinhTienVe();
        virtual void Nhap();
        virtual void Xuat();
};
#endif