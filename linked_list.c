//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <stdlib.h>

//1. declare a node structure for a singly-linked list
struct some_struct_node {
    int data;
    struct some_struct_node* adjacent_struct_node;
};

//2. declare the lists head and tail pointers
struct some_struct_node* head = NULL;
struct some_struct_node* tail = NULL;
//declare the previous pointer
struct some_struct_node* previous = NULL;
//declare a temp node
struct some_struct_node* temp_node = NULL;

void list_insert() {
    //nodes have to be inserted in ascending order
    temp_node = (struct some_struct_node*) malloc(sizeof(struct some_struct_node));
    temp_node->data = 333; //remember, -> is the same the * dereference operator!!!
    temp_node->adjacent_struct_node = NULL;
    if(head == NULL) {
        head = temp_node; //assign first created node as the head pointer
    }
    else {
        previous->adjacent_struct_node = temp_node;
        tail = temp_node;
        tail->adjacent_struct_node = NULL;
    }
    previous = temp_node;
}

void run_linked_list() {
    printf("Running linked list\n");

    //3. initialize the linked list
    for(int i = 0; i < 10; i++) {
        list_insert();
    }
    //free dynamic variables
    free(temp_node);
    temp_node = NULL;

    struct some_struct_node* next_node = NULL;
    for(int i = 0; i < 10; i++) {
        if(i == 0) {
            printf("node 0 data = %d, adjacent_struct_node = %p -> ", head->data, head->adjacent_struct_node);
            next_node = head->adjacent_struct_node;
        }
        else {
            printf("node %d data = %d, adjacent_struct_node = %p -> ", i, next_node->data, next_node->adjacent_struct_node);
            next_node = next_node->adjacent_struct_node;
        }
    }
    printf("\n\nthe head node = %p", head);
    printf("\nthe tail node = %p", tail);

}
