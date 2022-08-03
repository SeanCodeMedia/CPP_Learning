

# include <iostream>
# include <string>
using namespace std; 


int main () {


// & is the adreass operator

// the * is the pointer operator/ i points to a var adress and stores it.

int a = 10; 
int b = 20; 

int *c;
int *d; 

int value; 
int value2;

 c= &a;
 d = &b;


 value = *c; // derfence inorder to get the value back.
 value2 = *d;

 cout << c << endl;

 cout << d << endl;

 cout << value << endl;

 cout << value2 << endl;


   
}









