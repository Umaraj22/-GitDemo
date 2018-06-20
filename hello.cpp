
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "helloConfig.h"
#ifdef USE_MYMATH
#include "MathFunctions.h"
#endif

int main(int argc, char *argv[])
{
	if (argc < 2){
		fprintf(stdout,"less args");
		return 1;
	}

	double ipVal = atof(argv[1]);
#ifdef USE_MYMATH
	double opVal = mysqrt(ipVal);
#else
	double opVal = sqrt(ipVal);
#endif
	fprintf(stdout, "Value is %g",  opVal);
	return 0;
}
