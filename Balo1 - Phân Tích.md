# Phân tích bài toán balo1

**Ý tưởng:** Có một tập hợp các phần tử , mỗi phần tử có trọng lượng khác nhau, bỏ lần lượt các món đồ vào túi bằng phương pháp quy hoạch động sao cho tối ưu nhất.

**Các bước thực hiện:**

**Bước 1:** Gọi F[i,j] là tổng giá trị lớn nhất của cái túi khi xét từ vật 1 đến vật i và trọng của cái túi chưa vượt quá j.

**Bước 2:** Áp dụng hệ thức truy hồi như sau:

F[0,j] = 0 (hiển nhiên) – Bài toán con nhỏ nhất.

F[i,j]= max(F[i-1,j], V[i]+F[i,j-W[i]]

**Bước 3:** Xuất ra trọng lượng tối đa có thể


**Độ phức tạp:**

Bài toán cái túi có thời gian tính là O(NL). Thời gian này phụ thuộc
tuyến tính vào dữ liệu vào L, nhưng nếu xét nó như hàm của độ dài dữ liệu
vào thì l=[log L] thì sự phụ thuộc này lại là hàm mũ.
Thuật toán làm việc hiệu quả khi L không qua lớn

**Hướng dẫn thực thi chương trình:** 

INPUT:

Dòng 1: n và W

n dòng tiếp theo: wi và vi tăng dần

OUPUT:

Dòng 1:Tổng giá trị lớn nhất các vật lấy được

**Mẫu ví dụ:**

INPUT:

3 50

10 60

20 100

30 120

OUTPUT:

220
