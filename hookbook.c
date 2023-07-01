/*
* hookbook.c
* Adnan Bseisu, dab262
* CPSC 223, PSET 3
* 3/11
* Main file which is responsible for taking in command line arguments, reading from an infile, sorting and printing out the names in that file
*/

#include <stdio.h>

#include "pirate_list.h"
#include "libhookbook.h"

int main(int argc, char *argv[])
{

    // check that one command line argument is entered
    if (argc != 2)
    {
        // error
        return 1;
    }

    // create list of pirates using list create function
    pirate_list *pirates = list_create();

    // read names in the given file and check if they were successfully read 
    int check_read_error = read_names(argv[1], pirates);

    // pirate file cannot be opened, program returns 1
    if (check_read_error == 1){
        return 1;
    }
    

    // pirate file correctly opened, so we can print the sorted pirate names in pirates
    print_list(pirates);

    // free pirate_list
    list_destroy(pirates);

}
