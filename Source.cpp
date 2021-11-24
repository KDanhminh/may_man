#include "UserThuong.h"
#include "ThanhVien.h"
#include "TaiLieu.h"
#include "Admin.h"
#include <iostream>
using namespace std;

void main() {
	cout << "WebSite Chia sẽ Tài Liệu";
	ThanhVien a;
	User b;
	Admin c;
	TaiLieu d;
	Doctailieu();
	Taitailieu();
	DangKy();
	DangNhap();
	Dangtailieu();
	QuanLiThongTin();
	QuanLyCauHinhWedsite();
	QuanLyTaiLieu();
	QuanLyThanhVien();
	QuanLyThongTinDienDan();
}