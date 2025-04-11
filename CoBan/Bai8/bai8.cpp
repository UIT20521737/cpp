#include <iostream>
using namespace std;

// void chao() {
//     cout << "Xin chao, ban khoe khong?" << endl;
// }

// int main() {
//     chao(); // Gọi hàm
//     system("pause");
//     return 0;
// }
int cong(int a, int b) {
    return a + b; // Trả về tổng
}

int main() {
    int x = 5, y = 3;
    int ket_qua = cong(x, y); // Gọi hàm và lưu kết quả
    cout << "Tong: " << ket_qua << endl; // 8
    system("pause");
    return 0;
}