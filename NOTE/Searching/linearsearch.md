# 21-08-2026
# **LINEARSEARCH**

## 1. linearsearch là gì ?
- là phương pháp tìm kiếm tuyến tính

ý tưởng:
 - duyệt toàn bộ mảng
 - nếu a[i] == giatri can tim, return i;
 - phụ thuộc vào dữ liệu đầu vào, phép tính có thể nhiều hoặc ít

trường hợp:
 - tốt nhất: dữ liệu cần tìm nằm ở đàu tiên a[0] O(1)
 - xấu nhất: dữ liệu nằm ở cuối cùng của mảng O(n)

## 2. triển khai thuật toán

- duyệt toàn bộ mảng = for
- cho nhánh điều kiện a[i] == giatri cần tìm => trả về i
- nếu duyệt hết mảng ko có giá trị cần tìm sẽ trả vè - 1

## 3. code

```c++
int linearsearch(int a[],int n,int x)
{
    for(int i = 0;i < n; i++)
    if(a[i] == x) return i;
    return -1;
}

```