#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int calFactorial(int n) {
   if (n==0) {
      return 1;
   }
   return n * calFactorial(n-1);
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
   printf("%d", calFactorial(num));
   return 0;
}
