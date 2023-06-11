#include "QuanMa.h"
Ma::Ma(int vtx, int vty)
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
            iViTriY = 8;
            iMau = 0;
            SoLuong = 0;
            break;
        }
        default:
        {
            iViTriY = 2;
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
            iViTriY = 8;
            iMau = 1;
            SoLuong = 0;
            break;
        }
        default:
        {
            iViTriY = 2;
            SoLuong = 1;
            break;
        }
        }
        break;
    }
    }
}
void Ma::Xuat()
{
    std::cout << "Di ngang 2 o va doc 1 o (hay doc 2 o va ngang 1 o) cho moi nuoc di. Neu co quan nam ngay ben canh ma va can duong ngang 2(hay duong doc 2), ma bi can khong duoc di duong do";
    std::cout << "\nVi tri " << '(' << iViTriX << ", " << iViTriY << ')';
}

