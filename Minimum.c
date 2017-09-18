#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int minimum(int a,int b,int c)
{
  if(a==b && a==c)
    return a;
  if(a<=b && a<=c)
    return a;
  if(b<=a && b<=c)
    return b;

  return c;
}
     
