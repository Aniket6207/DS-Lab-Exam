#include <limits.h>
#include <stdio.h>
void merge(int a[],int low,int high,int mid){
     int l_size=mid-low+1;
     int x[l_size+1];
     int r_size=high-mid;
     int y[r_size+1];
     for (int i=0;i<l_size;i++){
        x[i]=a[i+low];
     }
     for (int i=0;i<r_size;i++){
        y[i]=a[i+mid+1];
     }
     x[l_size]=y[r_size]=INT_MAX;
     int l_i=0;
     int r_i=0;
     for (int i=low;i<=high;i++){
          if (x[l_i]<=y[r_i]){
            a[i]=x[l_i];
            l_i++;
          }
          else{
            a[i]=y[r_i];
            r_i++;
          }
     }






 }


 void merge_sort(int a[],int low,int high){
    if (low!=high){
        int mid=(low+high)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,high,mid);
    }
 }





int main(){;
    int n;
    scanf("%d",&n);
  //  vi a(n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    merge_sort(a,0,n-1);
    for (int i=0;i<n;i++){
        printf("%d",a[i]);
    }


    return 0;
}
