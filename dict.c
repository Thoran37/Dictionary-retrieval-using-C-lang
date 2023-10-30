#include <stdlib.h>
#include <string.h>
#define MAX_WORDS 100
struct dictionary
  {
  	char words[50];
  	char defin[200];
  }book[MAX_WORDS];
typedef struct dictionary WordDef; 	
int i=0;
int load_dictionary(char *fl) 
{
  FILE *f;
  char line[250];
  f=fopen(fl, "r");
  if (f==NULL)
    {
      printf("%s file does not exist", fl);
      return 0;
    }
  else 
    {
      while(fgets(line,sizeof(line),f)!=NULL) 
        {
          strcpy(book[i].words,strtok(line,"    "));
          strcpy(book[i].defin,strtok(NULL,"\n"));
          i++;
        }
      return 1;
    }
  fclose(f);   
}
int lookup(char *word)
{
  int j,flag=0;
  for(j=0;j<i;j++)
    if(!strcmp(book[j].words,word))
      {
        return j;
        flag=1;
      }
  if(flag==0) 
    return -1;    
}