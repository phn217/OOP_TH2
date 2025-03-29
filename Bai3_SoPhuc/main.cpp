#include "SoPhuc.h"

void main()
{
	SoPhuc sp, sp1, sptong, sphieu, sptich, spthuong;
	int chon;
	do
	{
		cout << "\n---------------MENU---------------\n";
		cout << "1. Nhap so phuc\n";
		cout << "2. Xuat so phuc\n";
		cout << "3. Tinh tong 2 so phuc\n";
		cout << "4. Tinh hieu 2 so phuc\n";
		cout << "5. Tinh tich 2 so phuc\n";
		cout << "6. Tinh thuong 2 so phuc\n";
		cout << "0. Thoat chuong trinh\n";
		cout << "----------------------------------\n";
		cout << "Ban chon: ";
		cin >> chon;
		switch (chon)
		{
		case 0: 
			cout << "Dang thoat chuong trinh\n";
			break;
		case 1:
			cout << "Nhap so phuc:\n";
			sp.Nhap();
			break;
		case 2:
			cout << "So phuc hien tai la: ";
			sp.Xuat();
			break;
		case 3:
			cout << "Nhap so phuc A:\n";
			sp.Nhap();
			cout << "Nhap so phuc B:\n";
			sp1.Nhap();
			sptong = sp.Tong(sp1);
			cout << "A + B = ";
			sptong.Xuat(); cout << endl;
			break;
		case 4: 
			cout << "Nhap so phuc A:\n";
			sp.Nhap();
			cout << "Nhap so phuc B:\n";
			sp1.Nhap();
			sphieu = sp.Hieu(sp1);
			cout << "A - B = ";
			sphieu.Xuat(); cout << endl;
			break;
		case 5:
			cout << "Nhap so phuc A:\n";
			sp.Nhap();
			cout << "Nhap so phuc B:\n";
			sp1.Nhap();
			sptich = sp.Tich(sp1);
			cout << "A * B = ";
			sptich.Xuat(); cout << endl;
			break;
		case 6:
			cout << "Nhap so phuc A:\n";
			sp.Nhap();
			cout << "Nhap so phuc B:\n";
			sp1.Nhap();
			spthuong = sp.Thuong(sp1);
			cout << "A / B = ";
			spthuong.Xuat(); cout << endl;
			break;
		default:
			cout << "Ban chon sai. Vui long chon lai\n";
			break;
		}
	} while (chon != 0);
}