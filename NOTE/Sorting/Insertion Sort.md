# 11 - 10 -2026
## 1. Insertion sort là gì
- như xếp bài trên tay.
- lấy từng phần tử , chèn vào đúng chỗ trong phần đã sắp xếp bên trái
## 2. tại sao lại dùng?

- code ngắn
- dùng với mảng nhỏ - nhanh hơn các thuật toán phúc tạp
- sort được dữ liệu mới liên tục
> hàm sort của c++ và timsort của python đều dùng insertion sort cho đoạn nhỏ

## 3. mạnh/yếu

| ✅ Mạnh                                 | ❌ Yếu                                    |
| -------------------------------------- | ---------------------------------------- |
| Đơn giản, dễ code, dễ debug            | Worst/average O(n²) → chậm với mảng lớn  |
| In-place, O(1) bộ nhớ                  | Mảng ngược thứ tự là trường hợp tệ nhất  |
| Stable (giữ thứ tự phần tử bằng nhau)  | Dịch từng phần tử một → tốn thao tác gán |
| Best case O(n) khi đã sắp xếp          | Không hợp dữ liệu lớn ngẫu nhiên         |
| Online (sort được khi dữ liệu đến dần) |                                          |

```c++
void insertion_sort(int a[],int n){
    for(int i = 1;i<n;i++){
        int key = a[i],j = i -1;
        while(j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

```

```text
[5,2,3,1,6] => key = a[i] = a[1] = 2, j = i -1 = 0
điều kiện khởi tạo loop: j >=0, a[j] > key => a[j] = 5, key =2 => lặp
a[j+1] = a[j] => a[j+1] = a[0+1] = a[1] =
```