#include <stdio.h>
#include "ReqHeader.h"
int main (int argc, char **argv){

   printf("******--****\n\n");

   FILE *fp;  
   char ch;  
   fp = fopen("Store_Data.txt", "r+");
   
      while ( 1 ) {  
   ch = fgetc ( fp ) ;  
   if ( ch == EOF )  
         break ;  
   printf("%c",ch) ;  
      }  
fclose (fp ) ;  

return 0;
}  

