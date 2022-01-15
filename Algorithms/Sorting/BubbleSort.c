#include <stdio.h>
void print(int a[],int n){
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
    
void bubbleSort(int a[],int n){
    int i,j,temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int a[] = {9,5,7,3,8,30};  
    int n =sizeof(a)/sizeof(a[0]);  
    printf("Before Sorting array elements are :\n");
    print(a,n);
    bubbleSort(a,n); 
    printf("After Sorting array elements are :\n");
    print(a,n);
    return 0;
}
