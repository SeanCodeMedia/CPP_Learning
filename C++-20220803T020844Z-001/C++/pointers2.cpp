
# include <iostream> 
#include <string>
// pointers 2;

using namespace std;


void addNumbers (int *x , int *y); 

int main () {
    
   
   int array [5] = {1,2,3,4,5}; 

   int *Elementpointer0; 

   int *Elementpointer4;


   Elementpointer0 = &array[0]; 

   Elementpointer4 = &array[1];

   cout << Elementpointer0 << endl;
   cout << Elementpointer4 << endl;

  addNumbers (Elementpointer0,Elementpointer4);


	return 0; 
}


void addNumbers (int *x, int *y) {
  

  x+=1;
  y+=1; 

  cout << *x << endl;
  cout << *y << endl;


}