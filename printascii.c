#include <stdio.h>
#include <conio.h>
#include <wchar.h>

typedef struct{
	unsigned int ascciart_matrix_rprs[9][27];
	unsigned int ascciart_id;
}ascciart_struct;

//ascciart_struct ascciart[1];


ascciart_struct ascciart[] = {
   
    {
    
	/*
	ASCII value of character ▓ = 178
	ASCII value of character ░ = 176
	ASCII value of character █ = 219
	ASCII value of character ▄ = 220
	
	ASCII value of character ▌ = 221
	
	ASCII value of character ▐ = 222
	
	ASCII value of character ▀ = 223
	*/

	
	{
		{176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176},
		{219,219,219,219,219,219,220,219,219,219,220,219,219,219,219,219,219,219,219,219,220,176,176,176,176,176,176},
		{178,178,178,178,178,178,219,176,176,176,219,176,176,176,219,176,176,219,176,176,176,219,219,219,176,176,176},
		{178,178,178,178,178,178,219,176,176,176,219,176,176,176,219,176,176,219,176,176,176,219,176,176,219,176,176},
		{178,178,178,178,178,178,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,219,176,176},
		{178,178,178,178,178,178,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176},
		{178,178,178,178,178,178,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,219,176,176,176,176},
		{178,178,178,178,178,178,219,219,219,219,219,176,176,176,176,176,176,176,176,176,219,219,176,176,176,176,176},
		{219,219,219,219,219,223,176,176,176,176,223,223,219,219,219,219,219,219,219,219,176,176,176,176,176,176,176},

	}


	,1
	},

};

int main()
{
    int i;

    /* Print ASCII values from 0 to 255 */
	/*
    for(i=0; i<=255; i++) 
    {
        printf("ASCII value of character %c = %d\n", i, i);
    }
	*/
    printf("ASCII value of character %c = %d\n", 178, 178);
    printf("ASCII value of character %c = %d\n", 176, 176);
	
    printf("ASCII value of character %c = %d\n", 219, 219);
    printf("ASCII value of character %c = %d\n", 220, 220);
    printf("ASCII value of character %c = %d\n", 221, 221);
    printf("ASCII value of character %c = %d\n", 222, 222);
    printf("ASCII value of character %c = %d\n", 223, 223);
    printf("ASCII value of character %c = %d\n", 254, 254);
	
	
	char ascii ='░';
    printf("░ = %d\n", ascii);
	
	
	for(int i = 0; i< 10;i++){
			for(int j = 0; j < 27;j++)
				printf("%c",ascciart[0].ascciart_matrix_rprs[i][j]);
		printf("\n");
	}
	
	getche();
    return 0;
}