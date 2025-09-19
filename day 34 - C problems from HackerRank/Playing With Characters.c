#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[100], sen[100];
    //Character input
    scanf("%c", &ch);
    //String input 
    scanf("%s", &s);
    //Sentence input
    scanf("\n");
    scanf("%[^\n]%*c",&sen);
    
    printf("%c", ch );
    printf("\n%s", s);
    printf("\n%s", sen);
    
    return 0;
    
}
