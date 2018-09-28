#include <iostream>

using namespace std;
//SUMA DE LOS NUEMROS FIBONACCI
int main()
{
    int f_1=1,f_2=1,f_3,suma=0;
    int valor,contador=0;
    cin >> valor;
    while (valor >= contador){
        f_3=f_1+f_2;
        contador++;
        f_1=f_2;
        f_2=f_3;
        suma=suma+f_3;
    }
    cout << f_3 << endl ;
    cout << suma+1 << endl ;
    return 0;
}
