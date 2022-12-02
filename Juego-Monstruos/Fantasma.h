/*
*  Proyecto Juego Monstruos
*  Fantasma.h
*  c++
*  A01710263
*  Created by José Omar Martínez on 01/12/22.
*/

//Declaro la clase Fantasma que hereda de la clase Monstruo
#ifndef Fantasma_h
#define Fantasma_h
//Con esto indicamos que esta clase está heredando de la clase Monstruo
class Fantasma: public Monstruo{
private:
    //Atributo de esta clase
    int apariciones;
public:
    //Metodos del objeto
    Fantasma();
    Fantasma(int apariciones);
    int getApariciones();
    void setApariciones(int apa);
    void asustar();
    void mover_cosas();
    
};

/**
 * Getter
 *  Obtiene las apariciones del fantasma
 */
int Fantasma::getApariciones(){
    return apariciones;
}

/**
 * Setter
 *  Modifica las apariciones del objeto
 */
void Fantasma::setApariciones(int apa){
    apariciones = apa;
}

/**
 * Constructor que recibe un valor entero
 *  Asignación de lo que digitó el usuario a la variable apariciones
 */
Fantasma::Fantasma(int _apariciones){
    apariciones = _apariciones;
    cout<<"Este fantasma ha tenido: "<<apariciones<<" apariciones"<<endl;
}

/**
 * Metodo sin valor de retorno que imprime un mensaje simulando un grito para asustar
 */
void Fantasma::asustar(){
    cout<<"BHOOOO!!..."<<endl;
}

/**
 * Metodo que no retorna nada que imprime un mensaje simulando mover cosas
 */
void Fantasma::mover_cosas(){
    cout<<"(se mueven cosas....)"<<endl;
}

#endif /* Fantasma_h */
