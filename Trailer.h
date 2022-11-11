//
//  Trailer.h
//  Proyecto Autos
//
//  Created by José Omar Martínez on 11/11/22.
//

#include<string>
using namespace std; // Lo ponemos al incio
//Creo la clase en un archivo .h
class Trailer{
private:
  //Atributos Encapsulamiento
  string nombre;
  int remolque;
  float peso;

public:
  //Métodos
  Trailer();
  Trailer(string nom,int rem,float pe): nombre(nom), remolque(rem), peso(pe){};
  
  string get_nombre();
  int get_remolque();
  float get_peso();

  void set_nombre(string);
  void set_remolque(int);
  void set_peso(float);
};
//Getters
string Trailer::get_nombre(){
  return nombre;
}
int Trailer::get_remolque(){
    return remolque;
}
float Trailer::get_peso(){
    return peso;
}
//Setters
void Trailer::set_nombre(string nom){
    nombre = nom;
}
void Trailer::set_remolque(int rem){
    remolque = rem;
}

void Trailer::set_peso(float pe){
    peso = pe;
}
