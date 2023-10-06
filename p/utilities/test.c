// printf() scanf()
#include <stdio.h>
// write()
#include <unistd.h>
// malloc() and free()
#include <stdlib.h>
/*
#define STDIN_FILENO 0
char buffer[10];
write(1, "Please enter data:", 19);
read(STDIN_FILENO, buffer, 10);
*/

// adds a character at the end of a string
void ft_add(char *source, char character)
{
    int length;

    length = 0;
    while (source[length] != '\0') length ++;

    *(source + length) = character;
    *(source + (length + 1)) = '\0';
}

int main(void)
{
    //char my_string[12] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};
    //printf("%p\n", &my_string[1]);

   
   /* char *my_string = (char*) malloc(5 * sizeof(char));

    *my_string = 'a';
    *(my_string + 1) = 'b';
    *(my_string + 2) = 'c';
    *(my_string + 3) = 'd';
    *(my_string + 4) = 'e';

    printf("MY STRING:%c%c%c%c%c%c\n\n", *my_string, *(my_string + 1), *(my_string + 2), *(my_string + 3), *(my_string + 4), *(my_string + 5));

    ft_add(my_string, 'H');

    printf("NEW STRING:%c%c%c%c%c%c\n", *my_string, *(my_string + 1), *(my_string + 2), *(my_string + 3), *(my_string + 4), *(my_string + 5));
*/
  // INTRODUCTION TO POINTERS WITH DYNAMIC MEMORY ALLOCATION
    // returns NULL if the memory is not enough to allocate
   /* int* pointer = (int*) malloc(5 * sizeof(int));

    *pointer = 5;           // same as: pointer[0] = 5;
    *(pointer + 1) = 10;    // same as: pointer[1] = 10;
    *(pointer + 2) = 15;    // same as: pointer[2] = 15;
    *(pointer + 3) = 20;    // same as: pointer[3] = 20;
    *(pointer + 4) = 25;    // same as: pointer[4] = 25;

    printf("-- LIST OF POINTERS --\n");

    printf("FIRST POINTER:\t%p (pointer)\n", pointer);
    printf("FIRST POINTER:\t%p (pointer[0])\n", &pointer[0]);
    printf("FIRST POINTER:\t%p (pointer[0])\n", pointer + 20);
    printf("SECOND POINTER:\t%p\n", pointer + 1);
    printf("THIRD POINTER:\t%p\n", pointer + 2);
    printf("FOURTH POINTER:\t%p\n", pointer + 3);
    printf("FIFTH POINTER:\t%p\n", pointer + 4);
    
    printf("\n");
    printf("-- LIST OF VALUES --\n");
    printf("OLD VALUE:\t%d\n", *(pointer + 20));
    printf("FIRST VALUE:\t%d\n", *(pointer));
    printf("SECOND VALUE:\t%d\n", *(pointer + 1));
    printf("THIRD VALUE:\t%d\n", *(pointer + 2));
    printf("FOURTH VALUE:\t%d\n", *(pointer + 3));
    printf("FIFTH VALUE:\t%d\n", *(pointer + 4));*/
/*
    int *my_value = (int*) malloc(5 * sizeof(int));

    *my_value = 1;
    *(my_value + 1) = 2;
    *(my_value + 2) = 3;
    *(my_value + 3) = 4;
    *(my_value + 4) = 5;

    free(my_value);

    printf("\n\nmy_val_p 1 = %p", my_value);
    printf("\nmy_val 1 = %d", *my_value);

    printf("\n\nmy_val_p 2 = %p", my_value + 1);
    printf("\nmy_val 2 = %d", *(my_value + 1));

    printf("\n\nmy_val_p 3 = %p", my_value + 2);
    printf("\nmy_val 3 = %d", *(my_value + 2));

    printf("\n\nmy_val_p 4 = %p", my_value + 3);
    printf("\nmy_val 4 = %d", *(my_value + 3));

    printf("\n\nmy_val_p 5 = %p", my_value + 4);
    printf("\nmy_val 5 = %d", *(my_value + 4));

    

   

    *(my_value + 5) = 6;

    printf("\n\nmy_val_p 1 = %p", my_value + 5);
    printf("\nmy_val 1 = %d", &my_value[5]);

    printf("\n\nMEMORY = %d", sizeof(my_value));
*/
/*
    // ARITHMETIC OPERATIONS WITH POINTERS
    int hexa_value = 0x1;
    int my_variable = 10;

    printf("HEXA VALUE = %d\n", hexa_value);
    printf("MY VARIABLE = %d\n", my_variable);
    printf("POINTER = %p\n", &my_variable + 1);
    printf("POINTER = %p\n", &my_variable + hexa_value);
*/   
/*  // ALLOCATING DYNAMIC MEMORY
    int *basic_pointer, *contiguous_pointer;
    int times = 5;

    basic_pointer = (int*) malloc(times * sizeof(int));
    contiguous_pointer = (int*) calloc(times, sizeof(int));

    printf("basic_pointer occupies %d bytes\n", sizeof(basic_pointer));
    printf("contiguous_pointer occupies %d bytes\n", sizeof(contiguous_pointer));
    printf("an int occupies %d bytes\n", sizeof(int));

    free(basic_pointer);
    free(contiguous_pointer);
*/
/*  // RE-ALLOCATING MEMORY
    int *pointer;
    int starting_elements = 10;
    int desired_elements = 15;

    pointer = (int*) malloc(starting_elements * sizeof(int));

    if (pointer != ((void*)0))
    {
        // ASSIGN VALUES IN THE ARRAY
        for (int i = 0; i < starting_elements; i++)
        {
            pointer[i] = i + 1;
        }
        // ACCESS VALUES IN THE ARRAY
        for (int i = 0; i < starting_elements; i++)
        {
            printf("ELEMENT %d IS %d\n", i, pointer[i]);
        }
        printf("\n\n");

        pointer = realloc(pointer, desired_elements * sizeof(int));

        // ASSIGN VALUES IN THE ARRAY
        for (int i = starting_elements; i < desired_elements; i++)
        {
            pointer[i] = i + 1;
        }
        // ACCESS VALUES IN THE ARRAY
        for (int i = 0; i < desired_elements; i++)
        {
            printf("ELEMENT %d IS %d\n", i, pointer[i]);
        }

        free(pointer);
    }
    else printf("the pointer is null\n");
*/
    return (0);
}