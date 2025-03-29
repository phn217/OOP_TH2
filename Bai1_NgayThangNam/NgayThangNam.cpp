#include "NgayThangNam.h"

void NgayThangNam::Nhap()
{
    int ngaytrongthang[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    do {
        cout << "Nhap ngay: ";
        cin >> iNgay;
        cout << "Nhap thang: ";
        cin >> iThang;
        cout << "Nhap nam: ";
        cin >> iNam;

    if (iThang == 2 && ((iNam % 400 == 0) || (iNam % 4 == 0 && iNam % 100 != 0))) 
        ngaytrongthang[2] = 29;
    else 
        ngaytrongthang[2] = 28;
    
    if (iThang < 1 || iThang > 12 || iNgay < 1 || iNgay > ngaytrongthang[iThang]) 
        cout << "Ngay thang nam khong hop le. Vui long nhap lai\n";
    } while (iThang < 1 || iThang > 12 || iNgay < 1 || iNgay > ngaytrongthang[iThang]);
}

void NgayThangNam::Xuat()
{
    cout << "Ngay thang nam la: ";
	cout << iNgay << "/" << iThang << "/" << iNam << endl;
}

void NgayThangNam::NgayTiepTheo()
{
    int ngaytrongthang[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if ((iNam % 400 == 0) || (iNam % 4 == 0 && iNam % 100 != 0)) {
        ngaytrongthang[2] = 29;
    }

    iNgay++;
    if (iNgay > ngaytrongthang[iThang]) {
        iNgay = 1;
        iThang++;
        if (iThang > 12) {
            iThang = 1;
            iNam++;
        }
    }
    cout << "Ngay tiep theo la: " << iNgay << "/" << iThang << "/" << iNam;
}