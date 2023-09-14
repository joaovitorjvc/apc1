#include <stdio.h>
int main(){
  int global = 20;
  int local = 10;
  printf("global =%i, local = %i\n", global, local);
  {
    int global = 20;
    int local = 10;
    printf("global =%i, local = %i\n", global, local);
  }
  printf("global =%i, local =%i\n", global, local);  
  return 0;
}