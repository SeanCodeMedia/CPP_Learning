
#include "iostream"
#include "cstdlib"
#include "string"
#include "ctime"

using namespace std; 


int main () {
   
   srand(time(0));

 for ( int i = 0; i < 5 ; i++) {
   
    cout << rand()%6 << endl;

 }


   
return 0; 
} 