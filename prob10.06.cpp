#prob10.06: Định nghĩa (khai báo) kiểu dữ liệu cấu trúc để quản lý sinh viên gồm các thành phần là Mã số Sinh viên (kiểu chuỗi), Họ và Tên (kiểu chuỗi), Năm sinh (kiểu chuỗi), Giới tính (kiểu ký tự), Điểm toán (kiểu số thực), Điểm lý (kiểu số thực), Điểm hóa (kiểu số thực), Điểm Trung bình (kiểu số thực). Viết Chương trình nhập và xuất thông tin của danh sách gồm n (0 < n ≤ 100) sinh viên.
Lưu ý: Điểm trung bình được tính bằng công thức: (Điểm toán+Điểm lý+Điểm hóa)/3.

void Nhap(SinhVien A[],int &n){
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
    cin.getline(A[i].MASV,10);
    cin.getline(A[i].HoTen,100);
    cin.getline(A[i].NgaySinh,12);
    cin>>A[i].GioiTinh;
    cin>>A[i].DiemToan>>A[i].DiemLy>>A[i].DiemHoa;
    A[i].DTB = (A[i].DiemToan + A[i].DiemLy + A[i].DiemHoa) / 3;
    cin.ignore();
    }
}
void Xuat(const SinhVien A[], int n){
    for(int i=0;i<n;i++){
    cout<<A[i].MASV<<"\t";
    cout<<A[i].HoTen<<"\t";
    cout<<A[i].NgaySinh<<"\t";
    cout<<A[i].GioiTinh<<"\t";
    cout<<setprecision(3)<<A[i].DiemToan<<"\t";
    cout<<setprecision(3)<<A[i].DiemLy<<"\t";
    cout<<setprecision(3)<<A[i].DiemHoa<<"\t";
    cout<<setprecision(3)<<A[i].DTB<<endl;
    }
}
