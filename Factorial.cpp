#include <iostream>
using namespace std;
int main(){

    int n,i,f=1;
    cout << "Ingrese un numero entero para saber su factorial: ";
    cin >> n;

    if (n < 0) f = 0;
    else if(n == 0) f = 1;
    else {

    for ( i=1; i <= n; i++){

        f= f*i;

     }
    }
    cout << "Factorial de " << n << " es :" << f << endl;

   return 0;
} 