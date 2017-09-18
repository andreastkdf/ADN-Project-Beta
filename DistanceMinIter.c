#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "Distance.h"
#include "Minimum.h"

int DistanceMinIter(char* a,char* b)
{
 
  int i,j;
  int n=strlen(a);
  int m=strlen(b);

  int* M=(int *)malloc((n+1)*(m+1)*sizeof(int));
  int tmp;
  int res=0;

  for(i=0;i <=n ; i++){
    *(M + i*(m+1))=i;
  }
  for(j=0;j <=m ; j++){
    *(M+j)=j;
  }
         
 
  for(i=1;i <=n ; i++){
    for(j=1 ; j<=m ;j++){
      tmp=Distance(*(a+i-1),*(b+j-1));
      *(M + i*(m+1) + j) = minimum(*(M +(i-1)*(m+1) + j) +1, *(M +(i-1)*(m+1) + (j-1))+tmp, *(M +i*(m+1) + (j-1)) +1);
    }
    printf("\n");
  }
  res= *(M + n*(m+1) +m);

  free(M);
  return res;
 
}
