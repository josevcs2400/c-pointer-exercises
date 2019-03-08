//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <stdlib.h>

void run_monolithic_array() {
    printf("Running monolithic array\n");

    //1. define a structure
    struct mono_struct {
        int a;
        char b;
    };

    //an array of letters to use to populate out
    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};

    //2. allocate a dynamic array of structures.
    //the type of the array variable is "mono_struct"
    struct mono_struct* dynamic_array = (struct mono_struct*) malloc(sizeof(struct mono_struct) * 100);

    //4. assign values in a loop
    for(int i = 0; i < 100; i++) {
        dynamic_array[i].a = i;
        dynamic_array[i].b = alphabet[rand() % 9]; //assigns random char
        printf("index %d = %d - %c\n", i, dynamic_array[i].a, dynamic_array[i].b);
    }

    //5. free all dynamic memory
    free(dynamic_array);
    dynamic_array = NULL;

}
