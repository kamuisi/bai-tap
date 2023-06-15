#include "ClassVeThuong.h"
void VeThuong::TinhTienVe()
{
    GiaVe = 1800000 + 600000 * SoDichVu;
}
void VeThuong::Nhap()
{
    int luachon;
    std::cout << "Co su dung dich vu khac khong\n1. Co\n2. Khong\n";
    std::cin >> luachon;
    if (luachon == 1)
    {
        std::cout << "So dich vu su dung them: ";
        std::cin >> SoDichVu;
        ::TrungBinhSoDichVuThem += SoDichVu;
        ::SoDichVuThem++;
    }
    TinhTienVe();
}
void VeThuong::Xuat()
{
    std::cout << "Thanh tien: " << GiaVe << "VND";
}