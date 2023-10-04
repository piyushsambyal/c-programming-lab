#include <stdio.h>
#include <math.h>

int main(){
    char x;
    printf("Enter character: ");
    scanf("\n%c", &x);

    if (x == 'a' || x == 'A' || x == 'e' || x == 'E' ||x == 'i' || x == 'I' ||x == 'o' || x == 'O' ||x == 'U' || x == 'U' )
    {
        printf("character %c is a vowel\n",x);
    }else{
        printf("character %c is a consonant\n",x);
    }
    
    return 0;
}