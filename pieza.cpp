#include "pieza.h"
#include <cmath>

using std::abs;

pieza::pieza(){
	
}

pieza::pieza(char movi2[5]){
	 movi2 = movi;
}

int movimiento(char* movi){
	int x1= 0;
	int x2= 0;
	int y1=0;
	int y2=0;
	x1 = movi[0]-65;
	y1 = movi[1]-48;
	x2 = movi[2]-65;
	y2 = movi[3]-48;
	int cordenadax = abs(x2-x1);
	int cordenaday = abs(y2-y1);
	if(cordenaday == cordenadax){
		return 1;
	}
	else{
		return 0;
	}
}
