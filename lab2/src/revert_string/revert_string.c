#include "revert_string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RevertString(char *str)
{
	int l=strlen(str) - 1;
    char *new_str=(char*)malloc(sizeof(char)*l);
    int i;
    for(i = 0; i <= l; i++){
    new_str[i]=str[l-i];
    }
    strcpy(str, new_str);
    free(new_str);
}

