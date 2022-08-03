
#include <iostream> 
#include <fstream>
#include <string>

using namespace  std; 

/// explain object orintated programming 
// using getters and setters 

class Person {


private: 

	string name;

	int age; 

	string race; 

	string height; 

	bool isEmployed; 

	bool wentTocollege; 



public: 
     

    Person( string nameX, int ageX, string raceX,string heightX, bool isEmployedX, bool wentTocollegeX ) {
    
    setName(nameX);
    setAge( ageX);
    setrace(raceX);
    setHeight(heightX);
    setEmpolyment(isEmployedX); 
    setwentTocollege(wentTocollegeX);

    };

	void setName (string x) {
      
       name = x; 
       
     };

    void setAge (int y) {
      
       age = y; 
       
     }; 

    void setHeight ( string z) {
      
       height = z; 
       
     }; 

    void setEmpolyment (bool t) {
      
        
       isEmployed = t;

     };

    void setwentTocollege (bool f) {
      
        
       wentTocollege = f;

     };


     void setrace (string r) {
        
        race = r; 

     }



     string getName () {
      
       return name;
       
     };

    int getAge () {
        
        return age;
       
     }; 

    string getHeight () {
      
       return height;
       
     }; 

    bool getEmpolyment () {
        

        return isEmployed;
        
     
     };

    bool getwentTocollege () {
      
        
       return wentTocollege;

     };


     string getrace () {
         

         return race;

     };


}; 



int main () {
  

Person person01("Sean",18,"Jamaican","5/7in",false,true);

cout << person01.getName() << endl; 
cout << person01.getAge() << endl; 
cout << person01.getrace() << endl; 
cout << person01.getHeight() << endl;
cout << person01.getEmpolyment() << endl;
cout << person01.getwentTocollege() << endl;

/// creating a new object from the person class 

cout << "\n" << endl;

Person person02("David",11,"Jamaican","4/5in",false,false);

cout << person02.getName() << endl; 
cout << person02.getAge() << endl; 
cout << person02.getrace() << endl; 
cout << person02.getHeight() << endl;
cout << person02.getEmpolyment() << endl;
cout << person02.getwentTocollege() << endl; 

cout << "\n" << endl;


Person person03("Mark",17,"American","4/5in",true,true);

cout << person03.getName() << endl; 
cout << person03.getAge() << endl; 
cout << person03.getrace() << endl; 
cout << person03.getHeight() << endl;
cout << person03.getEmpolyment() << endl;
cout << person03.getwentTocollege() << endl; 





return 0;
}


