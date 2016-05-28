
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <ncurses.h>
#include <fstream>


void CreandoMatriz (char** m);
void llenadodelTablero (char** m);
void liberar_Memoria(char** m);
void Imprimir (char** m);


int main(int argc, char const *argv[]){

	char** tablero = new char*[9];
	char nameTemp[5] = {'0','0','0','0','\0'};
	CreandoMatriz(tablero);
	llenadodelTablero(tablero);
	
	initscr();
	clear();
	refresh();
	getch();
	Imprimir(tablero);
	getch();
	liberar_Memoria(tablero);
	endwin();

	
	return 0;
}


void CreandoMatriz (char** m){

	for (int i =0; i<8 ;i++){
		m[i]=new char[8];
	}
}


void llenadodelTablero (char** m){
	for(int i =0; i<8;i++){
		for(int j =0 ;j<8 ;j++){
			m[i][j]=' ';
		}

	}	

	m[0][1]='N';
	m[0][3]='N';
	m[0][5]='N';
	m[0][7]='N';
	m[1][0]='N';
	m[1][2]='N';
	m[1][4]='N';
	m[1][6]='N';
	m[2][1]='N';
	m[2][3]='N';
	m[2][5]='N';
	m[2][7]='N';


	m[7][0]='B';
	m[7][2]='B';
	m[7][4]='B';
	m[7][6]='B';
	m[6][1]='B';
	m[6][3]='B';
	m[6][5]='B';
	m[6][7]='B';
	m[5][0]='B';
	m[5][2]='B';
	m[5][4]='B';
	m[5][6]='B';

}


void liberar_Memoria(char** m){


	for(int i =0 ; i <8 ;i++){
		delete[] m[i];

	}

	delete[] m;

}


void Imprimir (char** m){
			

	printw( "  A   B   C   D   E   F   G   H");
	for(int i =0; i<8;i++){

		printw ("\n%d",i);
			for(int j =0 ;j<8 ;j++){

				printw ( "[%c] ", m[i][j] );
			}
		printw ("\n");
	}	

}
