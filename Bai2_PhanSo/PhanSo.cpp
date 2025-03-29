#include "PhanSo.h"

void PhanSo::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> iTu;
	do
	{
		cout << "Nhap mau so (khac 0): ";
		cin >> iMau;
	} while (iMau == 0);
}

void PhanSo::Xuat()
{
	if (iMau < -1)
		cout << -iTu << "/" << -iMau;
	else if (iMau == -1)
		cout << -iTu;
	else if (iMau == 0)
		cout << "Khong xac dinh";
	else if (iMau == 1)
		cout << iTu;
	else
		cout << iTu << "/" << iMau;
}

void PhanSo::RutGon()
{
	int a = abs(iTu), b = abs(iMau), ucln;
	if (a == 0 || b == 0)
		ucln = a + b;
	else
	{
		while (b != 0) {
			int r = a % b;
			a = b;
			b = r;
		}
		ucln = a;
	}
	if (ucln > 0)
	{
		iTu /= ucln;
		iMau /= ucln;
	}
}

PhanSo PhanSo::Tong(PhanSo& ps)
{
	PhanSo pstong;
	pstong.iTu = iTu * ps.iMau + ps.iTu * iMau;
	pstong.iMau = iMau * ps.iMau;
	pstong.RutGon();
	return pstong;

}

PhanSo PhanSo::Hieu(PhanSo& ps)
{
	PhanSo pshieu;
	pshieu.iTu = iTu * ps.iMau - ps.iTu * iMau;
	pshieu.iMau = iMau * ps.iMau;
	pshieu.RutGon();
	return pshieu;
}

PhanSo PhanSo::Tich(PhanSo& ps)
{
	PhanSo pstich;
	pstich.iTu = iTu * ps.iTu;
	pstich.iMau = iMau * ps.iMau;
	pstich.RutGon();
	return pstich;
}

PhanSo PhanSo::Thuong(PhanSo& ps)
{
	PhanSo psthuong;
	psthuong.iTu = iTu * ps.iMau;
	psthuong.iMau = iMau * ps.iTu;
	psthuong.RutGon();
	return psthuong;
}

PhanSo PhanSo::SoSanh(PhanSo& ps)
{
	if (iTu * ps.iMau == ps.iTu * iMau)
	{
		cout << "Hai phan so bang nhau va bang ";
		return *this;
	}
	else
		cout << "Phan so lon hon la: ";
		return (iTu * ps.iMau > ps.iTu * iMau) ? *this : ps;
}