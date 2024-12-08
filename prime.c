#include <stdio.h>
int main()
{

  int a,x= 0;
  scanf("%d",&a);
  if (a==0||a==1)
    x = 1;
  for (int i=2;i<=a/2;++i) {
    if (a % i == 0) {
      x= 1;
      break;
    }
  }
  if (x==0)
    printf("%d is a prime number ",a);
  else
    printf("%d is not a prime number ",a);

  return 0;
}
