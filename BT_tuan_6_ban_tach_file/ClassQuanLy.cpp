#include "ClassQuanLy.h"
        void QuanLy::TinhTrungBinh()
        {
            for(int i =0;i<lSoNhanVienBanHang;i++)
            {
                lTrungBinhSanPhamBanRa+= dsKhenThuong[ViTriNguoiBan[i]]->GetSanPham();

            }
            lTrungBinhSanPhamBanRa/=lSoNhanVienBanHang;
        }
        void QuanLy::Nhap()
        {
            int n, iLoai;
            std::cout << "So luong nhan vien can nhap: ";
            std::cin >> n;
            for(int i = 0;i<n;i++)
            {
                std::cout << "Loai nhan vien:\n1. Nhan vien ban hang\n2. Nhan vien hanh chinh\n";
                std::cin >> iLoai;
                switch(iLoai)
                {
                    case 1:
                    {
                        dsKhenThuong[i] = new NhanVienBanHang;
                        dsKhenThuong[i]->Nhap();
                        ViTriNguoiBan[lSoNhanVienBanHang] = i;
                        lSoNhanVienBanHang++;
                        break;
                    }
                    case 2:
                    {
                        dsKhenThuong[i] = new NhanVienHanhChinh;
                        dsKhenThuong[i]->Nhap();
                        if(iMaxThuaGio - dsKhenThuong[i]->GetThoiGian(iMaxThuaGio) != 0)
                        {
                            iNhanVienMaxThuaGio = i;
                        }
                        iMaxThuaGio = dsKhenThuong[i]->GetThoiGian(iMaxThuaGio);
                        break;
                    }
                }
            }
        }
        void QuanLy::QuanLyNhanSu()
        {
            Nhap();
            TinhTrungBinh();
            std::cout << "Nhan vien lam thua gio nhieu nhat: " << dsKhenThuong[iNhanVienMaxThuaGio]->sHovaTen << std::endl;
            std::cout << std::setw(100) << "Nhan vien co so san pham ban ra tren trung binh so san pham nhan vien duoc khen thuong da ban ra\n";
            std::cout << std::left << std::setw(20) <<"Ma nhan vien" << std::left << std::setw(20) << "Ho va ten" << std::left << std::setw(20) << "Tuoi"
            << std::left << std::setw(20) << "So dien thoai" << std::left << std::setw(20) << "Email" << std::endl;
            for(int i =0 ; i<lSoNhanVienBanHang;i++)
            {
                if(dsKhenThuong[ViTriNguoiBan[i]]->GetSanPham() > lTrungBinhSanPhamBanRa)
                {
                    dsKhenThuong[ViTriNguoiBan[i]]->Xuat();
                }
            }
            std::cout << "So nhan vien ban hang la: " << lSoNhanVienBanHang <<'\n';
        }