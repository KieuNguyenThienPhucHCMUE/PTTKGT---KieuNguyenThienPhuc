#Phân tích giải thuật Quick Sort
**Ý tưởng:** Chọn một phần tử trong mảng làm điểm đánh dấu (pivot) sau đó chia mảng chính thành các mảng con, di chuyển các phần tử nhỏ hơn pivot sang trái vị trí của pivot, di chuyển tất cả phần tử lớn hơn sang bên phải pivot

**Các bước thực hiện:**
**Bước 1:** Lấy phần tử chốt là phần tử ở cuối danh sách.
**Bước 2:** Chia mảng theo phần tử chốt.
**Bước 3:** Sử dụng sắp xếp nhanh một cách đệ qui với mảng con bên trái.
**Bước 4:** Sử dụng sắp xếp nhanh một cách đệ qui với mảng con bên phải.

**Độ phức tạp:**
**Phân đoạn không cân bằng:** không có phần nào cả, một bài toán con có kích thước n-1 và bài toán kia có kích thước là 0. Đó là trường hợp xấu nhất xảy ra khi dãy đã cho là dãy đã được sắp xếp và phần tử chốt được chọn là phần tử đầu của dãy **=> độ phức tạp thuật toán sẽ là O(n^2)**
**Phân đoạn hoàn hảo:** phân đoạn luôn thực hiện dưới dạng phân thì đôi, mỗi bài toán con có kích thước là n/2 => độ phức tạp thuật toán là O(nlogn)
**Phân đoạn cân bằng:** một bài toán con có kích thước n-k và bài toán kia có kích thước là k => độ phức tạp thuật toán là O(n)
