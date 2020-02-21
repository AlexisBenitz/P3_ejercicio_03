#ifndef PENTAGONO_H
#define PENTAGONO_H
#include <iostream>
#include <cmath>
#include "punto.h"
using namespace std;
class pentagono{
private:
Punto superiorSuperior;
Punto superiorIzquierdo;
Punto superiorDerecho;
Punto inferiorIzquierdo;
Punto inferiorDerecho;
public:
pentagono(){
cout << "Se ha creado un pentagono" << endl;
}
void AsignarSupSup(float x, float y){
superiorSuperior.asignarX( x);
superiorSuperior.asignarY( y);
}
void AsignarSupIzq(float x, float y){
superiorIzquierdo.asignarX( x);
superiorIzquierdo.asignarY( y);
}
void AsignarSupDer(float x, float y){
superiorDerecho.asignarX( x);
superiorDerecho.asignarY( y);
}
void AsignarInfIzq(float x, float y){
inferiorIzquierdo.asignarX( x);
inferiorIzquierdo.asignarY( y);
}
void AsignarInfDer(float x, float y){
inferiorDerecho.asignarX( x);
inferiorDerecho.asignarY( y);
}
float Verificacion(){
   float  D1 = abs(inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
     float D2 = abs(inferiorDerecho.obtenerY() - superiorDerecho.obtenerY());
      float D3 = abs(superiorDerecho.obtenerY() - superiorSuperior.obtenerY());
       float D4 = abs(superiorIzquierdo.obtenerY() - superiorSuperior.obtenerY());
        float D5 = abs(inferiorIzquierdo.obtenerY() - superiorIzquierdo.obtenerY());

    int C;
    do{
        if (D1==D2&&D1==D5&&D3==D4){
                C=D1*D3;
                    cout << "¡Es un pentagonooooooo!" << endl;

                                        }
    }while (C=0);
}
float Perimetro(){
float DI= abs(inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
return (DI*5);
}
float Area(){
float Distancia= abs(inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
float DenominadorApo= 1.45308556;
float Lados= 5;
float Apotema=(Distancia/DenominadorApo);
float A= (Lados*Distancia*Apotema/2);
return A;
}
};
#endif
