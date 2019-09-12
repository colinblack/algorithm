#include<stdio.h>

int fabo(int n)
{	
if(n <= 2)	
{
	return n == 2 ? 1 : 0 ; 
}
else 
	return fabo(n - 1) + fabo(n - 2);
}

int main(void)
{
  printf("%d", fabo(5));
  return 0;
}
