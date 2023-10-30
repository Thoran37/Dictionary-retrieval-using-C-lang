#include <stdio.h>
#include "dict.c"
int main() 
{
  int x,j,h,k;
  char fl[50], word[50];
  printf("Enter dictionary filename\n");
  scanf("%s", fl);
  h=load_dictionary(fl);
  if(h==0)
	  exit(1);
  else
    {
	  printf("Enter a word to know its definition\n");
	  while(strcmp(word,"exit"))
	    {  
				int flag=0;	
				scanf("%s", word);
				k=lookup(word);
				for(j=0;j<i;j++)
		    if(k==j)
		      {
						printf("%s\t%s\n",book[k].words,book[k].defin);
						flag=1;
						break;
		      }
		  	if(flag==0) 
		    	printf("%s is not found in the uploaded dictionary\n",word);
	    }
	}
  return 0;
}