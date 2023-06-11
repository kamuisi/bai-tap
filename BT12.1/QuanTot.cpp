#include "QuanTot.h"
Tot::Tot(int vtx, int vty)
{
    switch (iMau)
    {
    case 1:
    {
        iViTriX = 7;
        switch (SoLuong)
        {
        case 1:
        {
            iViTriY = 3;
            SoLuong = 2;
            break;
        }
        case 2:
        {
            iViTriY = 5;
            SoLuong = 3;
            break;
        }
        case 3:
        {
            iViTriY = 5;
            SoLuong = 4;
            break;
        }
        case 4:
        {
            iViTriY = 5;
            SoLuong = 0;
            iMau = 0;
            break;
        }
        default:
        {
            iViTriY = 1;
            SoLuong = 1;
            break;
        }
        }
        break;
    }
    default:
    {
        iViTriX = 4;
        switch (SoLuong)
        {
        case 1:
        {
            iViTriY = 3;
            SoLuong = 2;
            break;
        }
        case 2:
        {
            iViTriY = 5;
            SoLuong = 3;
            break;
        }
        case 3:
        {
            iViTriY = 5;
            SoLuong = 4;
            break;
        }
        case 4:
        {
            iViTriY = 5;
            SoLuong = 0;
            iMau = 1;
            break;
        }
        default:
        {
            iViTriY = 1;
            SoLuong = 1;
            break;
        }
        }
        break;
    }
    }
}
void Tot::Xuat()
{
    std::cout << "Di mot o moi nuoc. Neu tot chua vuot qua song, no chi co the di thang tien. Khi da vuot song roi, tot co the di ngang 1 nuoc hay di thang tien 1 buoc moi nuoc";
    std::cout << "\nVi tri " << '(' << iViTriX << ", " << iViTriY << ')';
}
