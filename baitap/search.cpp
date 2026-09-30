#include<iostream>
using namespace std;
void nhap(int a[],int &n){
    for(int i = 0;i<n;i++){
        cout<<"nhap a["<<i<<"]:";
        cin>>a[i];
    }
}
void xuat(int a[],int n){
    for(int i =0;i<n;i++){
        cout<<"a["<<i<<"]"<<a[i]<<" ";
    }
    cout<<endl;
}
int linearsearch(int a[],int n,int x,int &dem){
    dem =0;
    for(int i=0;i<n;i++){
        dem++;
        if(a[i] == x) return i;
    }
    return -1;
}

void hoanvi(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void sapxep(int a[],int n){
    for(int i = 0;i<n;i++)
        for(int j = i+1;j<n;j++){
            if(a[i]>a[j]) {hoanvi(a[i],a[j]);}
        }
}
int binarysearch(int a[],int n,int x,int &dem1){
    sapxep(a,n);
    dem1=0;
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = (r+l)/2;
        if(a[mid] == x) return mid;
        else if(a[mid] > x) r = mid - 1;
        else l = mid + 1;
        dem1++;
    }
    return -1;
}
int main(){
    int a[20],n,dem,dem1;
    cout<<"nhap so phan tu trong mang:";
    cin>>n;
    nhap(a,n);
    xuat(a,n);

    cout<<"dung linearsearch:\n";
    int kq = linearsearch(a,n,6,dem);
    if(kq == -1 ) cout<<"khong co phan tu trong mang!\n";
    else cout<<"vi tri phan tu trong mang la:"<<kq<<endl;
    cout<<"so lan so sanh:"<<dem<<endl;
    cout<<"====================================\n";
    int kq2 = binarysearch(a,n,6,dem1);
    if(kq2 == -1 ) cout<<"khong co phan tu trong mang!\n";
    else cout<<"vi tri phan tu trong mang la:"<<kq<<endl;
    cout<<"so lan so sanh:"<<dem1<<endl;
    cout<<"====================================\n";
    
    return 0;
}