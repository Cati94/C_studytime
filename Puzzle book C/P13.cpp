
// Operator Precedence and Evaluation in c langugae - puzzle book //

#include <stdio.h>
#define print3(x,y,z) printf("x=%d\ty=%d\n", x,y,z)

int main(){
	int x,y,z;
	x=y=z=1;
	++x|| ++y && ++z;
	print3(x,y,z);
}