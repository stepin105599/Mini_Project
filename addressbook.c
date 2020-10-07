 #include <stdio.h>
#include<stdlib.h>
void addcontact();
void viewcontact();
void convertcontacts();
void deleteallcontacts();

int main()
{
int choice;
	system("cls");
    printf("Address Book");
    printf("Options Currently Available: \n \n");
    printf("1. Add a new Contact \n");                      // Adds new Contact
    printf("2. View all Contacts \n");                      // Views Contacts
    printf("3. Export Contacts to HTML flie \n");           // Exports all Contacts to HTML file
    printf("4. Delete all Contacts \n");                    // Deletes all Contacts
    printf("5. Exit \n \n");                                // Closes Programming
    printf("Please choose a Option: ");
    scanf("%d", &choice);
    
    switch(choice) {
    case 1: addcontact(); break;                            // Add Contact
    case 2: viewcontact(); break;                           // View Contacts
    case 3: convertcontacts(); break;                       // Converts Contacts
    case 4: deleteallcontacts(); break;                     // Deletes Contacts
    case 5: exit(1); break;
    default: printf("You did not enter a correct number! \n");    // Incorrect Input
            system("pause"); break;
    }
            
return 0;
}

void addcontact()       // Control for adding new contact
{
char name1[20];         // First name
char name2[30];         // Surname
char addr[60];         
char city[40];        
char town[40];        
char post[10];        
char tel[15];         
char email[40];       
char *line = { "-------------------------------- \n" };
char *nameinput1 = { "First Name: " };      
char *nameinput2 = { "Second Name: " };     
char *addrinput = { "Address: " };
char *cityinput = { "City: " };
char *towninput = { "Town: " };
char *postinput = { "Post/Zip Code: " };
char *telinput = { "Phone Number: " };
char *emailinput = { "Email Address: " };
char *nl = { "\n" };

system("cls");

      FILE *file_ptr;
      file_ptr = fopen("address.dat", "a");      // Saves all input to address.dat for appending
      if(file_ptr != NULL)
      {
          printf("Input Started \n");
          fputs(line, file_ptr);
	  
          printf("Please Enter First Name: ");     
          fputs(nameinput1, file_ptr);
          fflush(stdin);
          fgets(name1, 20, stdin);
	      fputs(name1, file_ptr);
         
	      printf("Please Enter Second Name: ");    
          fputs(nameinput2, file_ptr);
          fflush(stdin);
	      fgets(name2, 30, stdin);
          fputs(name2, file_ptr);
         
	      printf("Please Enter Address: ");        
          fputs(addrinput, file_ptr);
          fflush(stdin);
	      fgets(addr, 60, stdin);
          fputs(addr, file_ptr);

	      printf("Please Enter Town: ");           
          fputs(towninput, file_ptr);
          fflush(stdin);
	      fgets(town, 40, stdin);
          fputs(town, file_ptr);        

    
       	  printf("Please Enter City: ");          
          fputs(cityinput, file_ptr);
          fflush(stdin);
	      fgets(city, 40, stdin);
          fputs(city, file_ptr);

	      printf("Please Enter Postcode or Zipcode: ");       
          fputs(postinput, file_ptr);
          fflush(stdin);
          fgets(post, 10, stdin);
          fputs(post, file_ptr);

          printf("Please Enter Phone Number: ");             
          fputs(telinput, file_ptr);
          fflush(stdin);
	      fgets(tel, 15, stdin);
          fputs(tel, file_ptr);
          
          printf("Please Enter Email Address: ");            
          fputs(emailinput, file_ptr);
          fflush(stdin);
	      fgets(email, 40, stdin);
          fputs(email, file_ptr);
          
          printf("Information Saved \n"); 
          system("pause");
	}
      fclose(file_ptr);
}

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
        
        printf("All contacts are Exported to HTML file \n");
        system("Pause");
        fclose(file_ptr);
        fclose(html);
}

void deleteallcontacts()
{
    system("del address.txt");                               // Deletes contact list
    printf("All contacts have been deleted!\n");
    system("pause");
}
