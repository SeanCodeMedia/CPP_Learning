
#include <iostream>
#include <string>

using namespace std;

void printSuff();

int main () {

   
 void (*functionPointer)();

 functionPointer = printSuff;


 functionPointer();




	return 0;
}

void printSuff() {


	cout << "Hellow I am a function pointer" << endl;
}