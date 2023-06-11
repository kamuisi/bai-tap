#ifndef QuanTuongVua_H
#define QuanTuongVua_H
#include "QuanCo.h"
class TuongVua : public QuanCo
{   
    public:
        TuongVua(int vtx = 0, int vty= 0);
        void Xuat();
};
#endif