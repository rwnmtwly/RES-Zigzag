#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please, enter a letter: \n");
    char c;
    scanf("%c",&c);
    if (c=='a'||c=='A'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'||c=='e'||c=='E' )
        printf("You entered a VOWL");
    else printf("You entered a consonant");
    return 0;
}
