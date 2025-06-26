#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void checkSymmertricalString(char str[], int size, int index) {
   if (str[size] != str[index]) {
      printf("Khong phai chuoi doi xung");
      return;
   }
   if (size <= index) {
      printf("Day la chuoi doi xung");
      return;
   }
    checkSymmertricalString(str, size-1, index+1);
}
int main(){
   char str[100];
   printf("Moi nhap chuoi: ");
   fgets(str, 100, stdin);
   str[strcspn(str,"\n")] = 0;
   int size = strlen(str);
   checkSymmertricalString(str, size-1, 0);
   return 0;
}
