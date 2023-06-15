#include "ClassVeVip.h"
void VeVip::TinhTienVe()
{
    GiaVe = 4000000;
}
void VeVip::Nhap()
{
    TinhTienVe();
}
void VeVip::Xuat()
{
    std::cout << "Thanh tien: " << GiaVe << "VND";
}