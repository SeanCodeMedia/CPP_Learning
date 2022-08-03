
#include "iostream"
#include "string"

using namespace std; 

// checking age for retirment 

int main () {
    
  
  int age;
  
  cout << "hellow what is your age" << endl;

  cin >> age;

  switch (age) {

    case 10: 
          
	    cout << "You too young for retirment" << endl; 

	    break;

    case 18 :
         
        cout << "You need to work money for  retirment" << endl; 

	    break;
     
    case 25: 

	    cout << "First Million dollars" << endl; 

	    break;

    case 27: 

	    cout << "Own a house in America and Jamaica " << endl; 

	    break;

	case 60: 

	    cout << " congrates you should retire now  and make a impact on the world " << endl; 

	    break;

    default:

      cout << "You need to work toward retirement" << endl;

};


	return 0; 
} 