### Hàm trong C++

**Hàm** (function) là một khối mã thực hiện một nhiệm vụ cụ thể, có thể được gọi nhiều lần trong chương trình. Hàm giúp:

-   Tái sử dụng mã (không phải viết lại nhiều lần).
-   Tổ chức chương trình rõ ràng hơn.
-   Chia nhỏ bài toán thành các phần dễ quản lý.

Trong C++, mọi chương trình đều phải có ít nhất một hàm là `main()`, nhưng bạn có thể tự định nghĩa thêm các hàm khác.

---

### 1. Cấu trúc cơ bản của hàm

**Cú pháp:**

```cpp
kiểu_trả_về tên_hàm(đối_số) {
    // Khối mã thực hiện nhiệm vụ
    return giá_trị; // Nếu có kiểu trả về
}
```

-   `kiểu_trả_về`: Kiểu dữ liệu của giá trị hàm trả về (VD: `int`, `float`, `void` nếu không trả về gì).
-   `tên_hàm`: Tên do bạn đặt, tuân theo quy tắc đặt tên biến.
-   `đối_số`: Các tham số (parameters) truyền vào hàm (có thể không có).
-   `return`: Trả về giá trị (nếu cần).

---

### 2. Hàm không trả về (`void`)

-   Dùng khi hàm chỉ thực hiện hành động mà không cần trả kết quả.

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

void chao() {
    cout << "Xin chao, ban khoe khong?" << endl;
}

int main() {
    chao(); // Gọi hàm
    system("pause");
    return 0;
}
```

**Kết quả:**

```
Xin chao, ban khoe khong?
```

---

### 3. Hàm có trả về

-   Trả về một giá trị để sử dụng ở nơi gọi hàm.

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

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
```

---

### 4. Hàm với tham số

-   Tham số (parameters) là các biến được truyền vào hàm để xử lý.

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

void in_thong_tin(string ten, int tuoi) {
    cout << "Ten: " << ten << ", Tuoi: " << tuoi << endl;
}

int main() {
    in_thong_tin("Nguyen Van A", 25); // Truyền đối số
    system("pause");
    return 0;
}
```

**Kết quả:**

```
Ten: Nguyen Van A, Tuoi: 25
```

---

### 5. Tham số mặc định (Default Parameters)

-   Bạn có thể gán giá trị mặc định cho tham số, nếu không truyền đối số thì giá trị mặc định được dùng.

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

void chao(string ten = "Ban") {
    cout << "Xin chao, " << ten << "!" << endl;
}

int main() {
    chao("Nam"); // Truyền đối số
    chao();      // Dùng giá trị mặc định
    system("pause");
    return 0;
}
```

**Kết quả:**

```
Xin chao, Nam!
Xin chao, Ban!
```

---

### 6. Truyền tham số theo tham chiếu (Pass by Reference)

-   Thay vì truyền giá trị (pass by value), bạn có thể truyền tham chiếu (`&`) để thay đổi trực tiếp biến gốc.

**Ví dụ:**

```cpp
#include <iostream>
using namespace std;

void tang(int &x) {
    x += 1; // Thay đổi trực tiếp biến gốc
}

int main() {
    int a = 5;
    cout << "Truoc: " << a << endl; // 5
    tang(a);
    cout << "Sau: " << a << endl;   // 6
    system("pause");
    return 0;
}
```

---

### 7. Hàm đệ quy (Recursion)

-   Hàm tự gọi chính nó để giải quyết bài toán.

**Ví dụ: Tính giai thừa**

```cpp
#include <iostream>
using namespace std;

int giai_thua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * giai_thua(n - 1); // Gọi lại chính nó
}

int main() {
    int n = 5;
    cout << "Giai thua cua " << n << " la: " << giai_thua(n) << endl; // 120
    system("pause");
    return 0;
}
```

-   `5! = 5 * 4 * 3 * 2 * 1 = 120`.

---

### 8. Chương trình tổng hợp

```cpp
#include <iostream>
using namespace std;

float dien_tich(float dai, float rong) {
    return dai * rong;
}

void kiem_tra_chan_le(int so) {
    if (so % 2 == 0) {
        cout << so << " la so chan" << endl;
    } else {
        cout << so << " la so le" << endl;
    }
}

int main() {
    float d = 5.5, r = 3.2;
    cout << "Dien tich: " << dien_tich(d, r) << endl; // 17.6

    int n = 7;
    kiem_tra_chan_le(n); // 7 la so le
    system("pause");
    return 0;
}
```

**Kết quả:**

```
Dien tich: 17.6
7 la so le
```

---

### Lưu ý khi sử dụng hàm

-   Định nghĩa hàm trước khi gọi, hoặc khai báo (prototype) ở đầu chương trình:

    ```cpp
    int cong(int a, int b); // Khai báo
    int main() {
        cout << cong(2, 3) << endl;
        system("pause");
        return 0;
    }
    int cong(int a, int b) { return a + b; } // Định nghĩa
    ```

-   Tránh lạm dụng hàm đệ quy vì có thể gây tràn bộ nhớ (stack overflow) với số lớn.
-   Đặt tên hàm rõ ràng, mô tả chức năng (VD: `cong`, `in_thong_tin`).
