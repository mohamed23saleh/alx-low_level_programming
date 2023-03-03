#include <stdio.h>
#include <stdlib.h>

char *_strcat(char *dest , char *src){

char dest[100] ="mohammed";
char src[100]="osama" ;
 int i , j;
 for (i = 0 ; dest[i]!='\0';i++);
 for (j = 0 ; src[j] != '\0'; j++,i++){
    dest[i]=src[j];
 }
    dest[i] = '\0';

    return dest;
}
