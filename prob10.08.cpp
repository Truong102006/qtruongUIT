#prob10.08: Định nghĩa (khai báo) kiểu dữ liệu cấu trúc để quản lý sinh viên gồm các thành phần là Mã số Sinh viên (kiểu chuỗi), Họ và Tên (kiểu chuỗi), Năm sinh (kiểu chuỗi), Giới tính (kiểu ký tự), Điểm toán (kiểu số thực), Điểm lý (kiểu số thực), Điểm hóa (kiểu số thực), Điểm Trung bình (kiểu số thực). Viết Chương trình nhập mảng gồm n (0 < n ≤ 100) sinh viên và xuất mảng sinh viên sau khi đã xóa tất cả các sinh viên có họ tên X (X được nhập vào).
Lưu ý: Điểm trung bình được tính bằng công thức: (Điểm toán+Điểm lý+Điểm hóa)/3.

void Nhap(char hoTenCanXoa[100])
{
	cin.getline(hoTenCanXoa,100);	
} 

void Nhap(SinhVien a[], int &n) 
{
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) 
	{
        cin.getline(a[i].MASV, 10);
        cin.getline(a[i].HoTen, 100);
        cin.getline(a[i].NgaySinh, 12);
        cin >> a[i].GioiTinh >> a[i].DiemToan >> a[i].DiemLy >> a[i].DiemHoa;
        a[i].DTB = (a[i].DiemToan + a[i].DiemLy + a[i].DiemHoa) / 3;
        cin.ignore();
	}
}
void XoaTheoHoTen(SinhVien a[], int &n, char hoTenCanXoa[100])
{
	for(int i=0; i<n;i++)
	{
		if (strcmp(a[i].HoTen,hoTenCanXoa)==0)
		{
			for(int j=i;j<n-1;j++)
			{
				a[j]=a[j+1];
			}
			i--;
			n--;
		}
	}
}
void Xuat(SinhVien a[], int n) 
{
    for (int i = 0; i < n; ++i) 
	{
        cout << a[i].MASV << "\t" << a[i].HoTen << "\t" << a[i].NgaySinh << "\t"
             << a[i].GioiTinh << "\t" << a[i].DiemToan << "\t" << a[i].DiemLy << "\t"
             << a[i].DiemHoa << "\t" << setprecision(3) << a[i].DTB << endl;
    }
}
