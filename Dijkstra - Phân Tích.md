# Phân tích thuật toán Dijkstra

**Ý tưởng:** Thuật toán Dijkstra dựa trên nguyên tắc giảm bớt. Trong đó các giá trị chính xác hơn sẽ dần thay thế một giá trị gần đúng với khoảng cách chính xác cho đến khi đạt được khoảng cách ngắn nhất. Khoảng cách gần đúng tới mỗi định được ước tính lớn hơn nhiều khoảng cách thực và sẽ dần thay thế bằng giá trị nhỏ nhất của giá trị cũ bằng độ dài của một đường mới tìm được. Thuật toán sử dụng hàng đợi ưu tiên kết hợp với thuật toán tham lam chọn đỉnh gần nhất chưa được xử lý và thực hiện quá trị giảm bớt này trên tất cả các cạnh mà nó duyệt qua.

**Các bước thực hiện:**

**Bước 1:**  Đánh dấu tất các node dự kiến: Đặt khoảng cách từ nút nguồn tới nút 0 là nguồn, và đặt là vô hạn với các nút khác.

**Bước 2:** Tiến hành chạy lặp (loop):

Trích xuất nút N là nút có khoảng cách nhỏ nhất

Thêm liên kết tới nút N vào cây đường đi ngắn nhất

Sau đó tiến hành tối ưu các đường đi cạnh N bằng cách thử kéo dài cạnh


**Độ phức tạp:**

Độ phức tạp của thuật toán: O(E.log(V))


**Hướng dẫn thực thi chương trình:** 

INPUT:

Sửa trực tiếp trong đối tượng edges tập các cạnh, đỉnh, trọng số.

OUPUT:

Đường đi ngắn nhất đến các đỉnh.

**Mẫu ví dụ:**

INPUT:

  vector<Edge> edges =
    {
        {0, 1, 10}, {0, 4, 3}, {1, 2, 2}, {1, 4, 4}, {2, 3, 9},
        {3, 2, 7}, {4, 1, 1}, {4, 2, 8}, {4, 3, 2}
    };
  
OUTPUT:

Path (0 —> 1): Minimum cost = 4, Route = [0, 4, 1]
  
Path (0 —> 2): Minimum cost = 6, Route = [0, 4, 1, 2]
  
Path (0 —> 3): Minimum cost = 5, Route = [0, 4, 3]
  
Path (0 —> 4): Minimum cost = 3, Route = [0, 4]
  
Path (1 —> 2): Minimum cost = 2, Route = [1, 2]
  
Path (1 —> 3): Minimum cost = 6, Route = [1, 4, 3]
  
Path (1 —> 4): Minimum cost = 4, Route = [1, 4]
  
Path (2 —> 3): Minimum cost = 9, Route = [2, 3]
  
Path (3 —> 2): Minimum cost = 7, Route = [3, 2]
  
Path (4 —> 1): Minimum cost = 1, Route = [4, 1]
  
Path (4 —> 2): Minimum cost = 3, Route = [4, 1, 2]
  
Path (4 —> 3): Minimum cost = 2, Route = [4, 3]


