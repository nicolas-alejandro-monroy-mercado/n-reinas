/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jordi
 *
 * Created on 3 de noviembre de 2016, 15:30
 */

#include "reinas.h"

int main() {

    int n = 0;
    while (n < 4) {
        cout << "Ingrese el tamaño de la matriz" << endl;
        cin >> n;
        if (n < 4) {
            cout << "Ingrese un numero mayor a 3" << endl;
        }
    }

    reinas *m = new reinas(n);
    m->GenerarMatrizA();
    m->GenerarMatrizB();
    
    for(int i=0; i< n; i++){
    m->GenerarMatrizA();
    m->GenerarMatrizB();
    m->Respuesta(i,0,1);
    }
    
    cout <<"Finalizo"<<endl;
    cout <<"Se ha creado el archivo 'ReinasSolucion'"<<endl;

 



}











