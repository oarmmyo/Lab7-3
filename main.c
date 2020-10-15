#include <stdio.h>
#define SIZE 5
int main(void)
{
  int i,j,n[SIZE] = {13, 8, 16, 4, 11};
  printf("%s%13s%17s\n","Element","Value","Histogram");
  for(i=0; i<=SIZE-1; i++)
  {
    printf("%4d%16d%8s",i,n[i],"");
    for(j=1; j<=n[i]; j++)
      printf("*");
    printf("\n");
  }
  return 0;
}
