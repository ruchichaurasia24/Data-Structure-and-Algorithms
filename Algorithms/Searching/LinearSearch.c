#include <stdio.h>
void print(int a[],int n){
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
int linearSearch(int a[],int n,int s) {  
    for (int i = 0; i < n; i++){  
        if (a[i] == s)  
            return i;  
    }  
    return -1;  
}  
int main() {  
  int a[] = {56,78,5,2,8,45,7};  
  int n =sizeof(a)/sizeof(a[0]);  
  printf("Elements of array are :\n");
  print(a,n);
  int s; 
  printf("\nEnter element which you want to search : ");
  scanf("%d",&s);
  int result = linearSearch(a,n,s);    
  if (result == -1)  
      printf("\nElement is not found in the array");  
  else  
      printf("\n%d Element is found at %d position of array",s, result);  
  return 0;  
}  
