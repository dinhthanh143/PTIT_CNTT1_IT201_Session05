#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int findFibonacci(int **fib,int n, int *size) {
   if (n==0) {
      return 0;
   }
   if (n==1) {
      return 1;
   }

return findFibonacci(fib, n - 1, size) + findFibonacci(fib, n - 2, size);
}
void createFibonacci(int **fib, int n, int *size) {
   *size = n+1;
   *fib = (int*)malloc(*size*sizeof(int));
   for (int i=0; i<n+1; i++) {
      (*fib)[i] = findFibonacci(fib, i, size);
   }
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
   createFibonacci(&fibonacci, num, &size);
   for (int i=0; i<size; i++) {
      printf("%d\t", fibonacci[i]);
   }
   free(fibonacci);
   return 0;
}
