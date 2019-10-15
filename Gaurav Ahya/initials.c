#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char *name = "Ram Kumar osgifs gdofkgdm asfgkadgml";

    int len = strlen(name);
    int space_pos = 0;

    for(int i=0; i<len; i++){
        if(*(name+i) == ' ')
            space_pos = i;
    }

    char *surname = malloc(sizeof(char) * 100); 
    strcpy(surname, name+space_pos);

    printf("%s\n", surname);

    return 0;
}