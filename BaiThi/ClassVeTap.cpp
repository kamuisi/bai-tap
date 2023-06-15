#include "ClassVeTap.h"
void VeTap::TinhTienVe()
{
    GiaVe = 1700000 * SoGioTap;
    ::TongSoTienDaBan += GiaVe;
}
void VeTap::Nhap()
{
    std::cout << "So gio muon tap luyen: ";
    std::cin >> SoGioTap;
    TinhTienVe();
}
void VeTap::Xuat()
{
    std::cout << "Thanh tien: " << GiaVe << "VND";
}