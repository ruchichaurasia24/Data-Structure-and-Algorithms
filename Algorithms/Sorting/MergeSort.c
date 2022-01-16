#include <stdio.h>
void mergeSort(int a[],int beg,int end){
    if(beg<end){
        int mid=(beg+end)/2;
        mergeSort(a,beg,mid);
        mergeSort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}
int merge(int a[],int beg,int mid,int end){
    int i,j,k;
    int n1=mid-beg+1;
    int n2=end-mid;
    int l[n1],r[n2];
    for(int i=0;i<n1;i++)
        l[i]=a[beg+i];
    for(int j=0;j<n2;j++)
        r[j]=a[mid+1+j];
    i=0,j=0;k=beg;
    while(i<n1&&j<n2){
        if(l[i]<=r[j]){
            a[k]=l[i];
            i++;
        }
        else{
            a[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=l[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=r[j];
        j++;
        k++;
    }
}
void print(int a[],int n){
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    int a[] = {9,5,7,3,8,30};  
    int n =sizeof(a)/sizeof(a[0]);  
    printf("Before Sorting array elements are :\n");
    print(a,n);
    mergeSort(a,0,n-1); 
    printf("After Sorting array elements are :\n");
    print(a,n);
    return 0;
}
