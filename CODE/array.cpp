using namespace std;
#include <iostream>
void duyet(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]:" << a[i] << " ";
    }
    cout << endl;
}
int tim(int a[],int n,int x){
    for(int i = 0;i<n;i++)
        if(a[i] == x) return i;
        return -1;
}
int max(int a[],int n){
    int max =a[0];
    for (int i = 0; i < n; i++)
    {
        if(max < a[i]) max = a[i];
    }
    return max;
    
}
int min(int a[],int n){
    int min =a[0];
    for (int i = 0; i < n; i++)
    {
        if(min > a[i]) min = a[i];
    }
    return min;
    
}
int dem(int a[],int n){
    int dem =0;
    for(int i=0;i<n;i++)
    dem++;
    return dem;
}
int tong(int a[],int n){
    int tong =a[0];
    for(int i=1 ;i<n;i++)
    tong+=a[i];
    return tong;
}
void chen(int a[],int &n,int vitri,int giatri){
    for(int i=n;i>vitri;i--)
    a[i] =a[i-1];
    a[vitri] = giatri;
    n++;
}
void xoa(int a[],int &n,int vitri){
    for(int i = vitri;i<n;i++)
    a[i] = a[i+1];
    n--;
}
void dao(int a[],int n){
    int j = n -1;
    for(int i=0;i<j;i++,j--){
        int temp =0;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
       
    }
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10},n=10;
    duyet(a,n);

// tim phan tu
    // int x;
    // cout<<"nhap phan tu can tim kiem:";
    // cin>>x;
    // if(tim(a,n,x) == -1) cout<<"khong co phan tu do trong mang!\n";
    // else cout<<tim(a,n,x)<<endl;

//max
    cout<<"so lon nhat trong mang la:"<<max(a,n)<<endl;

// min
    cout<<"so nho nhat trong mang la:"<<min(a,n)<<endl;

// dem
    cout<<"so luong phan tu trong mang la:"<<dem(a,n)<<endl;

// tong
    cout<<"tong:"<<tong(a,n)<<endl;

// chen
    // int giatri,vitri;
    // cout<<"nhap giatri,vitri:";
    // cin>>giatri>>vitri;
    // chen(a,n,vitri,giatri);
    // duyet(a,n);

// xoa
    // cout<<"nhap vitri:";
    // cin>>vitri;
    // xoa(a,n,vitri);
    // duyet(a,n);

// dao
    dao(a,n);
    duyet(a,n);
    return 0;
}