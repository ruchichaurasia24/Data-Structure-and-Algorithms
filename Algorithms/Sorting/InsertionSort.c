#include <stdio.h>
void print(int a[],int n){
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
void insertionSort(int a[],int n){
    int i,j,key;
    for(int j=1;j<n;j++){
        key=a[j];
        i=j-1;
        while(i>=0&&key<=a[i]){
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
    }
}
int main()
{
    int a[] = {9,5,7,3,8,30};  
    int n =sizeof(a)/sizeof(a[0]);  
    printf("Before Sorting array elements are :\n");
    print(a,n);
    insertionSort(a,n); 
    printf("After Sorting array elements are :\n");
    print(a,n);
    return 0;
}
