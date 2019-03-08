//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

void run_local_array() {
    printf("Running local array\n");

    //1. define a structure
    struct local_struct {
        int a;
        char b;
    };

    //2. declare a static array of structures
    struct local_struct static_array_of_structs[10];

    //an array of letters to use to populate our array of structs
    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    //4. assign values in a loop
    for(int i = 0; i < 10; i++) {
        static_array_of_structs[i].a = i;
        static_array_of_structs[i].b = alphabet[i];
    }

    //print out values
    for(int i = 0; i < 10; i++) {
        printf("%d - ", static_array_of_structs[i].a);
        printf("%c\n", static_array_of_structs[i].b);
    }

}
