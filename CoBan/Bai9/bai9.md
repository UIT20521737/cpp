### Mảng (Array) trong C++

**Mảng** (array) là một tập hợp các phần tử cùng kiểu dữ liệu, được lưu trữ liên tục trong bộ nhớ và truy cập bằng chỉ số (index). Mảng giúp quản lý nhiều giá trị cùng lúc một cách hiệu quả.

---

### 1. Khái niệm cơ bản

-   Mỗi phần tử trong mảng có một **chỉ số** (bắt đầu từ 0).
-   Kích thước mảng phải được xác định khi khai báo và không thay đổi được trong C++ cơ bản.
-   Mảng thường dùng để lưu danh sách, bảng dữ liệu (VD: điểm số, tên học sinh).

---

### 2. Khai báo mảng

**Cú pháp:**

```cpp
kiểu_dữ_liệu tên_mảng[kích_thước];
```

-   `kiểu_dữ_liệu`: Kiểu của các phần tử (VD: `int`, `float`, `char`).
-   `tên_mảng`: Tên do bạn đặt.
-   `kích_thước`: Số phần tử tối đa (phải là hằng số khi khai báo).

**Ví dụ:**

```cpp
int mang[5]; // Mảng 5 phần tử kiểu int
```

#### Khởi tạo giá trị

-   Có thể gán giá trị ngay khi khai báo:

```cpp
int mang[5] = {1, 2, 3, 4, 5};
```

-   Nếu không gán đủ, các phần tử còn lại mặc định là 0:

```cpp
int mang[5] = {1, 2}; // mang = {1, 2, 0, 0, 0}
```

---

### 3. Truy cập phần tử trong mảng

-   Dùng chỉ số trong dấu `[]` để truy cập hoặc thay đổi giá trị.
-   Chỉ số bắt đầu từ **0** và kết thúc ở **kích_thước - 1**.

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int mang[5] = {10, 20, 30, 40, 50};
    cout << "Phan tu thu 0: " << mang[0] << endl; // 10
    cout << "Phan tu thu 2: " << mang[2] << endl; // 30

    mang[1] = 25; // Thay đổi giá trị
    cout << "Phan tu thu 1 sau khi thay doi: " << mang[1] << endl; // 25
    system("pause");
    return 0;
}
```

---

### 4. Duyệt mảng bằng vòng lặp

-   Thường dùng vòng lặp `for` để truy cập từng phần tử.

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int mang[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << "Phan tu " << i << ": " << mang[i] << endl;
    }
    return 0;
}
```

**Kết quả:**

```
Phan tu 0: 1
Phan tu 1: 2
Phan tu 2: 3
Phan tu 3: 4
Phan tu 4: 5
```

---

### 5. Mảng và nhập/xuất dữ liệu

-   Kết hợp `cin` và `cout` để nhập/xuất dữ liệu cho mảng.

**Ví dụ:**

```cpp
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
    return 0;
}
```

**Kết quả (ví dụ):**

```
Nhap 3 so nguyen:
Phan tu 0: 5
Phan tu 1: 10
Phan tu 2: 15
Cac phan tu trong mang:
5 10 15
```

---

### 6. Mảng đa chiều (Multi-dimensional Array)

-   Mảng 2 chiều (2D array) thường dùng để biểu diễn bảng hoặc ma trận.
-   **Cú pháp:**

```cpp
kiểu_dữ_liệu tên_mảng[số_hàng][số_cột];
```

**Ví dụ: Mảng 2 chiều**

```cpp
#include <iostream>
using namespace std;

int main() {
    int mang_2d[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mang_2d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

**Kết quả:**

```
1 2 3
4 5 6
```

-   `mang_2d[0][1]` truy cập phần tử hàng 0, cột 1 (giá trị 2).

---

### 7. Một số lưu ý

-   **Giới hạn chỉ số**: Truy cập ngoài kích thước mảng (VD: `mang[5]` trong mảng 5 phần tử) gây lỗi không xác định (undefined behavior).
-   **Kích thước cố định**: Trong C++ cơ bản, kích thước mảng phải là hằng số khi khai báo. Để dùng mảng động, bạn cần con trỏ hoặc `std::vector` (phần nâng cao).
-   **Khởi tạo**: Nếu không khởi tạo, giá trị trong mảng sẽ là "rác" (garbage value).

---

### 8. Chương trình thực tế: Tính tổng mảng

```cpp
#include <iostream>
using namespace std;

int main() {
    int mang[5];
    int tong = 0;

    cout << "Nhap 5 so nguyen:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Phan tu " << i << ": ";
        cin >> mang[i];
        tong += mang[i];
    }

    cout << "Tong cac phan tu: " << tong << endl;
    return 0;
}
```

**Kết quả (ví dụ):**

```
Nhap 5 so nguyen:
Phan tu 0: 1
Phan tu 1: 2
Phan tu 2: 3
Phan tu 3: 4
Phan tu 4: 5
Tong cac phan tu: 15
```

---

Bạn có muốn tôi giải thích thêm về mảng đa chiều, cách xử lý lỗi khi truy cập mảng, hay giúp bạn viết một chương trình cụ thể với mảng không? Hãy cho tôi biết nhé!
