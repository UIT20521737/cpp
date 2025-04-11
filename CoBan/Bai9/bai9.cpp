#include <iostream>
using namespace std;

int main() {
    int mang[3];
    cout << "Nhap 3 so nguyen:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Phan tu " << i << ": ";
        cin >> mang[i];
    }

    cout << "Cac phan tu trong mang:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << mang[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}