#include<iostream>
using namespace std;
int linearsearch(int a[],int n,int x){
    for(int i =0;i<n;i++){
        if(a[i]==x)return i;
    }
    return -1;
}
int main(){
    int a[] = {1,2,3,4,5,53,5,3};
    if(linearsearch(a,8,4) == -1) cout<<"khong co phan tu trong mang!\n";
    else cout<<linearsearch(a,8,4);
    return 0;
}