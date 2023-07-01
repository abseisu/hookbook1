/*
* libhookbook.c
* Adnan Bseisu, dab262
* CPSC 223, PSET 3
* 3/11
* Implements the functions read_names and print_list, both of which are used in main to read the names from the infile and then print them once sorted.
*/

#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "pirate_list.h"
#include "libhookbook.h"
#include "pirate.h"

#define MAX_NAME_LENGTH 64

int read_names(char* file_name, pirate_list* pirates){
    // read file from command line
    FILE* pirate_file = fopen(file_name, "r");

    // check that file was correctly read
    if (pirate_file == NULL)
    {
        // Exit with an error code
        exit(1);
    }

    char name [MAX_NAME_LENGTH + 1]; // Allocate an array to hold a pirate's name

    // Read pirate names from the file until there are no more left to read
    while (fscanf(pirate_file, "%64[^\n]\n", name) > 0){

        // Create a new pirate struct and assign the name to it
        pirate* new_p = malloc(size_of_pirate());
        change_name(new_p, name);

        // Insert the new pirate into the pirate_list
        new_p = list_insert(pirates, new_p, list_length(pirates) - 1);
    }

    // Close the file and return success
    fclose(pirate_file);
    return 0;
}

void print_list(pirate_list *pirates) {

    list_sort(pirates);
    for (size_t i = 0; i < list_length(pirates); i++) {
        pirate *p = list_access(pirates, i);
        printf("%s\n", get_name(p));
    }

}
