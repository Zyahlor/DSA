# 21-08-2026
# **BINARYSEARCH**
---
## 1.binarysearch là gì
khái niệm:
 - là phương pháp tìm kiếm nhị phân
 - chia mảng ra làm 2 và dựa vào trung bình cộng của giá trị left vả right để xác định vị trí i để a[i] = giá trị cần tìm

điểm mạnh:
 - sắp xếp tối ưu hơn với giá trị dầu vào đã được sort
 - sẽ tốn ít phép toán hơn so với linearsearch

điểm yếu:
 - chỉ hoạt động tốt với mảng,dữ liệu đã sort
 - nếu giá trị cần tìm ở a[0] => linearsearch tối ưu hơn vì O(1)

Binary search chỉ hoạt động đúng khi mảng luôn được sắp xếp. Nếu log mới liên tục được thêm vào (mà timestamp mới luôn > timestamp cũ) thì thực ra vẫn ổn nếu bạn chỉ thêm vào cuối mảng — mảng vẫn sort.

Nhưng nếu dùng array để lưu và cần insert vào giữa (ví dụ dữ liệu đến không theo đúng thứ tự thời gian — network delay chẳng hạn), thì:

Insert vào giữa array tốn O(n) vì phải dịch chuyển toàn bộ phần tử phía sau.
Điều này "ăn hết" lợi ích O(log n) của binary search.
---
## 2. triển khai thuật toán
 - `right` = n -1,`left` = 0
 - thay vì duyệt hết mảng thì tìm vị trí trung tâm để so trước => `mid` = `(left + right)/2`
 - nếu giá trị `a[mid]`  > x => thu hẹp về bên trái `right` = `mid` - 1
 - `a[mid]` < x  => duyệt về bên phải  `left` = `mid` + 1
 - `a[mid] `== x => trả về `mid`

## 3. code
``` c++
int binarysearch(int a[],int n,int x){
    int l =0,r=n-1;
    while(l<=r){
        int mid = (r+l)/2;
        if(a[mid] == x) return mid;
        else if(a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}
```