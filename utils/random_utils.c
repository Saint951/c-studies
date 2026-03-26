#include "random_utils.h"
#include <stdlib.h>
#include <time.h>

int randint(int min,int max){
	return(rand()%(max-min+1))+min;
}
