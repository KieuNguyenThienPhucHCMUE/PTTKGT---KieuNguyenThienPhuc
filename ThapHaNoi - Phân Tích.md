# Phân tích bài toán Tháp Hà Nội

**Ý tưởng:** Có 3 cái cọc và 1 số đĩa có kích thước khác nhau,di chuyển qua cột trung gian, sau đó chuyển qua cột đích

**Các bước thực hiện:**

**Bước 1:** Đầu tiên ta lấy cột C làm cọc trung gian. Chuyển n-1 chiếc đĩa sang cột B.

**Bước 2:** Ta chuyển chiếc đĩa lớn nhất sang cột C

**Bước 3:** Lấy cột A làm cột trung gian chuyển n-1 chiếc đĩa từ cột B sang cột C

**Độ phức tạp:** Bài toán tháp Hà Nội với n đĩa thì có ít nhất 2^n – 1 bước thực hiện. Với ví dụ trên là 3 đĩa thì số bước giải ít nhất là 2^3-1=7 cách giải. 

**=> O(2^n)**
