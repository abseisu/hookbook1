/*
* pirate.h
* Adnan Bseisu, dab262
* CPSC 223, PSET 3
* 3/11
* Header file that defines the functions associated with the opaque Pirate struct 
*/

#ifndef __PIRATE_H__
#define __PIRATE_H__

// Pirate struct
struct Pirate; 

// Pirate type
typedef struct Pirate pirate;

// Size of pirate function 
int size_of_pirate();

// Change name of pirate being pointed to
void change_name(pirate* p, char* new_name);

// Get name of pirate being pointed to
char* get_name(pirate* p);

#endif
