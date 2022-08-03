
#include <iostream> 

#include <string>


using namespace std; 

class myclass01 {

    
   void functionPrint () {
 

   cout << "Hello sean" << endl;

   }

};


class myClass02 {


  void functionPrint02 () {
 

   cout << "Hello David" << endl;

   }



};


int main () {


	myClass02* = new  myClass02; 
    myClass02 -> functionPrint02();


	return 0; 
}