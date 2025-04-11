// #include <iostream> // Thư viện đầu vào/đầu ra
// using namespace std; // Sử dụng không gian tên chuẩn

// int main() { // Hàm chính của chương trình
//     cout << "Xin chao, day la chuong trinh C++ dau tien!" << endl; // In ra màn hình
//     system("pause");
//     return 0; // Kết thúc chương trình
// }

#include <iostream>
using namespace std;

int main() {
    string ten; // Khai báo biến kiểu chuỗi
    cout << "Nhap ten cua ban: ";
    cin >> ten; // Nhận dữ liệu từ bàn phím
    cout << "Xin chao, " << ten << "!" << endl;
    system("pause");
    return 0;
}