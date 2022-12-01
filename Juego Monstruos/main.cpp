//
//  main.cpp
//  Juego Monstruos
//
//  Created by José Omar Martínez on 30/11/22.
//
#include "Monstruo.h"
#include "Dracula.h"
#include "Bruja.h"
#include "Fantasma.h"

#include <iostream>

void menu(){
    cout<<"\n"<<endl;
    cout<<"1. Dracula"<<endl;
    cout<<"2. Bruja"<<endl;
    cout<<"3. Fantasma"<<endl;
    cout<<"4. Salir"<<endl;
}

int main(){
    int opcion,embrujos,apariciones,litrosConsumidos, edad;
    string nombre;
    bool continua = true;
    cout<<"---Bienvenido al juego de los monstruos---"<<endl;
    while (continua == true){
        cout<<"¿Con que monstruo deseas jugar?"<<endl;
        menu();
        cin>>opcion;
        if(opcion == 1){
            Hogar castilloRumania("Castillo Rumano", "Rumania");
            Dracula Dracula1("Sir tercero Dracula",156,castilloRumania,532.00);
            cout<<Dracula1.get_nombre();
            Dracula1.morder();
            Dracula1.chuparSangre();
            Dracula1.aguantarSol();
            cout<<"Dame los litros consumidos de Dracula:"<<endl;
            cin>>litrosConsumidos;
            Dracula1.setLitrosConsumidos(litrosConsumidos);
            cout<<"Dame el nuevo nombre del vampiro: "<<endl;
            cin>>nombre;
            cout<<"Dame la edad del vampiro: "<<endl;
            cin>>edad;
            Dracula1.set_nombre(nombre);
            Dracula1.set_edad(edad);
            cout<<"Vampiro- Soy "<<Dracula1.get_nombre()<<" y tengo "<<edad<<" años"<<endl;
            cout<<"Vampiro- He chupado "<<Dracula1.getLitrosConsumidos()<<" litros de sangre a lo largo de mi vida muajaja"<<endl;
        }
        
        else if(opcion == 2){
            Bruja Bruja1(3);
            Bruja1.hechizar();
            Bruja1.volar();
            Bruja1.reirse();
            cout<<"Dame los embrujos que ha hecho la bruja:"<<endl;
            cin>>embrujos;
            Bruja1.set_embrujos(embrujos);
            cout<<"Dame el nombre de la bruja: "<<endl;
            cin>>nombre;
            cout<<"Dame su edad: "<<endl;
            cin>>edad;
            ;Bruja1.set_nombre(nombre);
            Bruja1.set_edad(edad);
            cout<<"Bruja- Me llamo "<<Bruja1.get_nombre()<<" y tengo "<<edad<<" años"<<endl;
            cout<<"Bruja- He realizado "<<Bruja1.get_embrujos()<<" embrujos muy tenebrosos a los que no comen bien"<<endl;
        }
        
        else if(opcion == 3){
            Fantasma Fantasma1(4);
            Fantasma1.asustar();
            Fantasma1.mover_cosas();
            cout<<"Dame las apariciones que ha tenido el fantasma: "<<endl;
            cin>>apariciones;
            Fantasma1.set_apariciones(apariciones);
            cout<<"Dame el nombre:"<<endl;
            cin>>nombre;
            Fantasma1.set_nombre(nombre);
            cout<<"Dame su edad:"<<endl;
            cin>>edad;
            Fantasma1.set_edad(edad);
            cout<<"Fantasma-- Soy "<<Fantasma1.get_nombre()<<" y tengo "<<Fantasma1.get_edad()<< " años asustando niños que desobedecen a sus papás"<<endl;
            cout<<"Fantasma: He asustado a "<<Fantasma1.get_apariciones()<<" niños apareciendome en sus cuartos cuando se portan mal"<<endl;
        }
        
        else if(opcion == 4){
            continua = false;
            cout<<"Gracias por jugar. Adiós"<<endl;
        }
        return 0;
    }
}
