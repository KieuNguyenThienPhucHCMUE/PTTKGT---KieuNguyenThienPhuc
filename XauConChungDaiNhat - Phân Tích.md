# Phân tích thuật toán Xâu con chung dài nhất


**Ý tưởng:** Áp dụng công thức truy hồi cho bài toán sau đó thực hiện truy vết để in ra xâu con chung

**Các bước thực hiện:**

**Bước 1:** Áp dụng công thức truy hồi như sau:

Nếu A[i] == B[j] thì L[i][j] = L[i-1][j-1] + 1
Ngược lại thì L[i][j] = max (L[i-1][j], L[i][j-1])

**Bước 2:** Để truy vết ban đầu gắn biến tv = 0, duyệt bảng bên trên đến vị trí nào mà có L[i][j] > tv thì tức là tại đó sẽ có ký tự chung, ta in ra ký tự đó và gắn lại biến tv = L[i][j]…thực hiện lặp cho đến khi hết mảng L.


**Hướng dẫn thực thi chương trình:** 

INPUT:

Dòng 1: Xâu A

Dòng 2: Xâu B



OUPUT:

Dòng 1: Xâu con dài nhất

**Mẫu ví dụ:**

INPUT:

BACDB

BDCB

OUTPUT:

BCB
