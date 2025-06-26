#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int findFibonacci(int **fib,int n, int *size) {
   (*size)++;
   *fib = (int*)realloc(*fib, *size*sizeof(int));
   (*fib)[*size-1] = n;
   if (n==0) {
      return 0;
   }
   if (n==1) {
      return 1;
   }

return findFibonacci(fib, n - 1, size) + findFibonacci(fib, n - 2, size);
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
   int size = 0;
   int *fibonacci = NULL;
   findFibonacci(&fibonacci, num, &size);
   for (int i=0; i<size; i++) {
      printf("%d\t", fibonacci[i]);
   }
   free(fibonacci);
   return 0;
}
