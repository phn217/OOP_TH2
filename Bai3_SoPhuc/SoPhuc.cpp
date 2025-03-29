#include "SoPhuc.h"

void SoPhuc::Nhap()
{
	cout << "Nhap phan thuc: ";
	cin >> iThuc;
	cout << "Nhap phan ao: ";
	cin >> iAo;
}
void SoPhuc::Xuat()
{
	cout << iThuc << (iAo >= 0 ? " + " : " - ") << abs(iAo) << "i";
}
SoPhuc SoPhuc::Tong(SoPhuc& sp)
{
	SoPhuc sptong;
	sptong.iThuc = iThuc + sp.iThuc;
	sptong.iAo = iAo + sp.iAo;
	return sptong;
}
SoPhuc SoPhuc::Hieu(SoPhuc& sp)
{
	SoPhuc sphieu;
	sphieu.iThuc = iThuc - sp.iThuc;
	sphieu.iAo = iAo - sp.iAo;
	return sphieu;
}
SoPhuc SoPhuc::Tich(SoPhuc& sp)
{
	SoPhuc sptich;
	sptich.iThuc = iThuc * sp.iThuc - iAo * sp.iAo;
	sptich.iAo = iThuc * sp.iAo + iAo * sp.iThuc;
	return sptich;
}
SoPhuc SoPhuc::Thuong(SoPhuc& sp)
{
	double mau = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;
	SoPhuc spthuong;
	spthuong.iThuc = (iThuc * sp.iThuc + iAo * sp.iAo) / mau;
	spthuong.iAo = (iAo * sp.iThuc - iThuc * sp.iAo) / mau;
	return spthuong;
}