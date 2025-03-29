#pragma once
#include <iostream>
using namespace std;

class PhanSo
{
private:
	int iTu, iMau;
public:
	void Nhap();
	void Xuat();
	void RutGon();
	PhanSo Tong(PhanSo&);
	PhanSo Hieu(PhanSo&);
	PhanSo Tich(PhanSo&);
	PhanSo Thuong(PhanSo&);
	PhanSo SoSanh(PhanSo&);
};