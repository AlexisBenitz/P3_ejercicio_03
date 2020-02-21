#include <iostream>
#include "punto.h"
#include "pentagono.h"
int main(){
pentagono miPentagono;
miPentagono.AsignarSupIzq(2,4);
miPentagono.AsignarSupDer(6,4);
miPentagono.AsignarInfIzq(3,2);
miPentagono.AsignarInfDer(5,2);
miPentagono.AsignarSupSup(4,6);
cout<< "verificacion del Pentagono"<<endl;
cout<<miPentagono.Verificacion()<<endl;

cout << "El perimetro del pentagono es: " << miPentagono.Perimetro() << endl;
cout<< "El area del pentagono es: " << miPentagono.Area() << endl;
}
