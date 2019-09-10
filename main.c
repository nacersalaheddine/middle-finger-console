#include "asciiart.h"

int main(){

	int i = 0;
	#ifdef OS_WIN
		system("color 0b");
	#elif OS_LINUX
		//LINUX STUFF
	#elif OS_APPLE
		//APPLE STUFF
	#endif


	
	for(;;){
		init();
		show_asciiart(ascciart[i++%3].ascciart_matrix_rprs);
		
		
		#ifdef OS_WIN
			Sleep(1000);
			system("cls");
		#elif OS_LINUX
			//LINUX STUFF
		#elif OS_APPLE
			//APPLE STUFF
		#endif




	}



	getche();
	return EXIT_SUCCESS;
}

