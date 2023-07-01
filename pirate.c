/*
* pirate.c
* Adnan Bseisu, dab262
* CPSC 223, PSET 3
* 3/11
* Implements the Pirate struct and associated functions (given that I have made it opaque)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pirate.h"


// this struct can be adjusted for more fields in the future
struct Pirate
{
    char* name; 
};

int size_of_pirate(){
    return sizeof(pirate);
}

void change_name(pirate* p, char* new_name){
    // allocate memory for the new name
    p->name = malloc(64 * sizeof(char)); 
    // copy new name into allocated memory
    strcpy(p->name, new_name);
}

char* get_name(pirate* p){
    return p->name;
}
