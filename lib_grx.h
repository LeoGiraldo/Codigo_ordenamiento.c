#ifndef LIB_GRX_H
#define LIB_GRX_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void insertion_sort (double *arr, unsigned int length);
void bubble_sort (double *arr, unsigned int len);
void swap (double *a, double *b);
void convertir_buffer (char *buff_user, unsigned int size, double *ARR1);
unsigned int tam_arr(char *dir_buf, unsigned int len);

char *read_file_to_buffer (const char *path,unsigned int *size);
void free_buffer_mem(char *b);
void write_dArray_to_file (const double *arr,unsigned int len,const char *path);

#endif


