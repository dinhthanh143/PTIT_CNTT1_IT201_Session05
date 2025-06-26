#include <ctype.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void checkIsNan(char str[], int count) {
   if (!isdigit(str[count])) {
      printf("Khong phai so");
      return;
   }
   if (count== strlen(str)-1) {
      printf("%d", atoi(str));
      return;
   }
   count++;
   return checkIsNan(str, count);
}
int main(){
   char str[100];
   printf("Moi nhap chuoi ky tu so: ");
   fgets(str, 100, stdin);
   str[strcspn(str,"\n")] = 0;
   int count = 0;
   checkIsNan(str,count);
   return 0;
}
