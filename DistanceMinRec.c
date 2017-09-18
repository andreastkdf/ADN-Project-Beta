#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "Distance.h"
#include "Minimum.h"


int DistanceMinRec(char* a,char* b)
{
 
  int n=strlen(a);
  int m=strlen(b);
 
  if(n==0 && m==0)
    return 0;
  if(n==0)
    return m;
  if(m==0)
    return n;
     
  char* a_bis=strndup(a,n-1); //strndup: duplicate a string, rend un pointeur sur le nouveau
  char* b_bis=strndup(b,m-1);
 
  return minimum(DistanceMinRec(a_bis,b) +1,
	     DistanceMinRec(a_bis,b_bis)+ Distance(*(a+n-1),*(b+m-1)),
	     DistanceMinRec(a,b_bis) +1);
 
}

