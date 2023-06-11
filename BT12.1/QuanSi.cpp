#include "QuanSi.h"
Si::Si(int vtx, int vty)
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
            iViTriY = 6;
            iMau = 0;
            SoLuong = 0;
            break;
        }
        default:
        {
            iViTriY = 4;
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
            iViTriY = 6;
            iMau = 1;
            SoLuong = 0;
            break;
        }
        default:
        {
            iViTriY = 4;
            SoLuong = 1;
            break;
        }
        }
        break;
    }
    }
}
void Si::Xuat()
{
    std::cout << "Di xeo 1 o moi nuoc. Si luon luon phai o trong cung nhu Tuong";
    std::cout << "\nVi tri " << '(' << iViTriX << ", " << iViTriY << ')';
}