#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; // số lượng cột
    cin >> n;

    vector<int> a(n); // giới hạn dưới của cột
    vector<int> b(n); // giới hạn trên của cột

    // Nhập dữ liệu cho mảng a và b
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    // Tìm khoảng giá trị hợp lệ nhất
    // Giá trị bắt đầu hợp lệ phải lớn hơn hoặc bằng giá trị lớn nhất của mảng a
    int lower_bound = *max_element(a.begin(), a.end());
    // Giá trị kết thúc hợp lệ phải nhỏ hơn hoặc bằng giá trị nhỏ nhất của mảng b
    int upper_bound = *min_element(b.begin(), b.end());

    // Kiểm tra nếu khoảng giá trị hợp lệ tồn tại
    if (lower_bound <= upper_bound) {
        // Số lượng vị trí hợp lệ là tổng số giá trị trong khoảng [lower_bound, upper_bound]
        cout << (upper_bound - lower_bound + 1) << endl;
    } else {
        // Nếu không có giá trị hợp lệ nào
        cout << 0 << endl;
    }

    return 0;
}
