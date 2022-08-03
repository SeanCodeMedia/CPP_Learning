
#include <iostream> 
#include <stdio.h>
#include "cmath" 
#include "string"

using namespace std; 


class myclass  {

public: 
    myclass ( )

    {
       
      printf( "this is the constructor");
      
    };  

  ~myclass () {

     printf( "this is the deconstructor");

  };






};


int main () {

   
	myclass ob;
	const string name = "Sean";

	cout << "\n" << "my name is " << name <<  endl;




	return 0; 
} 

