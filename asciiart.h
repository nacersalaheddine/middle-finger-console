#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#if defined(_WIN32) || defined(WIN32) || defined(__CYGWIN__) || defined(__MINGW32__) || defined(__BORLANDC__)
	#ifndef OS_WIN
		#define OS_WIN
	#endif
#elif __linux__
#define OS_LINUX
#elif __APPLE__
// Mac OS, not sure if this is covered by __posix__ and/or __unix__ though...
#define OS_APPLE
#endif


#ifdef OS_WIN
	#include<windows.h>
#elif OS_LINUX
	//LINUX STUFF
#elif OS_APPLE
	//APPLE STUFF
#endif


#ifndef COLS_NUMBER
#define COLS_NUMBER 35
#endif
#ifndef ROWS_NUMBER
#define ROWS_NUMBER	15
#endif
#ifndef ASCII_ART_NUMBER
#define ASCII_ART_NUMBER 4
#endif

typedef struct{
	unsigned int ascciart_matrix_rprs[ROWS_NUMBER][COLS_NUMBER];
	unsigned int ascciart_id;
}ascciart_struct;
	
ascciart_struct ascciart[ASCII_ART_NUMBER];
void init();
void show_asciiart(unsigned int asciiart[][COLS_NUMBER]);