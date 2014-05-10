/*
 * Monte Carlo PI
 */

#include <iostream>
#include <iomanip>
#include <random>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>

using namespace std;

void loop(void) {

	long double x, y;
	unsigned long long int count = 0, inside = 0;

    time_t t0 = time(0);
    srand48(time(0));
    for(;;) {
    	// show output every 10 second
    	if (time(0)-t0 > 0) {
    		t0 = time(0);
    		fprintf(stdout, "%.16Lf\n",
    				(long double)4.0*inside/count);
    	}

    	x = drand48();
    	y = drand48();
    	if (x * x + y * y < 1.0 )
    		inside++;
    	count++;
    }
}

int main()
{
    loop();
    return 0;
}


