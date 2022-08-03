# include <iostream> 
# include <stdio.h>
# include "cmath"
# include "string" 


using namespace std; 


class cupcake {

 public: 

 cupcake() {
       printf("Constructor \n ");
     //  numberOfcupCake = 1; 
      // printf("%d",numberOfcupCake); 
      };

 private: 

 int numberOfcupCake;


    
  friend void isonine (cupcake & numofCake);

};



void isonine (cupcake & numofCake) {`

   numofCake.numberOfcupCake = 10;
   printf("%d",numofCake.numberOfcupCake);
}


int main  () {

	cupcake cake01;

	isonine(cake01);


return 0; 
}