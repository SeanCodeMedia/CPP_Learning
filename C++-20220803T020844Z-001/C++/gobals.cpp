
#include "iostream"
#include "string"


using namespace std; 
 
 //urany scope operator // acess gobal varibles instead of local var using :: 
// defult arguments
 void area (int w = 1 ,int h = 1 ); // function prototpye 


int number = 10; // global var 


int main () {
    
  
  double number = 0.10; // local var 

  cout << ::number << endl;  // acessing the global var using  urnay scope operator 
  cout << number << endl; // acessing local var 
  area(10,10);

  return 0; 
}

void area (int w,int h ) {
     
    int boxarea = w*h;

    cout << "Area of the box is "<< boxarea << endl; 

}