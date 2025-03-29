#include "GioPhutGiay.h"

void main()
{
    GioPhutGiay tg;
    tg.Nhap();
    tg.Xuat();
    tg.TinhCongThemMotGiay();
    cout << "Sau khi cong 1 giay: ";
    tg.Xuat();
}