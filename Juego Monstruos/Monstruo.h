//
//  Monstruo.h
//  Juego Monstruos
//
//  Created by José Omar Martínez on 30/11/22.
//

#ifndef Monstruo_h
#define Monstruo_h
#include <iostream>
using namespace std;

class Monstruo{
protected:
    string nombre;
    int edad;
    
public:
    Monstruo();
    Monstruo(string, int);
    string get_nombre();
    int get_edad();
    void set_nombre(string nom);
    void set_edad(int ed);
};

Monstruo::Monstruo(string nom, int ed){
    nombre = nom;
    edad = ed;
}

string Monstruo::get_nombre(){
    return nombre;
}

int Monstruo::get_edad(){
    return edad;
}

void Monstruo::set_nombre(string nom){
    nombre = nom;
}

void Monstruo::set_edad(int ed){
    edad = ed;
}

Monstruo::Monstruo(){
    cout<<"Has creado un nuevo monstruo"<<endl;
}

#endif /* Monstruo_h */
