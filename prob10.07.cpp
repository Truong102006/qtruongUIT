#prob10.07: Định nghĩa (khai báo) kiểu dữ liệu cấu trúc để quản lý sinh viên gồm các thành phần là Mã số Sinh viên (kiểu chuỗi), Họ và Tên (kiểu chuỗi), Năm sinh (kiểu chuỗi), Giới tính (kiểu ký tự), Điểm toán (kiểu số thực), Điểm lý (kiểu số thực), Điểm hóa (kiểu số thực), Điểm Trung bình (kiểu số thực). Viết Chương trình nhập và xuất (theo thứ tự giảm dần của MASV) danh sách gồm n (0 < n ≤ 100) sinh viên.
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
bool compare(SinhVien a, SinhVien b){
return strcmp(a.MASV,b.MASV)>0;
}
void SapXepGiamTheoMASV(SinhVien A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(A[j].MASV, A[j + 1].MASV) < 0) {
                SinhVien temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
void Xuat(const SinhVien A[], int n){
    for(int i=0;i<n;i++){
    cout<<A[i].MASV<<"\t";
    cout<<A[i].HoTen<<"\t";
    cout<<A[i].NgaySinh<<"\t";
    cout<<A[i].GioiTinh<<"\t";
    cout<<setprecision(2)<<A[i].DiemToan<<"\t";
    cout<<setprecision(2)<<A[i].DiemLy<<"\t";
    cout<<setprecision(2)<<A[i].DiemHoa<<"\t";
    cout<<setprecision(3)<<A[i].DTB<<endl;
    }
}
