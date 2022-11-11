//
//  main.cpp
//  Proyecto Autos
//
//  Created by José Omar Martínez on 11/11/22.
//

#include <iostream>
#include "Deportivo.h"
#include "Camion.h"
#include "Trailer.h"

int main() {
    Deportivo Deportivo1("Camaro", "Chevrolet", 250);
    cout<<"Deportivo: "<<Deportivo1.get_nombre()<<" "<<Deportivo1.get_marca()<<" "<<Deportivo1.get_velocidad()<<endl;
    
    Camion Camion1("Articulado", 20, 2.51);
    cout<<"Camión: "<<Camion1.get_nombre()<<" "<<Camion1.get_capacidad()<<" "<<Camion1.get_altura()<<endl;
    
    Trailer Trailer1("Cab-over", 2, 66.5);
    cout<<"Trailer: "<<Trailer1.get_nombre()<<" "<<Trailer1.get_remolque()<<" "<<Trailer1.get_peso()<<"toneladas"<<endl;
    
 
    return 0;
}
