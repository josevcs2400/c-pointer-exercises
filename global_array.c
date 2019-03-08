//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

//1. define a structure
struct global_struct {
    int a;
    char b;
};

//2. declare a static array of structures outside of a function
struct global_struct static_array_of_structures[10]; //10 values

void run_global_array() {

    printf("Running global array\n");

    //an array of letters to use to populate our array of structs
    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    //4. assign values in a loop
    for(int i = 0; i < 10; i++) {
        static_array_of_structures[i].a = i;
        static_array_of_structures[i].b = alphabet[i];
    }

    //print out values
    for(int i = 0; i < 10; i++) {
        printf("%d - ", static_array_of_structures[i].a);
        printf("%c\n", static_array_of_structures[i].b);
    }

}
