/* 1.绝对值函数 
 *       整形   ->  int abs(int);         stdlib.h     
 *       浮点型 ->  double fabs(double);  math.h
 *   参考：TCPL Page 253 and 251. 
 *   或者：man 3 abs 以及 man 3 fabs
 * 2.正数的四舍五入
 *       int a = (int)(double b + 0.5);
 *   浮点数加0.5，结果强制类型转换为整形。不适用负数。
 */
#include <stdio.h>
#include <math.h>          
#define CLK_TCK 100
int main(void)
{
  long C1, C2;
  scanf("%ld %ld", &C1, &C2);
  double time = fabs( (double)(C1 - C2) / CLK_TCK );
  int timeSec = (int)(time + 0.5); 
  int hour   = timeSec / 3600;
  int minute = timeSec % 3600 / 60;
  int second = timeSec % 3600 % 60;
  printf("%02d:%02d:%02d", hour, minute, second);
  return 0;
}
