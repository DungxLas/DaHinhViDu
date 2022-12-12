#include "NhanVien.h"

// <Kiểu dữ kiệu> <Tên Lớp> :: <Tên phương thức>
void NhanVien::Nhap()
{
	fflush(stdin);
	cout << "\nNhap vao ma so: ";
	getline(cin, MaSo);

	fflush(stdin);
	cout << "\nNhap vao ho ten: ";
	getline(cin, HoTen);

	fflush(stdin);
	cout << "\nNhap vao ngay sinh: ";
	getline(cin, NgaySinh);

	fflush(stdin);
	cout << "\nNhap vao dia chi: ";
	getline(cin, DiaChi);
}

void NhanVien::Xuat()
{
	cout << "\nMa so: " << MaSo;
	cout << "\nHo ten: " << HoTen;
	cout << "\nNgay sinh: " << NgaySinh;
	cout << "\nDia chi: " << DiaChi;
}

double NhanVien::TinhLuong()
{
	return 0;
}

NhanVien::NhanVien(void)
{

}

NhanVien::~NhanVien(void)
{

}
