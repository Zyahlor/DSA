#include <ctime>
#include <iostream>
using namespace std;
void nhap(int a[], int n) {
  srand(time(0));
  for (int i = 0; i < n; i++) {
    a[i] = rand() % 10;
  }
}
void xuat(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "[" << a[i] << "] ";
  }
  cout << endl;
}
void insetion_sort(int a[], int n) {
  for (int i = 1; i < n; i++) {
    int key = a[i], j = i - 1;
    while (j >= 0 && a[j] > key) {
      a[j] = a[j + 1];
      j--;
    }
    a[j + 1] = key;
  }
}
int main() {
  int a[5], n = sizeof(a) / sizeof(a[0]);
  nhap(a, n);
  xuat(a, n);
  insetion_sort(a, n);
  xuat(a, n);
  return 0;
}
