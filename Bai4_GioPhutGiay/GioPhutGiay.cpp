#include "GioPhutGiay.h"

void GioPhutGiay::Nhap()
{
    do {
        cout << "Nhap gio (0-23): ";
        cin >> iGio;
        if (iGio < 0 || iGio > 23) {
            cout << "Gio khong hop le! Vui long nhap lai.\n";
        }
    } while (iGio < 0 || iGio > 23);

    do {
        cout << "Nhap phut (0-59): ";
        cin >> iPhut;
        if (iPhut < 0 || iPhut > 59) {
            cout << "Phut khong hop le! Vui long nhap lai.\n";
        }
    } while (iPhut < 0 || iPhut > 59);

    do {
        cout << "Nhap giay (0-59): ";
        cin >> iGiay;
        if (iGiay < 0 || iGiay > 59) {
            cout << "Giay khong hop le! Vui long nhap lai.\n";
        }
    } while (iGiay < 0 || iGiay > 59);
}

void GioPhutGiay::Xuat() 
{
    cout << "Thoi gian: " << iGio << " gio " << iPhut << " phut " << iGiay << " giay\n";
}

void GioPhutGiay::TinhCongThemMotGiay()
{
    iGiay++;
    if (iGiay >= 60) {
        iGiay = 0;
        iPhut++;
        if (iPhut >= 60) {
            iPhut = 0;
            iGio++;
            if (iGio >= 24) {
                iGio = 0;
            }
        }
    }
}