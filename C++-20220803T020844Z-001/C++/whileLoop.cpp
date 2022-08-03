
#include "iostream"
#include "string"

using  namespace std;

int main() {
	

int number = 1;
int storage;
int sum = 0;  

while (number <= 5) {
      
      cout << "enter a number " << endl;
       
      cin >> storage;

      sum = sum + storage;
     
      number++;
   
    };

      cout << sum << endl;

	return 0;
}
