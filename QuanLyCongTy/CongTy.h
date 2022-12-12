#pragma once
#include "NhanVienCongNhat.h"
#include "NhanVienSanXuat.h"
#include <vector>

class CongTy
{
private:
	vector <NhanVien*> list;

public:
	void Nhap();
	void Xuat();

	CongTy(void);
	~CongTy(void);
};

