// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Write C code here
   
   char* text;
   char temperary;
   int leng;
   
   text = malloc(100 * sizeof(char));
   
   printf("Please input text for reverse:\n");
   //scanf("%s", text);
   fgets(text, 100, stdin);

   
   
   printf("-------------------------------------\n");
   
   leng = strlen(text);
   
   for(int i = 0; i < leng / 2; i++)
   {
       temperary = text[i];
       text[i] = text[leng - 1 - i];
       text[leng - 1 - i] = temperary;
   }
   
   printf("Reversed text: %s", text);
   
   free(text);

   scanf("");

    return 0;
}