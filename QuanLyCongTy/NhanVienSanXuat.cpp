#include "NhanVienSanXuat.h"

void NhanVienSanXuat::Nhap()
{
	NhanVien::Nhap();

	do
	{
		fflush(stdin);
		cout << "\nNhap vao so san pham: ";
		cin >> SoSanPham;

		if (SoSanPham < 0)
		{
			cout << "\nSo San pham khong hop le, hay kiem tra lai";
		}
	} while (SoSanPham < 0);
}

void NhanVienSanXuat::Xuat()
{
	NhanVien::Xuat();

	cout << "\nSo san pham la: " << SoSanPham;
}

double NhanVienSanXuat::TinhLuong() 
{
	return SoSanPham * 20000;
}

NhanVienSanXuat::NhanVienSanXuat(void)
{

}

NhanVienSanXuat::~NhanVienSanXuat(void)
{

}