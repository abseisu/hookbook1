/*
* libhookbook.h
* Adnan Bseisu, dab262
* CPSC 223, PSET 3
* 3/11
* Defines two helper functions implemented in libhookbook.c and used in hookbook.c
*/

#ifndef __LIB_HOOKBOOK_H__
#define __LIB_HOOKBOOK_H__

#include <stdlib.h>

int read_names(char* file_name, pirate_list* pirates);

void print_list(pirate_list *pirates);

#endif
