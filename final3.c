#include <stdio.h>
#include <string.h>

int main()
{
   char string[50];
   printf("ENTER A STRING : ");
   gets(string);
   int i = 0, j, l = 0, check = 0, counter = 0;
   char *token = strtok(string, " "), temp = '\0';
   /*char *ptr = strtok(string, " ");
  while(ptr != NULL)
	{
		counter++;
		ptr = strtok(NULL, " ");
	}*/
   char new[2 * strlen(string)];
   static int loop = 0;
   // loop through the string to extract all other tokens
   while (token != NULL)
   {
      if (token[0] >= 'A' && token[0] <= 'Z')
         check = 1;
      else if (token[0] == 'a' || token[0] == 'A' || token[0] == 'e' || token[0] == 'E' || token[0] == 'i' || token[0] == 'I' || token[0] == 'o' || token[0] == 'O' || token[0] == 'u' || token[0] == 'U')
      {
         for (l = 0; l < strlen(token); l++)
            new[loop++] = token[l];
        
         new[loop++] = 'w';
         new[loop++] = 'a';
         new[loop++] = 'y';
         new[loop++] = ' ';
      }
      else if((token[0]=='s' || token[0]=='S') && (token[1]=='c' || token[1]=='C') && (token[2]=='h' || token[2]=='H'))
      {
         for(l=3;l<strlen(token);l++)
         {
            new[loop++] = token[l];
         }
         new[loop++] = 's';
         new[loop++] = 'k';
         new[loop++] = 'a';
         new[loop++] = 'y';
         new[loop++] = ' ';
      }
      else
      {
         for (i = 0; i < strlen(token); i++)
         {
            if (token[i] != 'a' || token[i] != 'A' || token[i] != 'e' || token[i] != 'E' || token[i] != 'i' || token[i] != 'I' || token[i] != 'o' || token[i] != 'O' || token[i] != 'u' || token[i] != 'U')
            {
               if (token[0] == 'a' || token[0] == 'A' || token[0] == 'e' || token[0] == 'E' || token[0] == 'i' || token[0] == 'I' || token[0] == 'o' || token[0] == 'O' || token[0] == 'u' || token[0] == 'U')
                  break;
               temp = token[0];
               for (j = 0; j < strlen(token) - 1; j++)
               {
                  token[j] = token[j + 1];
               }
               token[j] = temp;
            }
         }
            
            for (l = 0; l < strlen(token); l++)
            {
               new[loop++] = token[l];
            }
            new[loop++] = 'a';
            new[loop++] = 'y';
            new[loop++] = ' ';
          //a:
      }
      check = 0;

     // printf("%say   ", token);
      token = strtok(NULL, " ");
   }
   new[loop]='\0';
   printf("\n\n\n");
   puts(new);
   return 0;
}