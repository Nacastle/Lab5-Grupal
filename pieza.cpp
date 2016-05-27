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
	int cordenadax = abs(x2-x1);
	int cordenaday = abs(y2-y1);
	if(cordenaday == cordenadax){
		return 1;
	}
	else{
		return 0;
	}
}
