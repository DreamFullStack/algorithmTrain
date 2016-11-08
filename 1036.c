#include <stdio.h>
int main(void)
{
  int n, i; 
  int line; 
  char c;
  scanf("%d %c", &n, &c);
  line = (int)( (double)n/2 + 0.5 ); 
  for(i=1; i<=n; i++) printf("%c", c);
  printf("\n");
  for(i=1; i<=line-2; i++)
  {
    printf("%c", c);
    int j;
    for(j=1; j<=n-2; j++) printf(" ");
    printf("%c\n", c);
  }
  for(i=1; i<=n; i++) printf("%c", c);
  return 0;
}
