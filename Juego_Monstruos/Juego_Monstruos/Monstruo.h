/*
*  Proyecto Juego_Monstruos
*  Monstruo.h
*  c++
*  A01710263
*  Created by José Omar Martínez on 01/12/22.
*/

/*
 *  Clase abstracta Monstruo ya que no se crean objetos directamente de esta clase.
 *  Hereda a sus 3 clases hijas
 *  Dracula, Bruja, Fantasma
 */

#ifndef Monstruo_h
#define Monstruo_h
#include <iostream>//Para imprimir
using namespace std;

//Declaración de la clase Monstruo
class Monstruo{
protected://Para que puedan heredar las clases hijas
    //Declaro atributos
    string nombre;
    int edad;
    
public:
    //Declaro métodos
    Monstruo();
    Monstruo(string, int);
    string getNombre();
    int getEdad();
    void setNombre(string nom);
    void setEdad(int ed);
};

/**
 * Constructor que recibe los valores nombre y edad
 */
Monstruo::Monstruo(string nom, int ed){
    nombre = nom;
    edad = ed;
}

/**
 * Getter para obtener el nombre
 */
string Monstruo::getNombre(){
    return nombre;
}

/**
 * Getter para obtener la edad
 */
int Monstruo::getEdad(){
    return edad;
}

/**
 * Setter de nombre
 */
void Monstruo::setNombre(string nom){
    nombre = nom;
}

/**
 * Setter de edad
 */
void Monstruo::setEdad(int ed){
    edad = ed;
}

/**
 * Imprime un mensaje
 */
Monstruo::Monstruo(){
    cout<<"Has creado un nuevo monstruo"<<endl;
}

#endif /* Monstruo_h */
