#include "QuanXe.h"
Xe::Xe(int vtx, int vty)
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
            iViTriY = 9;
            iMau = 0;
            SoLuong = 0;
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
        iViTriX = 1;
        switch (SoLuong)
        {
        case 1:
        {
            iViTriY = 9;
            iMau = 1;
            SoLuong = 0;
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
void Xe::Xuat()
{
    std::cout << "Di ngang hay doc tren ban co mien la dung bi quan khac can duong tu diem di den diem den";
    std::cout << "\nVi tri " << '(' << iViTriX << ", " << iViTriY << ')';
}