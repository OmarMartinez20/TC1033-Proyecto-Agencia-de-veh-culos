//
//  Deportivo.h
//  Proyecto Autos
//
//  Created by José Omar Martínez on 11/11/22.
//
//Se incluye la libreria string
#include<string>
using namespace std;
//Creo la clase en un archivo .h
class Deportivo{
private:
  //Atributos Encapsulamiento
  string nombre;
  string marca;
  int velocidad;

public:
  //Métodos
  Deportivo();
  Deportivo(string nom,string mar,int vel): nombre(nom), marca(mar), velocidad(vel){};
  
  string get_nombre();
  string get_marca();
  int get_velocidad();

  void set_nombre(string);
  void set_marca(string);
  void set_velocidad(int);
};
//Getters
string Deportivo::get_nombre(){
  return nombre;
}
string Deportivo::get_marca(){
    return marca;
}
int Deportivo::get_velocidad(){
    return velocidad;
}
//Setters
void Deportivo::set_nombre(string nom){
  nombre = nom;
}
void Deportivo::set_marca(string mar){
    marca = mar;
}

void Deportivo::set_velocidad(int vel){
    velocidad = vel;
}
