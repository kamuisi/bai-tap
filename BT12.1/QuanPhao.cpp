#include "QuanPhao.h"
Phao::Phao(int vtx, int vty)
{
    switch (iMau)
    {
    case 1:
    {
        iViTriX = 8;
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
        iViTriX = 3;
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
void Phao::Xuat()
{
    std::cout << "Di ngang va di doc giong nhu xe. Diem khac biet la neu phao muon an quan, phao phai nhay qua dung 1 quan nao do. Khi khong an quan, tat ca nhung diem tu cho di den cho den phai khong co quan can";
    std::cout << "\nVi tri " << '(' << iViTriX << ", " << iViTriY << ')';
}