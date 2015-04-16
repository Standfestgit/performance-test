#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int c, n;
 
  printf("Performance test from C...\n");
 
  for (c = 1; c <= 100000000; c++) {
    n = rand() % 100 + 1;
    
  }
 
  return 0;
}

