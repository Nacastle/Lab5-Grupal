#ifndef PIEZA_H
#define PIEZA_H


class pieza{
	char movi[5];
	
public:
	pieza();
	pieza(char movi[]);
	int movimiento(char* movi);
	//int movimiento(char[]);
};
#endif
