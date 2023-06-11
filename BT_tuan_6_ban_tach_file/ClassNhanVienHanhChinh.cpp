#include "ClassNhanVienHanhChinh.h"
    int NhanVienHanhChinh::GetThoiGian(int &a)
        {
            if(a > iThoiGianLamThuaGio)
            {
                return a;
            }
            return iThoiGianLamThuaGio;
        }
        void NhanVienHanhChinh::Nhap()
        {
            std::cout << "Nhap ma nhan vien: ";
            std::cin.ignore();
            std::getline(std::cin, sMaNhanVien);
            std::cout << "Nhap ten nhan vien: ";
            std::getline(std::cin, sHovaTen);
            std::cout << "Tuoi: ";
            std::cin >> iTuoi;
            std::cout << "Nhap so dien thoai cua nhan vien: ";
            std::cin.ignore();
            std::getline(std::cin, sSDT);
            std::cout << "Nhap so email cua nhan vien: ";
            std::getline(std::cin, sEmail);
            std::cout << "Thoi gian lam thua gio: ";
            std::cin >> iThoiGianLamThuaGio;
        }
        void NhanVienHanhChinh::Xuat()
        {
            std::cout << std::left << std::setw(20) << sMaNhanVien;
            std::cout << std::left << std::setw(20) << sHovaTen;
            std::cout << std::left << std::setw(20) << iTuoi;
            std::cout << std::left << std::setw(20) << sSDT;
            std::cout << sEmail <<'\n';
        }