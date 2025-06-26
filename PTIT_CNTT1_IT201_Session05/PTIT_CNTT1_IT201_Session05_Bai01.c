#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void printNumbers(int n,int count) {
   if (count>n) {
      return;
   }
   printf("%d\n", count);
   count++;
   printNumbers(n, count);
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
   int count = 1;
   printNumbers(num, count);
   return 0;
}
