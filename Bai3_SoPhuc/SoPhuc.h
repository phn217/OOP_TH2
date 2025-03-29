#pragma once
#include <iostream>
using namespace std;

class SoPhuc
{
private:
	double iThuc, iAo;
public:
	void Nhap();
	void Xuat();
	SoPhuc Tong(SoPhuc&);
	SoPhuc Hieu(SoPhuc&);
	SoPhuc Tich(SoPhuc&);
	SoPhuc Thuong(SoPhuc&);
};

