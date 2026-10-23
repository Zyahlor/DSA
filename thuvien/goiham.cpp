#include <iostream>
#include "goiham.h"
#include <ctime>
using namespace std;
void nhap(int *a,int n){
 srand(time(0));
 for (int *i = a;i<a+n;i++)
     *i = rand()%5;
}
void xuat(int *a, int n){
    for (int *i = a;i<n+a;i++){
        cout<<"["<<*i<<"] ";
    }
    cout<<endl;
}
void my_swap(int *a,int *b){
    int *tmp = a;
    *a=*b;
    *b = *tmp;
}
