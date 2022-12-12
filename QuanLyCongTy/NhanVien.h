#pragma once
#include <iostream>
#include <string>

using namespace std;

class NhanVien
{
protected:
	string MaSo, HoTen, NgaySinh, DiaChi;

public:
	virtual void Nhap();
	virtual void Xuat();
	virtual double TinhLuong();

	NhanVien(void);
	virtual ~NhanVien(void);
};

