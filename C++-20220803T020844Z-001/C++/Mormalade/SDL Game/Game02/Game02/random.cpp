#include "random.h"
#include "cstdlib"
#include "ctime"
#include "imports.h"

using namespace std;

random::random(int  maxNum) {

	maxNumber = maxNum;


}

float random::mathRandom(){
	
	srand(time (0));

	holdNumber = rand() % maxNumber;


	return holdNumber;
}


random::~random()
{
}
