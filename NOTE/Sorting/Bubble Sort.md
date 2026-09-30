# 25 - 09 - 2026
# `Bubble Sort` 
## 1.`bubble sort`là gì? 
- là thuật toán sắp xếp, dùng để sắp xếp mảng.
- hoạt đòng bằng cách so sánh 2 phần tử liền kề, nếu trước lờn hơn sau => đổi chỗ
## 2. Tại sao lại dùng nó?
- chủ yếu để học thuật toán sắp xếp và tư duy vòng lặp
- không được lựa chọn vì có các thuật toán tốt hơn nhiều
## 3. Điểm `mạnh`/`yếu`
#### `mạnh`:
-  rất dễ hiểu
- dễ code
- dễ debug
- tốt để học thuật toán cơ bản
### `yếu`:
- chậm khi mảng lớn
- độ phức tạp trung bình - xấu O(n^2)
## 4. ý tưởng thuật toán
``` c++
 a[] = {5,2,8,1} 
```

So sánh từng cặp:
```text
lượt 1:
5 > 2 => swap

{2,5,8,1}

5 > 8 => not swap

8>1 => swap

{2,5,1,8}

lượt 2:
 2 < 5 => not swap
 5 > 1 +> swap
 {2,1,5,8}
 5 < 8 => not swap
 
 lượt 3:
2 > 1 => swap
{1,2,5,8} 
2 > 5 => not swap
5 < 8 => not swap
=> arr was sort : {1,2,5,8}
```
 **ý tưởng:** cốt lõi so sánh phần tử kế bên -> trước lớn hơn sau -> đổi chỗ
 
 ## 5. code
``` c++
void bubble_sort(int a[],int n){
	for(int i = 0 ; i<n-1;i++){
		for(int j = 0 ; j<n-1-i;j++ )
		{
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
```
 **Giải thích:**
 - for (int i = 0; i < n - 1; i++) => số lượt sắp xếp
 - for (int j = 0; j < n - 1 - i; j++) => đi qua các phần tử để so sánh
 - if (a[j] > a[j + 1]) => trc lớn sau thì đổi chỗ