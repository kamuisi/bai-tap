#include "Nguoi.h"
void Nguoi::Nhap()
{
    std::cout << "Nhap ho va ten: ";
    std::getline(std::cin, sHovaTen);
    std::cout << "Nhap nam sinh: ";
    std::cin >> iNamSinh;
    std::cout << "Nhap CMND: ";
    std::cin.ignore();
    std::getline(std::cin, sCMND);
    std::cout << "Nhap dia chi thuong tru: ";
    std::getline(std::cin, sDiaChiThuongTru);
}
void Nguoi::Xuat()
{
    std::cout << std::left << std::setw(20) << sHovaTen;
    std::cout << std::left << std::setw(20) << iNamSinh;
    std::cout << std::left << std::setw(20) << sCMND;
    std::cout << sDiaChiThuongTru << '\n';
}
