#ifndef QuanCo_H
#define QuanCo_H
#include "Header.h"
class QuanCo
{
    protected:
        int iViTriX;
        int iViTriY;
        static int iMau;
        static int SoLuong;
    public:
        QuanCo(int vtx = 0, int vty= 0);
        virtual void Xuat();
};
#endif
