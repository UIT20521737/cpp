### Biến và Kiểu dữ liệu trong C++

#### 1. Biến là gì?

-   **Biến** (variable) là một tên được đặt để đại diện cho một vùng nhớ trong máy tính, nơi lưu trữ dữ liệu.
-   Trong C++, bạn phải **khai báo biến** trước khi sử dụng, bao gồm kiểu dữ liệu và tên biến.
-   Ví dụ: `int tuoi = 25;` khai báo một biến tên `tuoi`, kiểu số nguyên, có giá trị là 25.

#### 2. Kiểu dữ liệu cơ bản

C++ cung cấp nhiều kiểu dữ liệu để lưu trữ các loại giá trị khác nhau. Dưới đây là các kiểu cơ bản:

| **Kiểu dữ liệu** | **Ý nghĩa**                 | **Kích thước (byte)** | **Ví dụ**       |
| ---------------- | --------------------------- | --------------------- | --------------- |
| `int`            | Số nguyên                   | 4 (32-bit)            | 5, -10, 100     |
| `float`          | Số thực (có phần thập phân) | 4                     | 3.14, -0.5      |
| `double`         | Số thực chính xác cao       | 8                     | 3.14159, 0.0001 |
| `char`           | Ký tự đơn                   | 1                     | 'a', 'B', '5'   |
| `bool`           | Giá trị logic               | 1                     | true, false     |

-   **Kích thước** có thể thay đổi tùy thuộc vào hệ điều hành và trình biên dịch (32-bit hay 64-bit).
-   Ngoài ra, bạn có thể thêm tiền tố để mở rộng kiểu dữ liệu:
    -   `unsigned int`: Chỉ lưu số nguyên không âm (VD: 0 đến 4,294,967,295 với 4 byte).
    -   `long int`: Số nguyên lớn hơn (thường 8 byte).
    -   `short int`: Số nguyên nhỏ hơn (thường 2 byte).

#### 3. Khai báo biến

Cú pháp:  
`kiểu_dữ_liệu tên_biến = giá_trị;`

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int tuoi = 25;           // Số nguyên
    float chieu_cao = 1.75;  // Số thực
    char gioi_tinh = 'M';    // Ký tự (dùng nháy đơn '')
    bool da_ket_hon = false; // Logic

    cout << "Tuoi: " << tuoi << endl;
    cout << "Chieu cao: " << chieu_cao << endl;
    cout << "Gioi tinh: " << gioi_tinh << endl;
    cout << "Da ket hon: " << da_ket_hon << endl;

    return 0;
}
```

**Kết quả:**

```
Tuoi: 25
Chieu cao: 1.75
Gioi tinh: M
Da ket hon: 0  // false hiển thị là 0, true là 1
```

-   Bạn cũng có thể khai báo biến mà không gán giá trị ban đầu:  
    `int tuoi;` (giá trị mặc định sẽ là rác - garbage value - nếu không khởi tạo).

#### 4. Quy tắc đặt tên biến

-   Tên biến phải bắt đầu bằng chữ cái hoặc dấu gạch dưới `_`.
-   Chỉ chứa chữ cái, số, và dấu `_` (không dùng ký tự đặc biệt như @, #).
-   Phân biệt hoa/thường: `tuoi` khác `Tuoi`.
-   Không trùng với từ khóa của C++ (như `int`, `if`, `return`).
-   Nên đặt tên có ý nghĩa: `tuoi` thay vì `x`.

#### 5. Chuỗi (String)

-   Chuỗi không phải là kiểu dữ liệu cơ bản mà được cung cấp qua thư viện `<string>`.
-   Dùng để lưu trữ nhiều ký tự (VD: "Xin chao").

**Ví dụ:**

```cpp
#include <iostream>
#include <string> // Thư viện cho string
using namespace std;

int main() {
    string ten = "Nguyen Van A"; // Chuỗi ký tự (dùng nháy kép "")
    cout << "Ten: " << ten << endl;
    return 0;
}
```

#### 6. Phạm vi của biến (Scope)

-   **Biến cục bộ**: Chỉ tồn tại trong khối mã `{}` nơi nó được khai báo.
-   **Biến toàn cục**: Khai báo ngoài hàm, tồn tại suốt chương trình.

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int bien_toan_cuc = 100; // Biến toàn cục

int main() {
    int bien_cuc_bo = 50; // Biến cục bộ
    cout << "Bien toan cuc: " << bien_toan_cuc << endl;
    cout << "Bien cuc bo: " << bien_cuc_bo << endl;
    return 0;
}
```

-   `bien_cuc_bo` chỉ dùng được trong `main()`, còn `bien_toan_cuc` dùng được ở mọi nơi.

#### 7. Ép kiểu (Type Casting)

Đôi khi bạn cần chuyển đổi giữa các kiểu dữ liệu:

-   **Tự động**: C++ tự chuyển khi an toàn (VD: `int` sang `float`).
-   **Thủ công**: Dùng cú pháp `(kiểu_dữ_liệu)` hoặc hàm như `static_cast`.

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = (float)a / 3; // Ép kiểu int sang float
    cout << "Ket qua: " << b << endl; // 3.33333
    return 0;
}
```

-   Nếu không ép kiểu, `a / 3` sẽ cho kết quả là 3 (số nguyên).

---

### Lời khuyên

-   Chọn kiểu dữ liệu phù hợp với dữ liệu bạn muốn lưu để tiết kiệm bộ nhớ.
-   Khởi tạo biến ngay khi khai báo để tránh giá trị rác.
-   Thực hành nhiều để quen với cách sử dụng các kiểu dữ liệu.
