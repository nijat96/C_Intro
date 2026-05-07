#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char* text;
    int leng;
    
    text = malloc(100 * sizeof(char));
    
    printf("Please input text for check Polindrome or not:\n");
    scanf("%s", text);
    leng = strlen(text);
    // Lower case
    for(int i = 0; i < leng; i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = text[i] + 32;
        }
    }
    
    for(int i = 0; i < (leng / 2); i++)
    {
        if(text[i] != text[leng - 1 - i])
        {
            printf("\"%s\" is not Polindrome", text);
            return 0;
        }
    }
    printf("\"%s\" is Polindrome", text);
    
    
    return 0;
}