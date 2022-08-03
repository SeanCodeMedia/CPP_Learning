
#include <iostream> 
#include <fstream>
#include <string>

using namespace  std; 

class testClass  {

private: 

	int score; 


   
   public: 
   	     testClass (int y) {
             // set the value of score as the object is created.
          setter(y);

   	     };

         
         void setter (int x)  {
              

             score = x; 

         };


         int getter () {

         	return score; 
  

         };



};

int main () {
  
  testClass objectClass(20); 

  cout << objectClass.getter() << endl; 


return 0;
}





