#include <stdio.h>

// .data
int data_seg = 97; // initialized variable stored in DS (data segment)

// .bss
int bss_seg1; // Uninitialized variable in bss

void get_pointers(void)
{
    // .bss
    static int bss_seg2; // Uninitialized variable in bss

    // stack
    int stack_var = 3;
    
    // retrieving addresses
    // value pointed to by = *
    
    // data segment
    int *data_pointer = &data_seg;
    
    // bss address
    int *bss_pointer = &bss_seg1;
    // bss static address
    int *bss_pointer2 = &bss_seg2;

    // code segment
    int *code_pointer = (int *)&get_pointers;
    
    // stack segment
    int *stack_pointer = &stack_var;


    printf("\n1)  .data Segment (DS) : %p", data_pointer);
    printf("\n2)  BSS : %p", bss_pointer);
    printf("\n3)  BSS static : %p", bss_pointer2);
    
    printf("\n4)  Code segment : %p", code_pointer);

    printf("\n5)  Stack segment : %p", stack_pointer);
}

int main()
{
    get_pointers();
    return 0;
}
