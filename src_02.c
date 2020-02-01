/* ******************************************
#  Author : Ali Azhari 
#  Created On : Sun Jan 26 2020
#  File : src_02.c
# ****************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Date types

int main() {

    printf("Basic types:\n");
    printf("\tchar: char is a single byte that is capable to hold one character\n");
    printf("\t\tThe number of bytes in a char %lu\n", sizeof(char));
    printf("\t\tThe number of bits in a byte %d\n", CHAR_BIT);
    printf("\t\tThe minimum value of CHAR = %d\n", CHAR_MIN);
    printf("\t\tThe maximum value of CHAR = %d\n", CHAR_MAX);
    printf("\t\tThe minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
    printf("\t\tThe maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
    printf("\t\tThe maximum value of UNSIGNED CHAR = %d\n\n", UCHAR_MAX);

    printf("\tint: an integer which reflcts to the the natural size of integers on the machine machine\n");
    printf("\t\tThe number of bytes in an int %lu\n", sizeof(int));
    printf("\t\tThe minimum value of INT = %d\n", INT_MIN);
    printf("\t\tThe maximum value of INT = %d\n", INT_MAX);
    printf("\t\tThe maximum value of UNSIGNED INT = %u\n\n", UINT_MAX);

    
    printf("\tQualifies: Short & long: These are added to data type \"int\"\n");
    printf("\t\tshort:\n");
    printf("\t\t\tThe minimum value of SHORT INT = %d\n", SHRT_MIN);
    printf("\t\t\tThe maximum value of SHORT INT = %d\n", SHRT_MAX); 
    printf("\t\tlong:\n");
    printf("\t\t\tThe minimum value of LONG = %ld\n", LONG_MIN);
    printf("\t\t\tThe maximum value of LONG = %ld\n", LONG_MAX);
    printf("\t\t\tThe maximum value of UNSIGNED LONG = %lu\n\n", ULONG_MAX);
   
    return (0);
}