### Vòng lặp trong C++

**Vòng lặp** (loops) được sử dụng để lặp lại một khối mã nhiều lần cho đến khi một điều kiện cụ thể được thỏa mãn. Trong C++, có ba loại vòng lặp chính: `for`, `while`, và `do-while`.

---

### 1. Vòng lặp `for`

-   **Ý nghĩa**: Dùng khi bạn biết trước số lần lặp (thường dùng với biến đếm).
-   **Cú pháp:**

```cpp
for (khởi_tạo; điều_kiện; cập_nhật) {
    // Khối mã thực hiện trong mỗi lần lặp
}
```

-   `khởi_tạo`: Thiết lập giá trị ban đầu cho biến đếm (chỉ chạy một lần).
-   `điều_kiện`: Kiểm tra trước mỗi lần lặp, nếu đúng thì tiếp tục, nếu sai thì dừng.
-   `cập_nhật`: Thay đổi giá trị biến đếm sau mỗi lần lặp.

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Lan thu " << i << endl;
    }
    return 0;
}
```

**Kết quả:**

```
Lan thu 1
Lan thu 2
Lan thu 3
Lan thu 4
Lan thu 5
```

-   `i` bắt đầu từ 1, tăng dần lên 1 sau mỗi lần lặp, dừng khi `i > 5`.

---

### 2. Vòng lặp `while`

-   **Ý nghĩa**: Lặp khi điều kiện đúng, kiểm tra điều kiện trước khi thực hiện khối mã.
-   **Cú pháp:**

```cpp
while (điều_kiện) {
    // Khối mã thực hiện trong mỗi lần lặp
}
```

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        cout << "Lan thu " << i << endl;
        i++; // Tăng i để tránh lặp vô hạn
    }
    return 0;
}
```

**Kết quả:**

```
Lan thu 1
Lan thu 2
Lan thu 3
Lan thu 4
Lan thu 5
```

-   Nếu quên `i++`, vòng lặp sẽ chạy vô hạn (infinite loop).

---

### 3. Vòng lặp `do-while`

-   **Ý nghĩa**: Tương tự `while`, nhưng kiểm tra điều kiện **sau** khi thực hiện khối mã, đảm bảo khối mã chạy ít nhất một lần.
-   **Cú pháp:**

```cpp
do {
    // Khối mã thực hiện trong mỗi lần lặp
} while (điều_kiện);
```

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << "Lan thu " << i << endl;
        i++;
    } while (i <= 5);
    return 0;
}
```

**Kết quả:**

```
Lan thu 1
Lan thu 2
Lan thu 3
Lan thu 4
Lan thu 5
```

-   Khác với `while`, nếu `i = 6` ban đầu, `do-while` vẫn chạy một lần trước khi dừng.

---

### 4. Vòng lặp lồng nhau (Nested Loops)

-   **Ý nghĩa**: Đặt một vòng lặp bên trong vòng lặp khác để xử lý các bài toán phức tạp (VD: in bảng cửu chương).
-   **Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 2; j++) {
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    return 0;
}
```

**Kết quả:**

```
i = 1, j = 1
i = 1, j = 2
i = 2, j = 1
i = 2, j = 2
i = 3, j = 1
i = 3, j = 2
```

-   Vòng lặp bên trong (`j`) chạy hết trước khi vòng ngoài (`i`) tăng.

---

### 5. Điều khiển vòng lặp

-   **`break`**: Thoát hoàn toàn khỏi vòng lặp.
-   **`continue`**: Bỏ qua phần còn lại của lần lặp hiện tại, chuyển sang lần lặp tiếp theo.

**Ví dụ với `break`:**

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break; // Thoát khi i = 3
        }
        cout << "Lan thu " << i << endl;
    }
    return 0;
}
```

**Kết quả:**

```
Lan thu 1
Lan thu 2
```

**Ví dụ với `continue`:**

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Bỏ qua i = 3
        }
        cout << "Lan thu " << i << endl;
    }
    return 0;
}
```

**Kết quả:**

```
Lan thu 1
Lan thu 2
Lan thu 4
Lan thu 5
```

---

### 6. Chương trình thực tế: In bảng cửu chương

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so de in bang cuu chuong: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
```

**Kết quả (ví dụ):**

```
Nhap so de in bang cuu chuong: 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
```

---

### Lưu ý khi sử dụng vòng lặp

-   Đảm bảo điều kiện dừng để tránh lặp vô hạn.
-   Với `for`, biến đếm thường được khai báo trong vòng lặp (VD: `int i`).
-   Chọn loại vòng lặp phù hợp:
    -   `for`: Khi biết số lần lặp.
    -   `while`: Khi số lần lặp phụ thuộc vào điều kiện.
    -   `do-while`: Khi cần chạy ít nhất một lần.
