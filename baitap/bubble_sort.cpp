#include <iostream>
using namespace std;
void bubble_sort(int a[], int n,int &ss,int &pg) {
  for (int i = 0 ; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        pg++;
      }
      ss++;
    }
  }
}
int main() {
  int ss = 0,pg = 0;
  int a[] = {7, 3, 9, 2, 5}, n = 5;
  bubble_sort(a, n,ss,pg);
  for (int i = 0; i < n; i++) {
    cout << "[" << a[i] << "] ";
  }
  cout<<endl;
  cout<<"so phep gan la:"<<pg + 3 <<endl;
  cout<<"so phep so sanh la:"<<ss<<endl;
  return 0;
}
