//
//  Camion.h
//  Proyecto Autos
//
//  Created by José Omar Martínez on 11/11/22.
//

#include<string>
using namespace std; // Lo ponemos al incio
//Creo la clase en un archivo .h
class Camion{
private:
  //Atributos Encapsulamiento
  string nombre;
  int capacidad;
  float altura;

public:
  //Métodos
  Camion();
  Camion(string nom,int cap,float alt): nombre(nom), capacidad(cap), altura(alt){};
  
  string get_nombre();
  int get_capacidad();
  float get_altura();

  void set_nombre(string);
  void set_capacidad(int);
  void set_altura(float);
};
//Getters
string Camion::get_nombre(){
  return nombre;
}
int Camion::get_capacidad(){
    return capacidad;
}
float Camion::get_altura(){
    return altura;
}
//Setters
void Camion::set_nombre(string nom){
    nombre = nom;
}
void Camion::set_capacidad(int cap){
    capacidad = cap;
}

void Camion::set_altura(float alt){
    altura = alt;
}
