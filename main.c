
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "Distance.h"
#include "Minimum.h"
#include "SequenceAleatoire.h"
#include "DistanceMinRec.h"
#include"DistanceMinIter.h"

#define L 10

int main(){
    srand(time(NULL));
    char* a=SeqAleatoire(L);
    char* b=SeqAleatoire(L);
    
    int dm;   
    int dmin; 
    
    clock_t start,end;
    
    
    FILE *fit, *frec;
    fit=fopen("resultatsite.txt","a+");
    frec=fopen("resultatsrec.txt","a+");
    start = clock();
    {
      dm=DistanceMinIter(a,b);
    }
    end = clock();
    printf("Iter= %fsec\n",(end - start)/(double)CLOCKS_PER_SEC);
    fprintf(fit,"%f %d\n",(end - start)/(double)CLOCKS_PER_SEC,L);
    printf("La distance minimale des séquences \n %s\net\n %s \n= %d \n",a,b,dm);
  
    start = clock();
    {
      dmin=DistanceMinRec(a,b);
    }
    end = clock();
     
    printf(" Rec= %fsec\n",(end -start)/(double)CLOCKS_PER_SEC);
    fprintf(frec,"%f %d\n",(end - start)/(double)CLOCKS_PER_SEC,L);
    printf("La distance  minimale des séquences\n %s\net\n %s\n= %d \n",a,b,dmin);
     
    
    free(a);
    free(b);
     
    return 0;
    }        
