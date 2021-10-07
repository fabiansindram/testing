#include <iostream>
using namespace std;

int main(){

   int numSpelers;

   cout << "hoeveel spelers?";
   cin >> numSpelers;

      string a1;
      string b2;
      string c3;
      string d4;
      string e5;
      string f6;

  switch(numSpelers){

 case 5:  
      

      cout << "wie is speler 1" << endl;
      cin >> a1;
      
      cout << "wie is speler 2?" << endl;
      cin >> b2;

      cout << "wie is speler 3?" << endl;
      cin >> c3;

      cout << "wie is speler 4? " << endl;
      cin >> d4;

      cout << "wie is speler 5?" << endl;
      cin >> e5;

      cout << "speler" << a1 << b2 << c3 << endl;
      break;
   

     case 6: 
      
      
      cout << "wie is speler 1" << endl;
      cin >> a1;
      
      cout << "wie is speler 2?" << endl;
      cin >> b2;

      cout << "wie is speler 3?" << endl;
      cin >> c3;

      cout << "wie is speler 4? " << endl;
      cin >> d4;

      cout << "wie is speler 5?" << endl;
      cin >> e5;

      cout << "wie is speler 6?" << endl;
      cin >> f6;

      cout << "speler" << a1 << b2 << c3 << endl;
   
      break;


 default:

      cout << "no";
   }

}
  