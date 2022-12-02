/*
*  Proyecto Juego_Monstruos
*  Dracula.h
*  c++
*  A01710263
*  Created by José Omar Martínez on 01/12/22.
*/

#ifndef Dracula_h
#define Dracula_h
//Bibliotecas
#include "Monstruo.h"
#include <iostream>
#include <string>
//Declaro la clase Dracula que hereda de Monstruo
class Dracula: public Monstruo{
private:
    //Atributos
    float litrosConsumidos;
public:
    //Metodos
    Dracula();//Constructor vacío
    Dracula(float litrosConsumidos);
    float getLitrosConsumidos();
    void setLitrosConsumidos(float litros);
    void morder();
    void chuparSangre();
    void aguantarSol();
    
};

/**
 * Getter para obtener los litros consumidos
 *
*/
float Dracula::getLitrosConsumidos(){
    return litrosConsumidos;
}

/**
 * Setter para modificar los litros consumidos
 *
*/
void Dracula::setLitrosConsumidos(float litros){
    litrosConsumidos = litros;
}

/**
 * Constructor que recibe el valor de los litros consumidos
 * Imprime los litros consumidos
*/
Dracula::Dracula(float _litros){
    litrosConsumidos = _litros;
    cout<<"Vampiro-He consumido "<<litrosConsumidos<< "litros de sangre"<<endl;
}

/**
 * Metodo morder
 * Este metodo imprime una string simulando una mordedura
*/
void Dracula::morder(){
    cout<<" Arrrrgggrrr...."<<endl;
}

/**
 * Metodo chuparSangre
 * Este metodo imprime simulando una toma de sangre del vampiro
*/
void Dracula::chuparSangre(){
    cout<<"Que rica sangre!!..."<<endl;
}

/**
 * Metodo
 * Este metodo imprime simulando que no le daña el sol al Dracula
*/
void Dracula::aguantarSol(){
    cout<<"No me daña el sol muajajaja..."<<endl;
}

#endif /* Dracula_h */
