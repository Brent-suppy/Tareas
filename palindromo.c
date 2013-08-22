//Dice si una palabra es palindromo o no
#include <stdio.h>
#include <string.h>
 
int main()
{
    char pal[20];
    int i, j;
    int palindromo = 1;
    printf("Escribe una cadena: ");
    gets(pal);
    j=strlen(pal)-1;
    for(i=0; i<strlen(pal)/2; i++, j--) 
        
        if (*(pal+i)!=*(pal+j)) {
            palindromo = 0;
            
    }
    if (palindromo)
        printf("\nEs un palindromo.\n");
    else
        printf("\nNo es un palindromo.\n");
 
    return 0;
}