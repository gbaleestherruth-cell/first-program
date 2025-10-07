#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char chaine[] =  "texte chaine",  *suitechaine = NULL;
suitechaine = strchr(chaine, 'c');
if (suitechaine != NULL)
{
    printf("la fin de la chaine du premier c  : %s" ,  suitechaine); 
}

    return 0;
}