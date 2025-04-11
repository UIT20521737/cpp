### Cấu trúc cơ bản của một chương trình C++

Mọi chương trình C++ đều có một cấu trúc nhất định để đảm bảo nó có thể được biên dịch và chạy thành công. Dưới đây là một ví dụ đơn giản và giải thích từng phần:

```cpp
#include <iostream> // Thư viện đầu vào/đầu ra
using namespace std; // Sử dụng không gian tên chuẩn

int main() { // Hàm chính của chương trình
    cout << "Xin chao, day la chuong trinh C++ dau tien!" << endl; // In ra màn hình
    return 0; // Kết thúc chương trình
}
```

Khi bạn chạy chương trình này, nó sẽ in ra màn hình dòng chữ:  
`Xin chao, day la chuong trinh C++ dau tien!`

---

### Giải thích từng thành phần

1. **`#include <iostream>`**

    - Đây là **chỉ thị tiền xử lý** (preprocessor directive), bắt đầu bằng dấu `#`.
    - Nó yêu cầu trình biên dịch bao gồm (include) thư viện `<iostream>` – một thư viện chuẩn của C++ dùng để xử lý **đầu vào (input)** và **đầu ra (output)**.
    - `<iostream>` cung cấp các đối tượng như:
        - `cout`: Để in dữ liệu ra màn hình.
        - `cin`: Để nhận dữ liệu từ bàn phím.
        - `endl`: Để xuống dòng.

2. **`using namespace std;`**

    - C++ sử dụng **không gian tên (namespace)** để tránh xung đột tên giữa các biến, hàm, hoặc lớp.
    - `std` là không gian tên chuẩn (standard namespace) chứa các thành phần của thư viện chuẩn như `cout`, `cin`.
    - Khi viết `using namespace std;`, bạn không cần phải thêm tiền tố `std::` trước mỗi lần sử dụng `cout` hay `cin`.
        - Ví dụ: Không có dòng này, bạn phải viết `std::cout` thay vì chỉ `cout`.
    - **Lưu ý**: Trong các dự án lớn, việc dùng `using namespace std;` không được khuyến khích vì có thể gây xung đột tên. Thay vào đó, bạn nên dùng `std::` khi cần.

3. **`int main() { ... }`**

    - Đây là **hàm chính (main function)** – điểm bắt đầu của mọi chương trình C++.
    - `int`: Kiểu trả về của hàm `main`, thường là một số nguyên để báo hiệu trạng thái kết thúc (0 nghĩa là thành công).
    - Dấu `{` và `}` bao quanh phần thân hàm, chứa các lệnh sẽ được thực thi.
    - Mọi chương trình C++ phải có ít nhất một hàm `main()` để trình biên dịch biết bắt đầu từ đâu.

4. **`cout << "Xin chao, day la chuong trinh C++ dau tien!" << endl;`**

    - `cout` là đối tượng trong `<iostream>` dùng để xuất dữ liệu ra màn hình.
    - `<<` là **toán tử chèn (insertion operator)**, đẩy dữ liệu từ phải sang trái (vào `cout`).
    - `"Xin chao, day la chuong trinh C++ dau tien!"` là chuỗi ký tự (string) được in ra.
    - `endl` thêm một ký tự xuống dòng (`\n`) và làm mới bộ đệm đầu ra (output buffer).
    - Dấu `;` kết thúc một câu lệnh trong C++.

5. **`return 0;`**
    - Lệnh này kết thúc hàm `main()` và trả về giá trị `0` cho hệ điều hành, báo hiệu chương trình đã chạy thành công.
    - Nếu có lỗi, bạn có thể trả về giá trị khác (thường là số khác 0) để báo hiệu vấn đề.

---

### Quy trình thực thi chương trình

1. **Viết mã nguồn**: Bạn viết mã trong file có đuôi `.cpp` (ví dụ: `hello.cpp`).
2. **Biên dịch (Compile)**: Trình biên dịch (như GCC) chuyển mã C++ thành mã máy (file thực thi, ví dụ: `.exe` trên Windows).
3. **Chạy chương trình**: File thực thi được chạy, và kết quả hiển thị trên màn hình.

---

### Ví dụ mở rộng

Dưới đây là một chương trình có thêm nhập liệu từ người dùng:

```cpp
#include <iostream>
using namespace std;

int main() {
    string ten; // Khai báo biến kiểu chuỗi
    cout << "Nhap ten cua ban: ";
    cin >> ten; // Nhận dữ liệu từ bàn phím
    cout << "Xin chao, " << ten << "!" << endl;
    return 0;
}
```

**Kết quả khi chạy:**

```
Nhap ten cua ban: Nam
Xin chao, Nam!
```

-   `string`: Kiểu dữ liệu chuỗi, cần thêm `#include <string>` nếu không dùng `using namespace std;`.
-   `cin >> ten`: Nhận dữ liệu từ bàn phím và lưu vào biến `ten`.

---

### Lưu ý quan trọng

-   Mọi câu lệnh trong C++ phải kết thúc bằng dấu `;`.
-   C++ phân biệt chữ hoa và chữ thường (case-sensitive), ví dụ: `Main` khác `main`.
-   Dấu `{}` dùng để nhóm các câu lệnh thành một khối (block).
