#include<stdio.h>
#include<stdlib.h>
#include "functions.h"

void convertcontacts()                           
{
char text[1000];
    FILE *file_ptr;
    FILE *html;
    file_ptr = fopen("address.dat", "r");       // Opens file address.dat for read
    html = fopen("address.html", "w");          // Creates file address.html to write to

        system("cls");
        fputs("<html><head>", html);            // Puts data into file
        fputs("<h3><center>Address Book </center></h3>", html);
        while(fgets(text, 1000, file_ptr) != NULL)
        {
        fputs("<p>", html);        // Reads data from one file and puts it in another file
        fputs(text, html);
        }
        
        printf("All Address are Exported to HTML file \n");
        system("Pause");
        fclose(file_ptr);
        fclose(html);
}
