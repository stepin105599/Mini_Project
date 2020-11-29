#include<stdio.h>
#include<stdlib.h>
#include "functions.h"

void viewcontact()                             
{
char text[50];
char *nl = { "\n" };

    FILE *file_ptr;
    file_ptr = fopen("address.dat", "r");     // Opens file address.dat for reading
    if(file_ptr != NULL)
    {
         system("cls");                       // Clears Screen
	     printf("Current Entries: \n");
         while(fgets(text, 50, file_ptr) != NULL)         
         {
            printf("%s", text);                           
            printf(nl);
         }
         printf("End of File \n");
         system("Pause");
         fclose(file_ptr);
      }
}
