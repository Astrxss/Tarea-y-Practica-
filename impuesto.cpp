#include <iostream>
using namespace std;
int main(){

    string nombre;
    cout << "Ingrese su nombre: ";
    cin >> nombre;

    int h,s,i;
    cout << "Ingrese sus horas trabajadas: ";
    cin >> h;
    
        if( h <= 160)
        { s = h*10;}

        else if( h > 160)
        { s = 1600 + ((h-160)*15);}
    
    
           if( s <= 2000)
           { i = s;}

           else if( s <= 2200 )
           {i = s - (s*20/100);}

           else if( s > 2200)
           {i = s - (s*30/100);}

    
    cout << nombre << " Su salario total es de: " << i << endl;

    return 0;




}