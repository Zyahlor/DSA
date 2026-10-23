#include <ctime>
#include <iostream>
using namespace std;
void nhap(int a[], int n) {
  srand(time(0));
  for (int i = 0; i < n; i++) {
    a[i] = rand() % 10;
  }
}
void xuat(int a[], int n);
void bubble_sort(int a[], int n);
int nghichthe(int a[], int n) {
  int sum = 0;
  for (int i = 0; i < n - 1; i++) {
    int tmp = 0;
    for (int j = i + 1; j < n; j++) {
      if (a[i] > a[j])
        tmp++;
    }
    sum += tmp;
  }
  return sum;
}
void noibot(int b[], int c);
int main() {
  int a[5];
  int n = sizeof(a) / sizeof(a[0]);
  cout << "my bubble_sort:\n";
  nhap(a, n);
  int ngthe = nghichthe(a, n);
  cout << "co [" << ngthe << "] trong mang!\n";
  xuat(a, n);
  bubble_sort(a, n);
  xuat(a, n);

  cout << " my teacher bubble_sort:\n";
  int b[5], c = sizeof(b) / sizeof(b[0]);
  nhap(b, c);
  int ngthe2 = nghichthe(b, c);
  cout << "co [" << ngthe2 << "] trong mang!\n";
  xuat(b, c);
  noibot(b, c);
  xuat(b, c);
  return 0;
}
void xuat(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "[" << a[i] << "] ";
  }
  cout << endl;
}
void bubble_sort(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int dem = 0;
    for (int j = 0; j < n - 1 - i; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        cout << " ============== \n";
        cout << "lan swap thu [" << dem + 1 << "] cua i:[" << i << "]:\n";
        xuat(a, n);
        dem++;
      }
    }
  }
} 
void noibot(int b[], int c) {
  for (int i = 0; i < c - 1; i++) {
    int dem = 0;
    for (int j = c - 1; j > i; j--) {
      if (b[j] < b[j - 1]) {
        swap(b[j], b[j - 1]);
        cout << " ============== \n";
        cout << "lan swap thu [" << dem + 1 << "] cua i:[" << i << "]:\n";
        xuat(b, c);
        dem++;
      }
    }
  }
}
