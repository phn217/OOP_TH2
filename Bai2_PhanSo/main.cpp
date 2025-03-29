#include "PhanSo.h"

void main()
{
	PhanSo ps, ps1, psmax, pstong, pshieu, pstich, psthuong;
	int chon;
	do
	{
		cout << "\n------------MENU------------\n";
		cout << "1. Nhap phan so\n";
		cout << "2. Xuat phan so\n";
		cout << "3. Rut gon phan so\n";
		cout << "4. Tinh tong 2 phan so\n";
		cout << "5. Tinh hieu 2 phan so\n";
		cout << "6. Tinh tich 2 phan so\n";
		cout << "7. Tinh thuong 2 phan so\n";
		cout << "8. So sanh 2 phan so\n";
		cout << "0. Thoat chuong trinh\n";
		cout << "----------------------------\n";
		cout << "Ban chon: ";
		cin >> chon;
		switch (chon) 
		{
		case 0:
			cout << "Dang thoat chuong trinh...\n";
			break;
		case 1:
			ps.Nhap();
			break;
		case 2:
			ps.Xuat();
			break;
		case 3:
			ps.Nhap();
			cout << "Phan so da rut gon la: ";
			ps.RutGon();
			ps.Xuat();
			break;
		case 4:
			cout << "Nhap vao 2 phan so\n";
			cout << "Nhap phan so thu 1: \n";
			ps.Nhap();
			cout << "Nhap phan so thu 2: \n";
			ps1.Nhap();
			pstong = ps.Tong(ps1);
			cout << "Tong 2 phan so la: ";
			pstong.RutGon();
			pstong.Xuat();
			break;
		case 5:
			cout << "Nhap vao 2 phan so\n";
			cout << "Nhap phan so thu 1: \n";
			ps.Nhap();
			cout << "Nhap phan so thu 2: \n";
			ps1.Nhap();
			pshieu = ps.Hieu(ps1);
			cout << "Hieu 2 phan so la: ";
			pshieu.RutGon();
			pshieu.Xuat();
			break;
		case 6:
			cout << "Nhap vao 2 phan so\n";
			cout << "Nhap phan so thu 1: \n";
			ps.Nhap();
			cout << "Nhap phan so thu 2: \n";
			ps1.Nhap();
			pstich = ps.Tich(ps1);
			cout << "Tich 2 phan so la: ";
			pstich.RutGon();
			pstich.Xuat();
			break;
		case 7:
			cout << "Nhap vao 2 phan so\n";
			cout << "Nhap phan so thu 1: \n";
			ps.Nhap();
			cout << "Nhap phan so thu 2: \n";
			ps1.Nhap();
			psthuong = ps.Thuong(ps1);
			cout << "Tong 2 phan so la: ";
			psthuong.RutGon();
			psthuong.Xuat();
			break;
		case 8:
			cout << "Nhap vao 2 phan so\n";
			cout << "Nhap phan so thu 1: \n";
			ps.Nhap();
			cout << "Nhap phan so thu 2: \n";
			ps1.Nhap();
			psmax = ps.SoSanh(ps1);
			psmax.Xuat();
			break;
		default:
			cout << "Ban chon sai. Moi chon lai";
			break;
		}
	} while (chon != 0);
}