#Prob10.05: Định nghĩa (khai báo) kiểu dữ liệu cấu trúc để quản lý sinh viên gồm các thành phần là Mã số Sinh viên (kiểu chuỗi), Họ và Tên (kiểu chuỗi), Năm sinh (kiểu chuỗi), Giới tính (kiểu ký tự), Điểm toán (kiểu số thực), Điểm lý (kiểu số thực), Điểm hóa (kiểu số thực), Điểm Trung bình (kiểu số thực). Viết Chương trình nhập và xuất thông tin của một sinh viên.
Lưu ý: Điểm trung bình được tính bằng công thức: (Điểm toán+Điểm lý+Điểm hóa)/3.

void Nhap(SinhVien &sv){
    cin.getline(sv.MASV,10);
    cin.getline(sv.HoTen,100);
    cin.getline(sv.NgaySinh,12);
    cin>>sv.GioiTinh;
    cin>>sv.DiemToan>>sv.DiemLy>>sv.DiemHoa;
    sv.DTB = (sv.DiemToan + sv.DiemLy + sv.DiemHoa) / 3;
}
void Xuat(const SinhVien &sv){
    cout<<sv.MASV<<"\t";
    cout<<sv.HoTen<<"\t";
    cout<<sv.NgaySinh<<"\t";
    cout<<sv.GioiTinh<<"\t";
    cout<<setprecision(3)<<sv.DiemToan<<"\t";
    cout<<setprecision(3)<<sv.DiemLy<<"\t";
    cout<<setprecision(3)<<sv.DiemHoa<<"\t";
    cout<<setprecision(3)<<sv.DTB<<endl;
}
