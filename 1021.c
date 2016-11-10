#include  <stdio.h>
int main(void)
{
  char c;
  int a[10] = {0};
  while((c = getchar()) != '\n')
  {
    a[(int)(c - '0')]++;
  }
  int i;
  for(i=0; i<10; i++)
  {
    if(a[i]) printf("%d:%d\n", i, a[i]);
  }
  return 0;
}
