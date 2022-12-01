//
//  Fantasma.h
//  Juego Monstruos
//
//  Created by José Omar Martínez on 30/11/22.
//

#ifndef Fantasma_h
#define Fantasma_h
class Fantasma: public Monstruo{
private:
    int apariciones;
public:
    Fantasma();
    Fantasma(int apariciones);
    int get_apariciones();
    void set_apariciones(int apa);
    void asustar();
    void mover_cosas();
    
};

int Fantasma::get_apariciones(){
    return apariciones;
}

void Fantasma::set_apariciones(int apa){
    apariciones = apa;
}

Fantasma::Fantasma(int _apariciones){
    apariciones = _apariciones;
    cout<<"Este fantasma ha tenido: "<<apariciones<<" apariciones"<<endl;
}

void Fantasma::asustar(){
    cout<<"BHOOOO!!..."<<endl;
}

void Fantasma::mover_cosas(){
    cout<<""<<endl;
}

#endif /* Fantasma_h */
