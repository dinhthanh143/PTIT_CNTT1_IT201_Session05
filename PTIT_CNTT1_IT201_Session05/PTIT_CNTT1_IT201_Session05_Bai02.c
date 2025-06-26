#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int calSum(int n) {
   if (n==0){
   return 0;
   }
   return n += calSum(n-1);
}
int main(){
   int num;
   while (1) {
      printf("moi nhap so bat ky:");
      scanf("%d", &num);
      if (num <1) {
         printf("\nso bat ky khong hop le\n");
      }else {
         break;
      }
   }
   printf("%d", calSum(num));
   return 0;
}
