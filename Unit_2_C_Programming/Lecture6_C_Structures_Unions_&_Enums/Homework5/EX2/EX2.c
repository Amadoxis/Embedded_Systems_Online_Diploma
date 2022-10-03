/*
 * Ex2.c
 *
 *  Created on: Oct 2, 2022
 *      Author: Ahmed M. Rizk
 */
#include <stdio.h>

#define flush(); fflush(stdin);fflush(stdout);

struct SDistance {
	float foot;
	float inch;
};

int main(){
	struct SDistance x,y,z;
	printf("Please enter the first distance(foot',inch\"):-\n");
	printf("Distance 1:");flush();scanf("(%f',%f\")",&x.foot,&x.inch);
	printf("Please enter the second distance(foot',inch\"):-\n");
	printf("Distance 2:");flush();scanf("(%f',%f\")",&y.foot,&y.inch);
	z.foot=x.foot+y.foot;
	z.inch=x.inch+y.inch;
	if(z.inch>=12){
		z.foot++;
		z.inch-=12;
	}
	printf("The sum of distances is %.2f' %.2f\" .",z.foot,z.inch);
	return 0;
}


