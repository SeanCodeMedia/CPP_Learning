
#include <iostream> 
#include <fstream>
#include <string>

using namespace  std; 

class Myclass {

private:
	int score = 0;


public: 

	void setter (int x ) {

		score = x; 
	}


	int getter ( ) {
         

         return score;  

         }



};

int main () {
     

     Myclass newObject; 

     newObject.setter(100);

     cout << newObject.getter() << endl; 




return 0;
}





