#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(static_cast<unsigned int>(std::time(nullptr)));
  string name;
  while(1){
    cout<<("\n\nPress Enter Your Name: \n");
    cin>>name;
    int x = 1 + (rand() % 100);
    cout<<name<<"'s gay percentage is: "<<x << endl;
    if(x<=10){
      cout<<name<<"'s Microgay ";
      }
    if(10<x && x <=20){
      cout<<name<<"'s Milligay ";
      }
      if(20<x && x <=30){
      cout<<name<<"'s Centigay ";
      }
      if(30<x && x <=40){
      cout<<name<<"'s Decigay ";
      }
      if(40<x && x <=50){
      cout<<name<<"'s BTS fan ";
      }
      if(50<x && x <=60){
      cout<<name<<"'s Kilogay ";
      }
      if(60<x && x <=70){
      cout<<name<<"'s MegaGay ";
      }
      if(70<x && x <=80){
      cout<<name<<"'s Gachi enjoyer";
      }
      if(x  > 80){
      cout<<name<<"'s GigaGay ";
      }
      if(x==100){
        cout<<name<< "has won Gay King's title";
        break;
      }
    }
      return 0;
  
  }
