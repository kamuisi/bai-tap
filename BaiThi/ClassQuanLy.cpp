#include "ClassQuanLy.h"
void QuanLy::QuanLyVe()
{
    Ve *dsVeBanRa[100];
    int n, loai;
    std::cout << "So ve ban ra: ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Ve thu " << i + 1 << " :\n";
        std::cout << "Loai ve:\n1. Ve Thuong\n2. Ve Vip\n3.Ve Tap\n";
        std::cin >> loai;
        switch (loai)
        {
        case 1:
        {
            dsVeBanRa[i] = new VeThuong;
            dsVeBanRa[i]->Nhap();
            if (::MaxGiaVe < dsVeBanRa[i]->GiaVe)
            {
                ::MaxGiaVe = dsVeBanRa[i]->GiaVe;
                ::GiaVeThuongCaoNhat = i;
            }
            break;
        }
        case 2:
        {
            dsVeBanRa[i] = new VeVip;
            dsVeBanRa[i]->Nhap();
            break;
        }
        case 3:
        {
            dsVeBanRa[i] = new VeTap;
            dsVeBanRa[i]->Nhap();
            break;
        }
        }
    }
    ::TrungBinhSoDichVuThem /= ::SoDichVuThem;
    std::cout << "Tong so tien da thu duoc tu nguoi moi tap choi: " << ::TongSoTienDaBan << "VND" << std::endl;
    std::cout << "Trung binh so dich vu duoc chon them: " << ::TrungBinhSoDichVuThem << std::endl;
    std::cout << "Ve thuong co menh gia cao nhat la ve so: " << ::GiaVeThuongCaoNhat + 1 << ". ";
    dsVeBanRa[::GiaVeThuongCaoNhat]->Xuat();
}