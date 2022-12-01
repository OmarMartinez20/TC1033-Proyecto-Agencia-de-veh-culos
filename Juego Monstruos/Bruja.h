//
//  Bruja.h
//  Juego Monstruos
//
//  Created by José Omar Martínez on 30/11/22.
//

#ifndef Bruja_h
#define Bruja_h
class Bruja: public Monstruo{
private:
    int embrujos;
public:
    Bruja();
    Bruja(int embrujos);
    int get_embrujos();
    void set_embrujos(int emb);
    void hechizar();
    void volar();
    void reirse();
    
};

int Bruja::get_embrujos(){
    return embrujos;
}

void Bruja::set_embrujos(int emb){
    embrujos = emb;
}

Bruja::Bruja(int _embrujos){
    embrujos = _embrujos;
    cout<<"Esta bruja ha hecho "<<embrujos<<" embrujos"<<endl;
}

void Bruja::hechizar(){
    cout<<"Abracadabra!!..."<<endl;
}

void Bruja::volar(){
    cout<<"Whooooo...(vuela por los cielos con su escoba)"<<endl;
}

void Bruja::reirse(){
    cout<<"Muajajajaja..."<<endl;
}

#endif /* Bruja_h */
