#include <iostream>
using namespace std;
void xuat(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "[" << a[i] << "] ";
  }
  cout << endl;
}
void ngichthe(int a[], int n, int &tong) {
  for (int i = 0; i < n; i++) {
    int ngthe = 0;
    for (int j = i + 1; j < n; j++) {
      if (a[i] > a[j])
        ngthe++;
    }
    cout << "nghich the cua [" << a[i] << "]:" << ngthe << endl;
    tong += ngthe;
  }
}
int tim(int a[], int n, int x) {
  a[n] = x;
  for (int i = 0; i <= n; i++)
    if (a[i] == x)
      return i;

  return -1;
}
void selection_sort(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++)
      if (a[j] > a[min])
        min = j;
    swap(a[i], a[min]);
  }
}
int binarysearch(int a[], int n, int x) {
  int l = 0;
  int r = n - 1;
  while (l <= r) {
    int mid = (r + l) / 2;
    cout << "gia tri mid la:[" << mid << "]\n";
    if (a[mid] < x)
      r = mid - 1;
    else if (a[mid] > x)
      l = mid + 1;
    else
      return mid;
  }
  return -1;
}
int main() {
  int a[] = {11, 49, 5, 37, 18, 3, 35, 26, 38, 34, 32, 45}, n = 12, ss = 0,
      pg = 0, tong = 0;
  cout << "hello,world!\n";
  xuat(a, n);
  ngichthe(a, n, tong);
  cout << "tong nghich the co trong mang la:" << tong << endl;
  int x;
  cout << " --- sap xep ---\n";
  selection_sort(a, n);
  xuat(a, n);
  cout << "nhap phan tu can tim:";
  cin >> x;
  int vt = binarysearch(a, n, x);
  if (vt == -1)
    cout << "khong co phan tu trong mang!\n";
  else
    cout << "[" << x << "] o vi tri:[" << vt << "]\n";
  return 0;
}
