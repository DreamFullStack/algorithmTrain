#include <stdio.h>
int main(void)
{
  int N, sum = 0;
  int a[10] = {0};
  char c;
  while((c=getchar()) != ' ')
  {
    N = c - '0';
  }
  int i;
  for(i=0; i<N; i++)
  {
    c = getchar();
    getchar(); 
    a[i] = c - '0';   
  }
  for(i=0; i<N; i++)
  {
    sum += (N-1)*11*a[i];
  }      printf("%d\n", sum);
  return 0;
}
