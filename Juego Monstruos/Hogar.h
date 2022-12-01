//
//  Hogar.h
//  Juego Monstruos
//
//  Created by José Omar Martínez on 30/11/22.
//

#ifndef Hogar_h
#define Hogar_h
#include <string>
using namespace std;

class Hogar
{

private:
string nombre;
string lugar;
public:
    Hogar();
    Hogar(string, string);
    ~Hogar();
    string getNombre();
    string getLugar();
    void setNombre(string);
    void setLugar(string);
};
Hogar::Hogar()
{
}

Hogar::Hogar(string Nombre, string Lugar)
{
    nombre = Nombre;
    lugar = Lugar;
}

Hogar::~Hogar()
{
}

string Hogar::getLugar(){
    return lugar;
}

string Hogar::getNombre(){
    return nombre;
}

void Hogar::setLugar(string Lugar){
    lugar = Lugar;
}

void Hogar::setNombre(string Nombre){
    nombre = Nombre;
}

#endif /* Hogar_h */
