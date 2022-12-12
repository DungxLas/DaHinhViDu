#include "NhanVienCongNhat.h"

void NhanVienCongNhat::Nhap()
{
	NhanVien::Nhap();

	do
	{
		fflush(stdin);
		cout << "\nNhap vao so san pham: ";
		cin >> SoNgayCong;

		if (SoNgayCong < 0)
		{
			cout << "\nSo ngay cong khong hop le, hay kiem tra lai";
		}
	} while (SoNgayCong < 0);
}

void NhanVienCongNhat::Xuat()
{
	NhanVien::Xuat();

	cout << "\nSo ngay cong la: " << SoNgayCong;
}

double NhanVienCongNhat::TinhLuong()
{
	return SoNgayCong * 55000;
}

NhanVienCongNhat::NhanVienCongNhat(void)
{

}

NhanVienCongNhat::~NhanVienCongNhat(void)
{

}