#include <iostream>
#include "../thuvien/goiham.h"
using namespace std;
// void nhap(int a[], int n) {
//   srand(time(0));
//   for (int i = 0; i < n; i++) {
//     a[i] = rand() % 20;
//   }
// }
// void xuat(int a[], int n) {
//   for (int i = 0; i < n; i++) {
//     cout << "[" << a[i] << "] ";
//   }
//   cout << endl;
// }
void chontt(int a[], int n, int &ss, int &pg) {
  for (int i = 0; i < n - 1; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      ss++;
      if (a[j] < a[min]) {
        min = j;
        pg++;
      }
    }
    my_swap(&min ,&min );
    pg += 4;
  }
}
int main() {
  cout << "hello,world!\n";
  int a[100], n;
  int pg = 0, ss = 0;
  cout << "nhap so phan tu co trong mang:";
  cin >> n;
  nhap(a, n);
  xuat(a, n);
  cout << " ---- sap xep ---- \n";
  chontt(a, n, ss, pg);
  xuat(a, n);
  cout << " --- thong so --- \n";
  cout << "so phep gan:" << pg + 3 << endl;
  cout << "so phep so sanh:" << ss << endl;
  return EXIT_SUCCESS;
}
