#ifndef QuanTuong_H
#define QuanTuong_H
#include "QuanCo.h"
class Tuong : public QuanCo
{
public:
    Tuong(int vtx = 0, int vty = 0);
    void Xuat();
};
#endif