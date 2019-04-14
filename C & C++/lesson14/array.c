#include <stdio.h>
#include<stdlib.h>
#include <cs50.h>
int main(void)
{
    int n, i, *ptr, sum = 0;
    scanf("%d", &n);

  ptr =(int *) malloc(n * sizeof(int));
  if (ptr == NULL)
  {
    printf("Error -- out of memory.\n");
    return 1;
  }
  printf("Enter elements: ");
  for(i = 0; i < n; ++i){
      scanf("%d", ptr+i);
      sum += *(ptr + i);
  }
  printf("Sum = %d", sum);
  free(ptr);
  return 0;
}