#include "lib_grx.h"
#include "lib1.h"

void insertion_sort (double *arr, unsigned int length)
{
	int i=0,j=0;
	double key=0;
	for (j=1;j<length;j++)
	{
		key = arr[j];
		i=j-1;
		while (i>=0 && arr[i]>key)
		{
			arr[i+1]=arr[i];
			i=i-1;
		}
		arr[i+1]=key;
	}
}

void bubble_sort(double *arr,unsigned int len)
{
	int i,j;
	for (i = 0;i < len-1;i++)
	{
		for (j = len-1;j>i;j--)
		{
			if(arr[j] < arr[j-1])
			{
				swap(&arr[j],&arr[j-1]);
			}
		}
	}
}

void swap (double *a, double *b)
{
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void convertir_buffer (char *buff_user,unsigned int size, double *ARR1)
{
	char *sig_n;
	char *temp;
	double valo;
	unsigned int j;
	temp = buff_user;
	
	for (j = 0;j<size;j++)
	{
		sig_n = strchr(temp, '\n');
		valo = atof(temp);
		temp = sig_n+1;
		ARR1[j] = valo;
	}
}

unsigned int tam_arr (char *dir_buf, unsigned int len)
{
	unsigned int j, cont = 0;
	for (j=0;j<len;j++)
	{
		if (dir_buf[j]=='\n')
		{
			cont++;
		}
	}
	return (cont);
}


