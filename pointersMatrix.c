#include<stdio.h>
int main() {
      int m,n, Count = 1,i,j;
      int arr[3][3];
      printf("Enter value of m:");
      printf("Enter value of n:");
       scanf("%d", &m);
       scanf("%d", &n);
      for(i=0;i<=m;i++) {
          for(j=0;j<=n;j++) {
              arr[i][j]=Count++;
          }
       }
              
       for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
           printf("%d",arr[i][j]);
         }
         printf("\n");
       }
}
