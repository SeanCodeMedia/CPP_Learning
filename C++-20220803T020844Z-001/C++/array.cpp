
#include "iostream"
#include "string"
#include "cmath"

using namespace std; 
   
void print (int array[], int arraysize);

int main () {
    
  int array[6] = {1,2,3,4,5,6};
   
  int sizeOfArray = sizeof(array);
  int sizeOfElement = sizeof(array[0]);
   
  int length = sizeOfArray/sizeOfElement;

    print(array,length);

	return 0; 
}

 

void print (int array[], int arraysize) {

     for ( int i = 0;  i < arraysize; i++) {
       
        cout << array[i] << endl;


     };

}