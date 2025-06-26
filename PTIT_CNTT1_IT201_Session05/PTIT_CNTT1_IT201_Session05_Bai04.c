#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int insertValue(int num) {
   while (1) {
      printf("moi nhap so bat ky:");
      scanf("%d", &num);
      if (num <1) {
         printf("\nso bat ky khong hop le\n");
      }else {
         break;
      }
   }
   return num;
}
int calSumFromRange(int num1, int num2) {
   if (num2<num1) {
      return 0;
   }
   return num2 += calSumFromRange(num1, num2-1);
}
int main(){
   int num1;
   int num2;
   num1 = insertValue(num1);
   num2 = insertValue(num2);
   printf("%d", calSumFromRange(num1, num2));
   return 0;
}
