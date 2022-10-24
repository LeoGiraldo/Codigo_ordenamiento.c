#include "lib_grx"
#include "lib1.h"

void main (int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("\n ERROR La cantidad de argumentos ingresados no es correcta\n");
		exit (1);
	}

	clock_t inicio_tiempo, fin_tiempo;
	double tiempo = 0;

	char *direc_buffer;
	unsigned int ls_buff_len;
	direc_buffer = read_file_to_buffer (argv[2], &ls_buff_len);

	inicio_tiempo = clock();

	unsigned int TAMA;
	TAMA = tam_arr(direc_buffer,ls_buff_len);
	double ARR[TAMA];
	convertir_buffer (direc_buffer, TAMA, &ARR[0]);

	fin_tiempo = clock();
	tiempo = (double)(fin_tiempo-inicio_tiempo)/CLOCKS_PER_SEC;

	printf("\n El primer tiempo es: %f\n",tiempo);

	int i;
	i = atoi (argv[1]);

	if (i==1)
	{
		inicio_tiempo = clock();
		insertion_sort(&ARR[0], TAMA);
		fin_tiempo = clock();
	}
	else
	{
		inicio_tiempo = clock();
		bubble_sort (&ARR[0],TAMA);
		fin_tiempo = clock();
	}

	tiempo = (double)(fin_tiempo-inicio_tiempo)/CLOCKS_PER_SEC;

	printf ("\n El segundo tiempo es: %f\n", tiempo);

	
	free_buffer_mem(direc_buffer);
	inicio_tiempo = clock();
	write_dArray_to_file (&ARR[0],TAMA,argv[3]);
	fin_tiempo = clock();
	tiempo = (double)(fin_tiempo-inicio_tiempo)/CLOCKS_PER_SEC;
	printf("\n El tercer tiempo es: %f\n",tiempo);
}



