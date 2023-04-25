# Phân tích bài toán Balo2


**Ý tưởng:** Nhặt vật, bỏ vào túi sao cho tổng giá trị vào túi là lớn nhất, có thể bỏ trùng.

**Các bước thực hiện:**

**Bước 1:** Sử dụng mảng một chiều với ý nghĩa là tổng giá trị đá quý lớn nhất.

**Bước 2:** dp[i] = max(dp[i-w] + vi); với j:1 <= n && i >= wj, kết quả cuối cùng là dp[W]

**Bước 3:** Xuất ra trọng lượng tối đa có thể


**Độ phức tạp:**

Sử dụng một mảng chossen_times[i] là số lần được chọn của viên đá quý thứ i. Bắt đầu từ vị trí dp[W] trên bảng phương án. Duyệt qua từng viên đá quý. Làm đến W = 0 thì dừng nên giải thuật sẽ có độ phức tạp O (W x n)****


**Hướng dẫn thực thi chương trình:** 

INPUT:

Dòng 1: n và W

n dòng tiếp theo: wi và vi tăng dần

OUPUT:

Dòng 1:Tổng giá trị lớn nhất các vật lấy được

**Mẫu ví dụ:**

INPUT:

2 100
1 1
50 30


OUTPUT:

100
