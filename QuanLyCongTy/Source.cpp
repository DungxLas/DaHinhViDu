#include "NhanVienSanXuat.h";

int main()
{
	NhanVien* nv;
	nv = new NhanVienSanXuat;

	nv->Nhap();
	nv->Xuat();


	system("pause");
	return 0;
}