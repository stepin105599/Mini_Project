#include <stdio.h>
#include<stdlib.h>
#include "functions.h"

int main()
{
int choice;
	system("cls");
    printf("Address Book");
    printf("Options \n \n");
    printf("1. Add a new Contact \n");                      
    printf("2. View all Address \n");                      
    printf("3. Export Address as a HTML flie \n");           
    printf("4. Delete all Address \n");                  
    printf("5. Exit \n \n");                                
    printf("Please choose a Option: ");
    scanf("%d", &choice);
    
    switch(choice) {
    case 1: addcontact(); break;                            
    case 2: viewcontact(); break;                           
    case 3: convertcontacts();	break;                       
	case 4: deleteallcontacts(); break;
    case 5: exit(1); break;
    default: printf("You did not enter a correct number! \n");    
            system("pause"); break;
    }
            
return 0;
}




