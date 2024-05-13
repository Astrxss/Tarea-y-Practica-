#include <iostream>
using namespace std;
int main(){

    string Mensaje;

    
      int n=0,h=0;
      cout << "Ingrese en que nivel esta del 1 al 25: ";
      cin >> h;

      cout << "Ingrese a que nivel quiere ir 1 al 25: ";
      cin >> n;

      if(n > 25|| h > 25 || n < 1 || h < 1){
         Mensaje = "No esta en el edificio";
      }
      
      else if(n < h){
         Mensaje = "Bajando";}
        
      else if(n > h ){
         Mensaje = "Subiendo";}

      else if (n == h){
         Mensaje = "Usted ya esta en el nivel";
      }

      cout << Mensaje << endl;

      return 0;

    


}
