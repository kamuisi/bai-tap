#include "Header.h"
#include "Nguoi.h"
#include "SoHong.h"
#include "SoHongDatNN.h"
#include "SoHongDatO.h"
int main()
{
    SoHong* a[100];
    int n;
    int loai;
    std::cout<< "Nhap so giay chung nhan can cap : ";
    std::cin >> n;
    for(int i=0; i<n; i++)
    {
        std::cout<<"So can cap la :\n";
        std::cout<<"1. So hong nong nghiep\n";
        std::cout<<"2. So hong dat o\n";
        std::cin >> loai;
        switch (loai)
        {
        case 1:
            a[i] = new SoHongDatNN;
            a[i]->Nhap();
            break;
        case 2:
            a[i] = new SoHongDatO;
            a[i]->Nhap();
            break;
        }
    }
    if(::iThuaDatHetThoiHan != 0)
    {
        std::cout << std::setw(60) << "Thua dat da het thoi han\n";
    }
    for(int i=0; i<::iThuaDatHetThoiHan; i++)
    {
        std::cout<< i+1<<".\n";
        a[::arrayThuaDatHetThoiHan[i]]->Xuat();
    }
    if(::MaxTienThue != 0)
    {
        std::cout << "                         " << "Thong tin thua dat no tien thue nhieu nhat\n";
        a[ThuaMaxTienThue]->Xuat();
    }
    return 0;
}
    
    
