#ifndef SoHong_H
#define SoHong_H
#include "Nguoi.h"
class SoHong
{
    protected: 
        std::string sSoGiayChungNhan;
        Nguoi *dsNguoiSoHuu;
        int iSoThuaDat;
        int iSoToBanDo;
        std::string sDiaChiThuaDat;
        int iDienTich;
        std::string SNgayCap;
        int iDonGiaThue;
        int iSoNguoiDongSoHuu;
    public:
        virtual void Nhap();
        long TinhTienThue();
        virtual void Xuat();
};
#endif