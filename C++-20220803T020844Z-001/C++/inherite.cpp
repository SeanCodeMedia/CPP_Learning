
# include <iostream>
# include <stdio.h>

using namespace std;

// base class
class father {

 public:

 	void sayName () {


 		printf("%s", "My last name is Peart");



 	}
 


};

// subclass / drivie class // in

class son : public father {

};

int main () {


	father dad;
	son sean;

	dad.sayName();

	sean.sayName();


	return 0;
}