### 4 Kiểu dữ liệu chính trong C++

Trong C++, kiểu dữ liệu xác định loại giá trị mà một biến có thể lưu trữ và cách nó được xử lý. Dưới đây là 4 kiểu dữ liệu cơ bản thường được giới thiệu cho người mới học:

#### 1. `int` (Integer - Số nguyên)

-   **Ý nghĩa**: Lưu trữ các số nguyên không có phần thập phân (cả âm và dương).
-   **Kích thước**: Thường là 4 byte (32-bit), phụ thuộc vào hệ điều hành và trình biên dịch.
-   **Phạm vi**: -2,147,483,648 đến 2,147,483,647 (với 4 byte).
-   **Ví dụ**: 5, -10, 100.

**Ví dụ sử dụng:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int tuoi = 25;
    cout << "Tuoi: " << tuoi << endl; // 25
    return 0;
}
```

#### 2. `float` (Floating-point - Số thực)

-   **Ý nghĩa**: Lưu trữ các số thực có phần thập phân với độ chính xác đơn (single precision).
-   **Kích thước**: 4 byte.
-   **Phạm vi**: Khoảng ±3.4 × 10⁻³⁸ đến ±3.4 × 10³⁸ (7 chữ số thập phân chính xác).
-   **Ví dụ**: 3.14, -0.5, 1.75.

**Ví dụ sử dụng:**

```cpp
#include <iostream>
using namespace std;

int main() {
    float chieu_cao = 1.75;
    cout << "Chieu cao: " << chieu_cao << endl; // 1.75
    return 0;
}
```

#### 3. `char` (Character - Ký tự)

-   **Ý nghĩa**: Lưu trữ một ký tự đơn (chữ cái, số, ký hiệu) được biểu diễn bằng mã ASCII.
-   **Kích thước**: 1 byte.
-   **Phạm vi**: -128 đến 127 (hoặc 0 đến 255 nếu dùng `unsigned char`).
-   **Ví dụ**: 'a', 'B', '5' (dùng nháy đơn `''`).

**Ví dụ sử dụng:**

```cpp
#include <iostream>
using namespace std;

int main() {
    char gioi_tinh = 'M'; // 'M' là ký tự cho Nam
    cout << "Gioi tinh: " << gioi_tinh << endl; // M
    return 0;
}
```

#### 4. `bool` (Boolean - Logic)

-   **Ý nghĩa**: Lưu trữ giá trị logic, chỉ có hai trạng thái: `true` (1) hoặc `false` (0).
-   **Kích thước**: 1 byte (dù chỉ cần 1 bit để biểu diễn).
-   **Ví dụ**: `true`, `false`.

**Ví dụ sử dụng:**

```cpp
#include <iostream>
using namespace std;

int main() {
    bool da_ket_hon = false;
    cout << "Da ket hon: " << da_ket_hon << endl; // 0 (false)
    return 0;
}
```

---

### So sánh ngắn gọn

| **Kiểu dữ liệu** | **Mục đích**  | **Kích thước** | **Ví dụ giá trị** |
| ---------------- | ------------- | -------------- | ----------------- |
| `int`            | Số nguyên     | 4 byte         | 25, -10           |
| `float`          | Số thực       | 4 byte         | 3.14, 1.75        |
| `char`           | Ký tự         | 1 byte         | 'a', 'M'          |
| `bool`           | Giá trị logic | 1 byte         | true, false       |

---

### Mở rộng: Một số kiểu dữ liệu khác

Ngoài 4 kiểu chính trên, C++ còn có:

-   **`double`**: Số thực với độ chính xác cao hơn `float` (8 byte, chính xác 15-16 chữ số thập phân).
-   **`string`**: Không phải kiểu cơ bản, mà là lớp trong thư viện `<string>`, dùng để lưu chuỗi ký tự (VD: "Xin chao").

**Ví dụ với `double` và `string`:**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    double pi = 3.14159265359;
    string ten = "Nguyen Van A";
    cout << "Pi: " << pi << endl;        // 3.14159...
    cout << "Ten: " << ten << endl;      // Nguyen Van A
    return 0;
}
```

---

### Lưu ý khi sử dụng kiểu dữ liệu

1. **Khởi tạo giá trị**: Nên gán giá trị ban đầu để tránh "giá trị rác".
    - VD: `int a = 0;` thay vì chỉ `int a;`.
2. **Phù hợp với nhu cầu**: Chọn kiểu dữ liệu đúng với dữ liệu bạn muốn lưu (VD: dùng `float` cho số thập phân, `int` cho số nguyên).
3. **Ép kiểu**: Có thể chuyển đổi giữa các kiểu khi cần (VD: từ `int` sang `float`).
