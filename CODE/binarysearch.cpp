#include<iostream>
using namespace std;
void hoanvi(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void sapxep(int a[],int n){
    for(int i =0;i<n;i++){
        for(int j = 1;j<i;j++){
            if(a[i]> a[j]) hoanvi(a[i],a[j]);
        }
    }
}

int binarysearch(int a[],int n,int x){
    int l = 0, r = n - 1,dem =0;
    while(l <= r){
        int mid = (r+l)/2;dem++;
        cout<<"gia tri cua mid lan "<<dem<< " la:("<<l<<"+"<<r<<")/2 = "<<mid<<endl;
        if(a[mid] == x ) return mid;
        else if(a[mid] > x) { 
            r = mid -1;
            cout<<a[mid] <<" > "<< x << " => " << "r = " << mid << " - "<< 1 <<" = " << r <<endl;
            }
        else {
            l = mid +1;
            cout<<"a[mid] = "<<a[mid] << " < " <<x << " => l = " << mid <<" + " << 1 <<" = " << l <<endl;; 
        }
        cout<<"gia tri cua a[mid]:"<<a[mid]<<endl;
    }
    return -1;
}

int main(){
    int a[] = {2,4,6,8,10};
    if(binarysearch(a,5,5) == -1) cout<<"khong co phan tu trong mang!\n";
    else cout<<binarysearch(a,5,5);
    return 0;
}
