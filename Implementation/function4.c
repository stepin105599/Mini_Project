#include<stdio.h>
#include<stdlib.h>
#include "functions.h"

void deleteallcontacts()
{
    system("del address.txt");                               // Deletes contact list
    printf("All Address have been deleted!\n");
    system("pause");
}