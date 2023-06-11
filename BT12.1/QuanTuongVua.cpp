#include "QuanTuongVua.h"
TuongVua::TuongVua(int vtx, int vty)
{
    iViTriY = 5;
    switch(iMau)
    {
        case 1: 
        {
            iViTriX = 10;
            iMau = 0;
            break;
        }
        default:
        {
            iViTriX = 1;
            iMau = 1;
            break;
        }
    }
}
void TuongVua::Xuat()
{
    std::cout << "Di tung o mot, di ngang hoac doc. Tuong luon phai o trong pham vi cung va khong duoc ra ngoai. Cung tuc la hinh vuong 2X2 duoc danh dau bang duong cheo hinh chu X";
    std::cout <<"\nVi tri " << '(' << iViTriX << ", " << iViTriY << ')'; 
}