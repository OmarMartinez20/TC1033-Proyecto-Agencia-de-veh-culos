/*
*  Proyecto Juego Monstruos
*  main.cpp
*  c++
*
*  Created by José Omar Martínez on 01/12/22.
*/

/*
 * Descripción: este es un programa de la clase Pensamiento Computacional Orientado a Objetos.
 * Es un programa que simula un juego para niños.
 * Este programa permite crear hasta 3 diferentes tipos de monstruos y los muestra en pantalla.
 * Una vez creado el monstruo, el programa permite al usuario cambiar sus caracteristicas.
 */

// Bibliotecas
#include "Monstruo.h" // Archivos de las clases necesarias para mi proyecto
#include "Dracula.h"
#include "Bruja.h"
#include "Fantasma.h"
#include <iostream> //Para poder imprimir

//Se implementa el menu para que el usuario pueda elegir una opción
void menu(){
    //Imprime todas las opciones del usuario
    cout<<"\n"<<endl;
    cout<<"1. Dracula"<<endl;
    cout<<"2. Bruja"<<endl;
    cout<<"3. Fantasma"<<endl;
    cout<<"4. Salir"<<endl;
}

int main(){
    int opcion,embrujos,apariciones,litrosConsumidos, edad; //Declaro las variables que se usarán
    string nombre;
    bool continua = true;
    cout<<"---Bienvenido al juego de los monstruos---"<<endl;
    //Ciclo para que el sistema siga corriendo mientras no elija la opcion salir
    while (continua == true){
        //Imprimimos el menu
        menu();
        //Preguntamos al usuario que opción desea
        cout<<"¿Con que monstruo deseas jugar?"<<endl;
        //Leemos lo que el usuario selecciona y lo almacenamos en la variable opcion
        cin>>opcion;
        //Dependiendo el número de opcion el programa entrara en alguna de las opciones
        if(opcion == 1){
            //Si elige esta opción se crea un objeto de la clase Dracula y usamos los métodos de la clase
            Dracula dracula1(3);
            dracula1.morder();
            dracula1.chuparSangre();
            dracula1.aguantarSol();
            cout<<"Dame los litros consumidos de Dracula:"<<endl;//Se le pide al usuario otra dato
            cin>>litrosConsumidos; //Se almacena aqui lo que digite el usuario
            dracula1.setLitrosConsumidos(litrosConsumidos); //Usamos los setters para cambiar los litros
            cout<<"Dame el nuevo nombre del vampiro: "<<endl;//Se le pide al usuario otra dato
            cin>>nombre;//Se almacena aqui lo que digite el usuario
            cout<<"Dame la edad del vampiro: "<<endl;//Se le pide al usuario otra dato
            cin>>edad;//Se almacena aqui lo que digite el usuario
            dracula1.setNombre(nombre);//Usamos los setters para cambiar el nombre
            dracula1.setEdad(edad);//Usamos los setters para cambiar la edad
            //Usamos los getters para acceder al dato que queremos obtener y juntamos las caracteristicas
            cout<<"Vampiro- Soy "<<dracula1.getNombre()<<" y tengo "<<edad<<" años"<<endl;
            cout<<"Vampiro- He chupado "<<dracula1.getLitrosConsumidos()<<" litros de sangre a lo largo de mi vida muajaja"<<endl;
            cout<<"\n";
        }
        
        else if(opcion == 2){
            //Si elige esta opción se crea un objeto de la clase Bruja y usamos los métodos de la clase
            Bruja bruja1(3);
            bruja1.hechizar();
            bruja1.volar();
            bruja1.reirse();
            cout<<"Dame el número de embrujos que ha hecho la bruja:"<<endl;//Pedimos los embrujos
            cin>>embrujos;//Se almacena aqui lo que digite el usuario
            bruja1.setEmbrujos(embrujos);//Usamos los setters para cambiar el número de embrujos
            cout<<"Dame el nombre de la bruja: "<<endl;//Se le pide al usuario otra dato
            cin>>nombre;//Se almacena aqui lo que digite el usuario
            cout<<"Dame su edad: "<<endl;//Se le pide al usuario otra dato
            cin>>edad;//Se almacena aqui lo que digite el usuario
            bruja1.setNombre(nombre);//Usamos los setters para cambiar el nombre
            bruja1.setEdad(edad);//Usamos los setters para cambiar la edad
            //Usamos los getters para acceder al dato que queremos obtener y juntamos las caracteristicas
            cout<<"Bruja- Me llamo "<<bruja1.getNombre()<<" y tengo "<<edad<<" años"<<endl;
            cout<<"Bruja- He realizado "<<bruja1.getEmbrujos()<<" embrujos muy tenebrosos a los que no comen bien"<<endl;
            cout<<"\n";
        }
        
        else if(opcion == 3){
            Fantasma fantasma1(4);
            fantasma1.asustar();
            fantasma1.mover_cosas();
            cout<<"Dame el número de apariciones que ha tenido el fantasma: "<<endl;//Pedimos apariciones
            cin>>apariciones;//Se almacena aqui lo que digite el usuario
            fantasma1.setApariciones(apariciones);//Usamos los setters para cambiar las apariciones
            cout<<"Dame el nombre:"<<endl;//Pedimos el nombre
            cin>>nombre;//Se almacena aqui lo que digite el usuario
            fantasma1.setNombre(nombre);//Usamos los setters para cambiar el nombre
            cout<<"Dame su edad:"<<endl;//Se almacena aqui lo que digite el usuario
            cin>>edad;//Se almacena aqui lo que digite el usuario
            fantasma1.setEdad(edad);//Usamos los setters para cambiar la edad
            //Usamos los getters para acceder al dato que queremos obtener y juntamos las caracteristicas
            cout<<"Fantasma-- Soy "<<fantasma1.getNombre()<<" y tengo "<<fantasma1.getEdad()<< " años asustando niños que desobedecen a sus papás"<<endl;
            cout<<"Fantasma: He asustado a "<<fantasma1.getApariciones()<<" niños apareciendome en sus cuartos cuando se portan mal muajajaja"<<endl;
            cout<<"\n";
        }
        
        else if(opcion == 4){
            //Si elige esta opción el ciclo while se termina y se imprime un mensaje de despedida
            continua = false;
            cout<<"Gracias por jugar. Adiós"<<endl;
        }
    }
    return 0;//El programa finaliza con éxito
}

