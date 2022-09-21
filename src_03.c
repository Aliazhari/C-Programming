/* ******************************************
#  Author : Ali Azhari 
#  Created On : Sun Sep 21 2022
#  File : src_03.c
# ****************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// malloc and calloc

int main() {

    int* p =  malloc(3 * sizeof(int));
    p[1] = 3;
    p[2] = 4;
    printf("---malloc---\n");
    printf("p[1] %d\n", p[1]);
    printf("p[2] %d\n", p[2]);
    printf("p[0] %d\n", p[3]);
    free(p);  // You must free the memmory.

    int* q =  calloc(3, sizeof(int));
    q[1] = 3;
    q[2] = 4;
     printf("---calloc---\n");
    printf("q[1] %d\n", q[1]);
    printf("q[2] %d\n", q[2]);
    printf("q[0] %d\n", q[3]);
    free(q);  // You must free the memmory.

}
