#include <iostream>
using namespace std;
void nhap(int a[], int n) {
  srand(time(0));
  for (int i = 0; i < n; i++) {
    a[i] = rand() % 10;
  }
}
void bubble_sort(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = n - 1; j > i; j--) {
      if (a[j] < a[j - 1])
        swap(a[j], a[j - 1]);
    }
  }
}
void selection_sort(int a[],int n){
    for(int i = 0;i<n-1;i++)
    { int min = i;
        for(int j = i+1;j<n;j++){
            if(a[j] < a[min]) min = j;
        }
        if(min != i){
            swap(a[min],a[i]);
        }
    }
}
void interchange_sort(int a[],int n){
  for(int i = 0;i<n-1;i++){
    for(int j =i+1;j<n;j++){
      if(a[i] > a[j]) swap(a[i],a[j]);
    }
  }
}
void xuat(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "[" << a[i] << "] ";
  }
  cout << endl;
}
int main() {
  int a[5];
  int n = sizeof(a) / sizeof(a[0]);
  nhap(a, n);
  cout<<"mang ban dau:";
  xuat(a, n);
  bubble_sort(a, n);
  cout<<"mang da sap xep:";
  xuat(a, n);
  return 0;
}
