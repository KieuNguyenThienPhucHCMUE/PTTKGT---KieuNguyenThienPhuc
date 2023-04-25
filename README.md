# Phân tích bài toán 8 quân hậu


**Ý tưởng:** Xếp tám quân hậu trên bàn cờ sao cho không có hai quân nào đứng trên cùng hàng, hoặc cùng cột hoặc cùng đường chéo. Đặt lần lượt từng quân hậu vào sao cho quân trước không bị khống chế.

**Các bước thực hiện:**

**Bước 1:** Đầu tiên ta đặt quân hậu thứ nhất vào các cột trên hàng 1 ( có n cách đặt ).

**Bước 2:** Thử đặt quân hậu 2 vào từng cột ở hàng 2 sao cho không bị quân hậu 1 khống chế. Với mỗi vị trí của quân hậu này ta lại thử đặt quân hậu thứ ba vào các cột sao cho không bị các quân hậu trước khống chế.

**Bước 3:** Sau khi đặt xong quân hậu thứ tám thì in ra một cách đặt.

**Độ phức tạp:**
 T(n)=nT(n-1)+C2= n(n-1)T(n-2) + nC2 +C2 = n(n-1)(n-2)T(n-3) + nC2 + n(n-1)C2 + C2 = n!(T(1)) + nC2 + n(n-1)C2 + ... 
 
 **=> Độ phức tạp O(n!)**
