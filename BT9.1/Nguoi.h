#ifndef Nguoi_H
#define Nguoi_H
#include "Header.h"
class Nguoi
{
    private:
        std::string sHovaTen;
        int iNamSinh;
        std::string sCMND;
        std::string sDiaChiThuongTru;
    public:
        void Nhap();
        void Xuat();
};
#endif