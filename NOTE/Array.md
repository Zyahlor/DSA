# 17-08-2026
# Array

## 1. duyệt mảng
ý tưởng:
- dùng vòng lặp for, duyệt phần tử từ 0 -> n-1

``` c++
for(int i=0;i<n ;i++)
 cout<<a[i];
```

độ phức tạp: O(n)

---

## 2. tìm kiếm phần tử
ý tưởng:
 - duyệt hết mảng, gọi x là phần tử cần tìm
 - `x` = vi trí phần tử cần tìm
 - điều kiện nếu `a[i]` == `x` thì trả về vị trí `i` , không thì trả về -1

``` c++
int find(a[],int n){

    for(int i=0;i<n;i++)
    if(a[i]==x) return i;
    return -1;
}
```
độ phức tạp: O(n)

---

## 3. tìm max/min

ý tưởng:
 -  gán phần tử đầu cho `max`/`min`
 - duyệt hết phần tử trong mảng
 - nếu `a[i]` > `max` / `a[i]` < `min`
 - `max`= `a[i]` / `min`=`a[i]`

``` c++
int max(int a[],int n){
    int max =a[0];
    for(int i=1;i<n;i++)
    if(a[i]>max) max = a[i];
    return max;
}

int min(int a[],int n){
    int min =a[0];
    for(int i=1;i<n;i++)
    if(a[i]<min) min = a[i];
    return min;
}
```

độ phức tạp: O(n)

---

## 4. đém phần tử
ý tưởng:
 - duyệt hết phần tử trong mảng
 - tạo 1 biến điếm các phần tử và trả về

``` c++
int dem(a[],int n){
    int dem =0;
    for(int i=0;i<n;i++)
    dem++;
    return dem;
}
```
độ phức tạp: O(n)

---

## 5. tính tổng
ý tưởng:
 - duyệt toàn bộ mảng = for ở vị trí i = 1
 - gán tong = a[0] và trả về tong

```c++
int tong(a[],int n){
    int tong =a[0];
    for(int i =1;i<n;i++)
    tong +=a[i];
    return tong;
}
```

độ phức tạp: O(n)

---
## !6. chèn phần tử
ý tưởng:
- dịch các phần tử sang phải
- cho for chạy từ i = n,điều kiện i > vitri, i giảm dần
- n++ để mở rộng bọ nhớ của mảng ra

```c++
void chen(int a[],int &n,int vitri,int giatri){
    for(int i=n;i>vitri;i--)
    a[i] = a[i -1];
    a[vitri] =  giatri;
    n++;
}
```
độ phúc tạp: O(n)

---

## !7. xóa phần tử
ý tưởng:
 - dịch tất cẩ phần tử qua bên trái
 - cho for chạy từ vitri,điều kiện là i < n-1, i tăng dần
 - n-- để thu hẹp bộ nhớ mảng lại

```c++
void xoa(int a[],int &n,int vitri){
    for(int i = vitri; i <n-1 ;i++)
    a[i] = a[i +1];
    n--;
}
```
độ phúc tạp: O(n)

---

## !8. đảo phần tử
ý tưởng:
 - cho j = n -1 vì index  từ 0 -> n -1 => cho j ở cuối mảng
 - duyệt mảng với i = 0 , đi từ i < j => giữa mảng
 - cho 1 biến temp dùng để đổi chỗ a[i],a[j] 
``` c++
void dao(int a[],int n){
    int j= n-1;
    for(int i = 0;i<j; i++,j--){
        int temp =0;
        temp = a[i];
        a[i] =  a[j];
        a[j] = temp;
    }
}
```
tối ưu thuật toán

``` C++
for(int i=0;i< n/2; i++){
 int temp = a[i];
 a[i] = a[n- i -1];
 a[ n - i -1] = temp;
}
```

độ phức tạp: O(n)

---

# lỗi từng gặp

## 1. vòng lặp không chạy
```c++
for(i=n; i < n ;i--)
```
## 2. cộng a[0] hai lần
- 1 lần là gán vào biến
- 2 là cộng lại vô vòng lặp
```c++
int tong = a[0];

for(int i = 0; i < n; i++)
    tong += a[i];
 ```
## 3. xóa bị truy cập ngoài mảng

```c++
for(i = vitri; i<n ; i++)
 a[i] = a[i+1]
 ```

khi i = n -1: a[i+1] 00= a[n]


# Kiến thức trọng tâm

- Duyệt mảng: `i = 0 → n - 1`
- Tìm kiếm: duyệt + điều kiện + `return`
- Tìm max/min: cập nhật giá trị lớn nhất/nhỏ nhất
- Đếm: `count++` khi thỏa điều kiện
- Tổng: `sum += a[i]`
- Chèn: dịch phải → gán → `n++`
- Xóa: dịch trái → `n--`
- Đảo: hai đầu tiến vào giữa → swap
- Hiểu index: `0 → n - 1`
- Hiểu sự khác nhau giữa `size (n)` và `capacity`
- Tránh lỗi truy cập `a[n]`
