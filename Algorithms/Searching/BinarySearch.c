#include <stdio.h>
void print(int a[],int n){
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
    
int binarySearch(int a[],int n,int s){
    int f=0;
    int l=n-1;
    int m=(f+l)/2;
    for(int i=0;i<n;i++){
        while(f<=l){
            if(a[m]>s){
                l=m-1;
            }
            if(a[m]==s){
                return m;
            }
            if(a[m]<s){
                f=m+1;
            }
        }
    }
}
int main()
{
    int a[] = {5,7,9,13,25,67,78};  
    int n =sizeof(a)/sizeof(a[0]);  
    printf("Elements of array are :\n");
    print(a,n);
    int s; 
    printf("\nEnter element which you want to search : ");
    scanf("%d",&s);
    int result = binarySearch(a,n,s);    
    if (result == -1)  
        printf("\nElement is not found in the array");  
    else  
        printf("\n%d Element is found at %d position of array",s, result);  
  return 0;  

    return 0;
}
