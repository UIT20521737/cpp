#include <iostream>
#define sp system("pause");
using namespace std;

// int main() {
//     for (int i = 1; i <= 5; i++) {
//         cout << "Lan thu " << i << endl;
//     }
//     sp;
//     return 0;
// }

// int main() {
//     int i = 1;
//     while (i <= 5) {
//         cout << "WL. Lan thu " << i << endl;
//         i++; // Tăng i để tránh lặp vô hạn
//     }
//     sp;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i = 6;
//     do {
//         cout << "Lan thu " << i << endl;
//         i++;
//     } while (i <= 5);
//     sp;
//     return 0;
// }

int main() {

    for (int i = 2; i <= 9; i++){
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }
    
    sp;
    return 0;
}