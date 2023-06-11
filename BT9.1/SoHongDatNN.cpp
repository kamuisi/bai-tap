#include "SoHongDatNN.h"
void SoHongDatNN::GetiThoiHan()
{
    std::cin >> iThoiHan;
    if (iThoiHan < 2023)
    {
        ::arrayThuaDatHetThoiHan[::iThuaDatHetThoiHan] = ::CountThuaDatHetThoiHan;
        ::iThuaDatHetThoiHan++;
    }
    ::CountThuaDatHetThoiHan++;
}
void SoHongDatNN::Nhap()
{
    std::cout << "Nhap thoi han: ";
    GetiThoiHan();
    SoHong::Nhap();
}
void SoHongDatNN::Xuat()
{
    SoHong::Xuat();
}