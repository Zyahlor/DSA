#include <iostream>
using namespace std;
void nhap(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "nhap phan tu a[" << i + 1 << "]:";
    cin >> a[i];
  }
}
void xuat(int a[], int n) {
  for (int i = 0; i < n; i++)
    cout << "[" << a[i] << "] ";
  cout << endl;
}
void doichoitt(int a[], int n, int &ss, int &pg) {
  int dem = 1;
  for (int i = 0; i < n - 1; i++) {
    cout << "--- lan " << dem << ":";
    for (int j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        swap(a[i], a[j]);
        pg++;
        xuat(a, n);
      }
      ss++;
    }
    dem++;
  }
}
int main() {
  cout << "hello,world!";
  int a[100], n;
  cout << "nhap so luong phan tu trong mang:";
  cin >> n;
  nhap(a, n);
  xuat(a, n);
  int ss = 0, pg = 0;
  cout << "\n --- mang da sap xep --- \n";
  doichoitt(a, n, ss, pg);
  xuat(a, n);
  cout << "so luong phep gan:" << pg << endl;
  cout << "so luong phep ss:" << ss << endl;
  return 0;
}
