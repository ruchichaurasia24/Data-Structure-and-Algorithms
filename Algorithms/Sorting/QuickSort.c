#include <stdio.h>
int partition (int a[], int start, int end)  
{  
    int pivot = a[end]; 
    int i = (start - 1);  
    for (int j = start; j <= end - 1; j++){  
        if (a[j] < pivot)  {  
            i++; 
            swap(&a[i],&a[j]);
        }  
    }  
    swap(&a[i+1],&a[end]);
    return (i+1);
}
int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void quick(int a[], int start, int end)  {  
    if (start < end)  {  
        int p = partition(a, start, end);  
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
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
    quick(a,0,n-1); 
    printf("After Sorting array elements are :\n");
    print(a,n);
    return 0;
}  
 
