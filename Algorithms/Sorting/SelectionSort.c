#include <stdio.h>
void print(int a[],int n){
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
void selectionSort(int a[],int n){
    int i,j,temp,min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[min])
                min=j;
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}
int main()
{
    int a[] = {9,5,7,3,8,30};  
    int n =sizeof(a)/sizeof(a[0]);  
    printf("Before Sorting array elements are :\n");
    print(a,n);
    selectionSort(a,n); 
    printf("After Sorting array elements are :\n");
    print(a,n);
    return 0;
}
