#include "Header.h"
#include "QuanCo.h"
int QuanCo::iMau;
int QuanCo::SoLuong;
#include "QuanTuongVua.h"
#include "QuanSi.h"
#include "QuanTuong.h"
#include "QuanMa.h"
#include "QuanXe.h"
#include "QuanPhao.h"
#include "QuanTot.h"
int main()
{
    QuanCo *A[32];
    int i;
    for(; i < 2;i++)
    {
        A[i] = new TuongVua;
    }
    for(; i < 6;i++)
    {
        A[i] = new Si;
    }
    for(; i < 10;i++)
    {
        A[i] = new Tuong;
    }
    for(; i < 14;i++)
    {
        A[i] = new Xe;
    }
    for(; i < 18;i++)
    {
        A[i] = new Ma;
    }
    for(; i < 22;i++)
    {
        A[i] = new Phao;
    }
    for(; i < 32;i++)
    {
        A[i] = new Tot;
    }
    int ChonQuanCo;
    std::cout << "1   10___14___6____2____0____3____7___15___11         \n"
              << "    |    |    |    |*   |   *|    |    |    |   TRANG \n"
              << "2   |____|____|____|___*|*___|____|____|____|         \n"
              << "    |    |    |    |   *|*   |    |    |    |         \n"
              << "3   |___18____|____|*___|___*|____19___|____|         \n"
              << "    |    |    |    |    |    |    |    |    |         \n"
              << "4   22___|___23____|___24____|____25___|___26         \n"
              << "    |    |    |    |    |    |    |    |    |         \n"
              << "5   |____|____|____|____|____|____|____|____|         \n"
              << "    |                                       |         \n"
              << "6   |____ ____ ____ ____ ____ ____ ____ ____|         \n"
              << "    |    |    |    |    |    |    |    |    |         \n"
              << "7   27___|___28____|___29____|____30___|___31         \n"
              << "    |    |    |    |    |    |    |    |    |         \n"
              << "8   |___20____|____|____|____|____21___|____|         \n"
              << "    |    |    |    |*   |   *|    |    |    |         \n"
              << "9   |____|____|____|___*|*___|____|____|____|         \n"
              << "    |    |    |    |   *|*   |    |    |    |    Den  \n"
              << "10  12___16___8____4____1____5____9___17___13         \n"
              << "                                                      \n"
              << "    1    2    3    4    5    6    7    8    9         \n";
    std::cout << "\nChon quan co: ";
    std::cin >> ChonQuanCo;
    A[ChonQuanCo]->Xuat();
    return 0;
}