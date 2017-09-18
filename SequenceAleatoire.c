#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



char* SeqAleatoire(int n)
{
  int flag;
  int i;
  char* chaine=malloc((n+1)*sizeof(char));


  for(i=0;i<n;i++)
    {
    flag=rand()%4;
    if(flag==0)
      *(chaine+i)='A';
    if(flag==1)
      *(chaine+i)='C';
    if(flag==2)
      *(chaine+i)='G';
    if(flag==3)
      *(chaine+i)='T';
    }

  *(chaine+i)='\0';
  return chaine;
}
