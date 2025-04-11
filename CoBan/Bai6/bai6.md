### Câu lệnh điều kiện trong C++

**Câu lệnh điều kiện** (conditional statements) được sử dụng để kiểm tra một điều kiện và thực hiện các hành động khác nhau dựa trên kết quả của điều kiện đó (đúng hoặc sai). Trong C++, các câu lệnh điều kiện phổ biến nhất là `if`, `if-else`, và `switch`.

---

### 1. Câu lệnh `if`

-   **Ý nghĩa**: Kiểm tra một điều kiện, nếu đúng (`true`) thì thực hiện khối mã bên trong.
-   **Cú pháp:**

```cpp
if (điều_kiện) {
    // Khối mã thực hiện nếu điều kiện đúng
}
```

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int tuoi = 20;
    if (tuoi >= 18) {
        cout << "Ban da du tuoi thanh nien!" << endl;
    }
    return 0;
}
```

**Kết quả:**

```
Ban da du tuoi thanh nien!
```

-   `tuoi >= 18` là điều kiện, nếu đúng thì in thông báo.

---

### 2. Câu lệnh `if-else`

-   **Ý nghĩa**: Nếu điều kiện đúng thì thực hiện khối mã trong `if`, nếu sai thì thực hiện khối mã trong `else`.
-   **Cú pháp:**

```cpp
if (điều_kiện) {
    // Thực hiện nếu điều kiện đúng
} else {
    // Thực hiện nếu điều kiện sai
}
```

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int tuoi;
    cout << "Nhap tuoi cua ban: ";
    cin >> tuoi;

    if (tuoi >= 18) {
        cout << "Ban da du tuoi thanh nien!" << endl;
    } else {
        cout << "Ban van con la tre em!" << endl;
    }
    return 0;
}
```

**Kết quả (ví dụ):**

```
Nhap tuoi cua ban: 15
Ban van con la tre em!
```

---

### 3. Câu lệnh `if-else if-else` (Điều kiện lồng nhau)

-   **Ý nghĩa**: Kiểm tra nhiều điều kiện liên tiếp, chỉ thực hiện khối mã của điều kiện đúng đầu tiên, nếu không điều kiện nào đúng thì chạy `else`.
-   **Cú pháp:**

```cpp
if (điều_kiện_1) {
    // Thực hiện nếu điều kiện 1 đúng
} else if (điều_kiện_2) {
    // Thực hiện nếu điều kiện 2 đúng
} else {
    // Thực hiện nếu không điều kiện nào đúng
}
```

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int diem;
    cout << "Nhap diem cua ban: ";
    cin >> diem;

    if (diem >= 90) {
        cout << "Xuat sac!" << endl;
    } else if (diem >= 75) {
        cout << "Gioi!" << endl;
    } else if (diem >= 60) {
        cout << "Kha!" << endl;
    } else {
        cout << "Truot!" << endl;
    }
    return 0;
}
```

**Kết quả (ví dụ):**

```
Nhap diem cua ban: 85
Gioi!
```

---

### 4. Câu lệnh `switch`

-   **Ý nghĩa**: Dùng để kiểm tra giá trị của một biến và thực hiện hành động tương ứng với từng giá trị cụ thể (thường dùng với số nguyên hoặc ký tự).
-   **Cú pháp:**

```cpp
switch (biến) {
    case giá_trị_1:
        // Thực hiện nếu biến == giá_trị_1
        break;
    case giá_trị_2:
        // Thực hiện nếu biến == giá_trị_2
        break;
    default:
        // Thực hiện nếu không khớp giá trị nào
}
```

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int ngay;
    cout << "Nhap so tu 1 den 7 de kiem tra ngay trong tuan: ";
    cin >> ngay;

    switch (ngay) {
        case 1:
            cout << "Thu Hai" << endl;
            break;
        case 2:
            cout << "Thu Ba" << endl;
            break;
        case 3:
            cout << "Thu Tu" << endl;
            break;
        default:
            cout << "So khong hop le!" << endl;
    }
    return 0;
}
```

**Kết quả (ví dụ):**

```
Nhap so tu 1 den 7 de kiem tra ngay trong tuan: 2
Thu Ba
```

-   `break`: Ngắt câu lệnh `switch` sau khi thực hiện một `case`, tránh chạy tiếp các `case` phía dưới.
-   `default`: Xử lý khi không có `case` nào khớp.

---

### 5. Điều kiện lồng nhau (Nested if)

-   **Ý nghĩa**: Đặt một câu lệnh `if` bên trong một `if` khác để kiểm tra nhiều điều kiện phức tạp.
-   **Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int tuoi;
    bool co_viec_lam;

    cout << "Nhap tuoi cua ban: ";
    cin >> tuoi;
    cout << "Ban co viec lam khong? (1 = co, 0 = khong): ";
    cin >> co_viec_lam;

    if (tuoi >= 18) {
        if (co_viec_lam) {
            cout << "Ban la nguoi tru cot gia dinh!" << endl;
        } else {
            cout << "Ban nen tim viec lam!" << endl;
        }
    } else {
        cout << "Ban van con la hoc sinh!" << endl;
    }
    return 0;
}
```

**Kết quả (ví dụ):**

```
Nhap tuoi cua ban: 25
Ban co viec lam khong? (1 = co, 0 = khong): 1
Ban la nguoi tru cot gia dinh!
```

---

### 6. Toán tử ba ngôi (Ternary Operator)

-   **Ý nghĩa**: Một cách viết gọn thay cho `if-else` đơn giản.
-   **Cú pháp:**

```cpp
điều_kiện ? giá_trị_nếu_đúng : giá_trị_nếu_sai;
```

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int tuoi = 20;
    string ket_qua = (tuoi >= 18) ? "Thanh nien" : "Tre em";
    cout << "Ban la: " << ket_qua << endl;
    return 0;
}
```

**Kết quả:**

```
Ban la: Thanh nien
```

---

### Lưu ý khi sử dụng câu lệnh điều kiện

-   Luôn kiểm tra điều kiện cẩn thận để tránh lỗi logic.
-   Dùng `{}` để nhóm các câu lệnh trong khối `if`, `else` nếu có nhiều hơn một dòng.
-   Với `switch`, nhớ thêm `break` để tránh "rơi qua" (fall-through).
