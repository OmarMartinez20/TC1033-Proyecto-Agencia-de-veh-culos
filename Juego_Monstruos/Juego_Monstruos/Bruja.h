/*
*  Proyecto Juego_1Monstruos
*  Bruja.h
*  c++
*  A01710263
*  Created by José Omar Martínez on 01/12/22.
*/

//Declaro la clase Bruja que hereda de la clase Monstruo
#ifndef Bruja_h
#define Bruja_h
class Bruja: public Monstruo{
private:
    //Atributos
    int embrujos;
public:
    //Metodos
    Bruja();
    Bruja(int embrujos);
    int getEmbrujos();
    void setEmbrujos(int emb);
    void hechizar();
    void volar();
    void reirse();
};

/**
 * Getter
 *  Obtiene los embrujos de la bruja
 */
int Bruja::getEmbrujos(){
    return embrujos;
}

/**
 * Setter
 *  Modifica los embrujos del objeto
 */
void Bruja::setEmbrujos(int emb){
    embrujos = emb;
}

/**
 * Constructor que recibe un valor entero
 *  Asignación de lo que digitó el usuario a la variable embrujos
 */
Bruja::Bruja(int _embrujos){
    embrujos = _embrujos;
    cout<<"Esta bruja ha hecho "<<embrujos<<" embrujos"<<endl;
}

/**
 * Metodo sin valor de retorno que imprime un mensaje simulando un hechizo
 */
void Bruja::hechizar(){
    cout<<"Abracadabra!!..."<<endl;
}

/**
 * Metodo que no retorna nada que imprime un mensaje simulando que la bruja vuela
 */
void Bruja::volar(){
    cout<<"Whooooo...(vuela por los cielos con su escoba)"<<endl;
}

/**
 * Metodo que no retorna nada que imprime un mensaje simulando risa de la bruja
 */
void Bruja::reirse(){
    cout<<"Muajajajaja..."<<endl;
}

#endif /* Bruja_h */
