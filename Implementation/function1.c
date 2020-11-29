#include<stdio.h>
#include<stdlib.h>
#include "functions.h"
void addcontact()      
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

	      printf("Please Enter City: ");           
          fputs(towninput, file_ptr);
          fflush(stdin);
	      fgets(town, 40, stdin);
          fputs(town, file_ptr);        


	      printf("Please Enter Postcode or Zipcode: ");       
          fputs(postinput, file_ptr);
          fflush(stdin);
          fgets(post, 6, stdin);
          fputs(post, file_ptr);
		  
       	  
		  printf("Please Enter Country: ");          
          fputs(cityinput, file_ptr);
          fflush(stdin);
	      fgets(city, 40, stdin);
          fputs(city, file_ptr);

          printf("Please Enter Phone Number: ");             
          fputs(telinput, file_ptr);
          fflush(stdin);
	      fgets(tel, 10, stdin);
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
