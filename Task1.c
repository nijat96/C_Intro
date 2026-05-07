#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   
   char* text;
   char temperary; // temperary variable to store the value of text[i] during the swapping process
   int leng;
   
   text = malloc(100 * sizeof(char));
   
   printf("Please input text for reverse:\n");
   //scanf("%s", text);
   fgets(text, 100, stdin);

   
   
   printf("-------------------------------------\n");
   
   leng = strlen(text);
   
   for(int i = 0; i < leng / 2; i++)
   {
       temperary = text[i]; // store the value of text[i] in temperary
       text[i] = text[leng - 1 - i]; // assign the value of text[leng - 1 - i] to text[i]
       text[leng - 1 - i] = temperary; // assign the value of temperary to text[leng - 1 - i]
   }
   
   printf("Reversed text: %s", text);
   
   free(text);

    return 0;
}