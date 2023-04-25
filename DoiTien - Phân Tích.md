# Phân tích bài toán DoiTien

# Phân tích bài toán balo1

**Ý tưởng:** Đổi tiền bằng thuật toán tham lam sao cho số tờ tiền là ít nhất. Lần lượt chia nhỏ số tiền ra cho các mệnh giá.

**Các bước thực hiện:**

**Bước 1:** Chia lấy dư tổng tiền cho mệnh giá lớn nhất.

**Bước 2:** Lấy tổng tiền trừ đi mệnh giá thứ nhất nhân với số tờ tiền.

**Bước 3:** Tiếp tục cho đến khi hết tiền.


**Độ phức tạp:**

T(1) = a

T(n) = T(n) + a

=> Độ phức tạp: O(n)

**Hướng dẫn thực thi chương trình:** 

INPUT:

Dòng 1: Nhập vào số tiền cần đổi.

n dòng tiếp theo: wi và vi tăng dần

OUPUT:

Dòng 1:Số tờ tiền cần sử dụng.

**Mẫu ví dụ:**

INPUT:

180000

OUTPUT:

1 to 100.000 + 1 to 50.000 + 1 to 20.000 + 1 to 10.000
