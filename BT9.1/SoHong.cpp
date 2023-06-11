#include "SoHong.h"
void SoHong::Nhap()
{
    std::cout << "Nhap so giay chung nhan: ";
    std::cin.ignore();
    std::getline(std::cin, sSoGiayChungNhan);
    std::cout << "Nhap so nguoi dong so huu: ";
    std::cin >> iSoNguoiDongSoHuu;
    std::cin.ignore();
    dsNguoiSoHuu = new Nguoi[iSoNguoiDongSoHuu];
    for (int i = 0; i < iSoNguoiDongSoHuu; i++)
    {
        std::cout << "Thong tin nguoi so huu thu " << i + 1 << ":\n";
        dsNguoiSoHuu[i].Nhap();
    }
    std::cout << "Nhap so thua dat: ";
    std::cin >> iSoThuaDat;
    std::cout << "Nhap so to ban dat: ";
    std::cin >> iSoToBanDo;
    std::cout << "Nhap dia chi thua dat: ";
    std::cin.ignore();
    std::getline(std::cin, sDiaChiThuaDat);
    std::cout << "Nhap dien tich: ";
    std::cin >> iDienTich;
    std::cout << "Nhap ngay cap: ";
    std::cin.ignore();
    std::getline(std::cin, SNgayCap);
    std::cout << "Nhap don gia thue: ";
    std::cin >> iDonGiaThue;
}
long SoHong::TinhTienThue()
{
    if (iDonGiaThue * iDienTich > ::MaxTienThue)
    {
        ::MaxTienThue = iDonGiaThue * iDienTich;
        ::ThuaMaxTienThue = ::CountMaxTienThue;
    }
    ::CountMaxTienThue++;
    return iDonGiaThue * iDienTich;
}
void SoHong::Xuat()
{
    std::cout << "So giay chung nhan: " << sSoGiayChungNhan << std::endl;
    std::cout << "Thong tin nguoi so huu:\n";
    std::cout << "\t" << std::left << std::setw(20) << "Ho va ten" << std::left << std::setw(20) << "Nam sinh" << std::left
              << std::setw(20) << "CMND"
              << "Dia chi thuong tru\n";
    for (int i = 0; i < iSoNguoiDongSoHuu; i++)
    {
        std::cout << i + 1 << ".\t";
        dsNguoiSoHuu[i].Xuat();
    }
    std::cout << "So thua dat: " << iSoThuaDat << std::endl;
    std::cout << "So to ban do: " << iSoToBanDo << std::endl;
    std::cout << "Dien tich: " << iDienTich << std::endl;
    std::cout << "Ngay cap: " << SNgayCap << std::endl;
    std::cout << "Don gia thue: " << iDonGiaThue << std::endl;
    std::cout << "So tien thue: " << TinhTienThue() << std::endl;
}
