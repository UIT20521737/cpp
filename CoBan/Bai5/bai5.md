### Toán tử trong C++

**Toán tử** (operators) là các ký hiệu hoặc từ khóa dùng để thực hiện các phép tính hoặc thao tác trên dữ liệu (gọi là **toán hạng** - operands). Trong C++, toán tử rất đa dạng và được chia thành nhiều loại dựa trên chức năng.

---

### 1. Toán tử số học (Arithmetic Operators)

Dùng để thực hiện các phép tính toán học cơ bản.

| **Toán tử** | **Ý nghĩa** | **Ví dụ** | **Kết quả**   |
| ----------- | ----------- | --------- | ------------- |
| `+`         | Cộng        | `5 + 3`   | 8             |
| `-`         | Trừ         | `5 - 3`   | 2             |
| `*`         | Nhân        | `5 * 3`   | 15            |
| `/`         | Chia        | `5 / 2`   | 2 (số nguyên) |
| `%`         | Chia lấy dư | `5 % 2`   | 1             |

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;
    cout << "Cong: " << a + b << endl;  // 13
    cout << "Tru: " << a - b << endl;   // 7
    cout << "Nhan: " << a * b << endl;  // 30
    cout << "Chia: " << a / b << endl;  // 3 (số nguyên)
    cout << "Du: " << a % b << endl;    // 1
    return 0;
}
```

**Lưu ý:**

-   Khi chia hai số nguyên (`/`), kết quả là số nguyên (phần thập phân bị cắt bỏ).
-   Để có kết quả thập phân, ít nhất một toán hạng phải là `float` hoặc `double`.

---

### 2. Toán tử gán (Assignment Operators)

Dùng để gán giá trị cho biến.

| **Toán tử** | **Ý nghĩa**        | **Ví dụ** | **Kết quả** |
| ----------- | ------------------ | --------- | ----------- |
| `=`         | Gán giá trị        | `a = 5`   | a = 5       |
| `+=`        | Cộng và gán        | `a += 3`  | a = a + 3   |
| `-=`        | Trừ và gán         | `a -= 2`  | a = a - 2   |
| `*=`        | Nhân và gán        | `a *= 4`  | a = a \* 4  |
| `/=`        | Chia và gán        | `a /= 2`  | a = a / 2   |
| `%=`        | Chia lấy dư và gán | `a %= 3`  | a = a % 3   |

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    a += 5; // a = a + 5
    cout << "a sau khi += 5: " << a << endl; // 15
    a *= 2; // a = a * 2
    cout << "a sau khi *= 2: " << a << endl; // 30
    return 0;
}
```

---

### 3. Toán tử so sánh (Relational Operators)

Dùng để so sánh hai giá trị, trả về `true` (1) hoặc `false` (0).

| **Toán tử** | **Ý nghĩa**       | **Ví dụ** | **Kết quả** |
| ----------- | ----------------- | --------- | ----------- |
| `==`        | Bằng              | `5 == 5`  | true        |
| `!=`        | Không bằng        | `5 != 3`  | true        |
| `>`         | Lớn hơn           | `5 > 3`   | true        |
| `<`         | Nhỏ hơn           | `5 < 3`   | false       |
| `>=`        | Lớn hơn hoặc bằng | `5 >= 5`  | true        |
| `<=`        | Nhỏ hơn hoặc bằng | `5 <= 3`  | false       |

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    cout << "a > b: " << (a > b) << endl;   // 1 (true)
    cout << "a == b: " << (a == b) << endl; // 0 (false)
    cout << "a != b: " << (a != b) << endl; // 1 (true)
    return 0;
}
```

---

### 4. Toán tử logic (Logical Operators)

Dùng để kết hợp các biểu thức logic.

| **Toán tử** | **Ý nghĩa**    | **Ví dụ**         | **Kết quả** |
| ----------- | -------------- | ----------------- | ----------- |
| `&&`        | Và (AND)       | `true && false`   | false       |
| `\|\|`      | Hoặc (OR)      | `true \|\| false` | true        |
| `!`         | Phủ định (NOT) | `!true`           | false       |

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    bool ket_qua = (a > 0 && b < 10); // Cả hai đều đúng
    cout << "a > 0 && b < 10: " << ket_qua << endl; // 1 (true)

    ket_qua = (a < 0 || b > 0); // Một trong hai đúng
    cout << "a < 0 || b > 0: " << ket_qua << endl;  // 1 (true)

    cout << "!true: " << !true << endl; // 0 (false)
    return 0;
}
```

---

### 5. Toán tử tăng/giảm (Increment/Decrement Operators)

Dùng để tăng hoặc giảm giá trị của biến lên 1.

| **Toán tử** | **Ý nghĩa** | **Ví dụ**        | **Kết quả** |
| ----------- | ----------- | ---------------- | ----------- |
| `++`        | Tăng 1      | `a++` hoặc `++a` | a = a + 1   |
| `--`        | Giảm 1      | `a--` hoặc `--a` | a = a - 1   |

-   `++a` (tiền tố): Tăng trước, rồi dùng giá trị.
-   `a++` (hậu tố): Dùng giá trị, rồi tăng.

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    cout << "a ban dau: " << a << endl;    // 5
    cout << "++a: " << ++a << endl;        // 6 (tăng trước)
    cout << "a++: " << a++ << endl;        // 6 (in trước, tăng sau)
    cout << "a sau a++: " << a << endl;    // 7
    return 0;
}
```

---

### 6. Toán tử bitwise (ít dùng cho người mới)

Dùng để thao tác trên các bit của số nhị phân (VD: `&`, `|`, `^`, `~`, `<<`, `>>`). Phần này có thể bỏ qua nếu bạn mới học.

---

### Chương trình tổng hợp

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;
    cout << "a + b = " << a + b << endl;          // 13
    cout << "a % b = " << a % b << endl;          // 1
    cout << "a > b: " << (a > b) << endl;         // 1
    cout << "a >= 5 && b < 10: " << (a >= 5 && b < 10) << endl; // 1
    a += 2;
    cout << "a sau += 2: " << a << endl;          // 12
    return 0;
}
```
