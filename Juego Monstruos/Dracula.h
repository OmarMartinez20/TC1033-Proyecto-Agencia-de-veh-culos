/*
*  Dracula.h
*  Juego Monstruos
*  A01710263
*  Created by José Omar Martínez on 30/11/22.
*/

/*
 * Clase Dracula que hereda de clase Monstruo
 */

#ifndef Dracula_h
#define Dracula_h
#include "Hogar.h"
#include "Monstruo.h"
#include <iostream>
#include <string>
using namespace std;

class Dracula: public Monstruo
{
private: //Atributos
    float litrosConsumidos;
    Hogar _hogar;
public:
    Dracula(); //Constructor vacio
    Dracula(string,int,Hogar,float); //Constructor
    float getLitrosConsumidos(); //getter
    void setLitrosConsumidos(float ); //setter
    /* Metodos de la clase */
    void morder();
    void chuparSangre();
    void aguantarSol();
    Hogar getHogar();
    void setHogar(Hogar);
};

/**
 * Constructor por default
 *
 *
 */
Dracula::Dracula(){
    Hogar hogar("","");
    _hogar = hogar;
    litrosConsumidos = 0;
    
}

Dracula::Dracula(string nombre, int edad,Hogar hog, float LitrosConsumidos):Monstruo(nombre,edad){
    litrosConsumidos = LitrosConsumidos;
    _hogar = hog;
    
}
Hogar Dracula::getHogar(){
    return _hogar;
}

void Dracula::setHogar(Hogar hogar){
        _hogar = hogar;
}

float Dracula::getLitrosConsumidos(){
    return litrosConsumidos;
}

void Dracula::setLitrosConsumidos(float LitrosConsumidos){
    litrosConsumidos = LitrosConsumidos;
}


void Dracula::morder(){
    cout<<" Arrrrgggrrr...."<<endl;
}

void Dracula::chuparSangre(){
    cout<<"Que rica sangre!!..."<<endl;
}

void Dracula::aguantarSol(){
    cout<<"No me daña el sol muajajaja..."<<endl;
}

#endif /* Dracula_h */
