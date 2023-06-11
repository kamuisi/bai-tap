#ifndef SoHongDatNN_H
#define SoHongDatNN_H
#include "SoHong.h"
class SoHongDatNN : public SoHong
{
    private:
        int iThoiHan;
    public:
        void GetiThoiHan();
        void Nhap();
        void Xuat();   
};
#endif