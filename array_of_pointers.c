//
// Created by Ivo Georgiev on 2019-03-07.
//
#include <stdio.h>
#include <stdlib.h>

void run_array_of_pointers() {
    printf("Running array of pointers\n");

    //1. define a structure
    struct some_struct {
        int a;
        char b;
    };

    //an array of letters to use to populate our structures
    char alphabet[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    //2. allocate a dynamic array of pointers to structures
    //the type of the array variable is "some_struct"
    struct some_struct* dynamic_array[10];

    //4. assign values in a loop
    for(int i = 0; i < 10; i++) {
        dynamic_array[i] = (struct some_struct*) malloc(sizeof(struct some_struct));
    }

    //populate the structures
    for(int i = 0; i < 10; i++) {
        dynamic_array[i]->a = i;
        dynamic_array[i]->b = alphabet[i];
    }

    //print the array
    for(int i = 0; i < 10; i++) {
        printf("address of pointer at dynamic_array[%d] = %p\n", i, dynamic_array[i]);
    }

    //free up memory
    for(int i = 0; i < 10; i++) {
        free(dynamic_array[i]);
        dynamic_array[i] = NULL;
    }

}
