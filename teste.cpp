#include <stdio.h>

#include "vetor.h"

int main()
{
	
	
	Vetor<float> a(1,2,1) ;
	Vetor<float> b(0,2) ;
	a.sub(b);
	a.setMag(5);
	printf("(%f,%f) mag = %f \n",a.getX(),a.getY(),a.getMag());
	//a = Vetor<int>(1,2);
}
