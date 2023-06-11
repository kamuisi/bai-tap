#include "QuanTuong.h"
Tuong::Tuong(int vtx, int vty)
{
    switch (iMau)
    {
    case 1:
    {
        iViTriX = 10;
        switch (SoLuong)
        {
        case 1:
        {
            iViTriY = 7;
            iMau = 0;
            SoLuong = 0;
            break;
        }
        default:
        {
            iViTriY = 3;
            SoLuong = 1;
            break;
        }
        }
        break;
    }
    default:
    {
        iViTriX = 1;
        switch (SoLuong)
        {
        case 1:
        {
            iViTriY = 7;
            iMau = 1;
            SoLuong = 0;
            break;
        }
        default:
        {
            iViTriY = 3;
            SoLuong = 1;
            break;
        }
        }
        break;
    }
    }
}
void Tuong::Xuat()
{
    std::cout << "Di cheo 2 o(ngang 2 va doc 2) cho moi nuoc di. Tuong chi duoc phep o mot ben cua ban co, khong duoc di chuyen sang nua ban co cua doi phuong. Nuoc di cua tuong se khong hop le khi co mot quan nam chan giua duong di";
    std::cout << "\nVi tri " << '(' << iViTriX << ", " << iViTriY << ')';
}
