#include <assert.h>
#include <iostream>
#include "./lib/nodo.hpp"
#include "./lib/lista.hpp"
#include "./lib/agregar_frente.hpp"
#include "./lib/mostrar_lista.hpp"
#include "./lib/extraer_frente.hpp"
#include "./lib/agregar_fondo.hpp"
#include "./lib/extraer_fondo.hpp"
#include "./lib/agregar_nodo.hpp"
#include "./lib/agregar_lugar.hpp"
#include "./lib/borrar_lista.hpp"
using namespace std;

int main()
{
    int valor = 50;
    LISTA lista;

    assert( lista.largo == 0 );
    assert( lista.raiz == nullptr );
    assert( lista.copa == nullptr );

    cout << " " << endl;
    cout << " Todo piola por aca wachin" << endl;
    cout << " " << endl;

    Agregar_Frente( &lista, valor);
    Mostrar_Lista(lista);

    cout << " " << endl;
    cout << " Todo piola por aca wachin" << endl;
    cout << " " << endl;

    Agregar_Frente( &lista, valor+1);
    Mostrar_Lista(lista);

    cout << " " << endl;
    cout << " Todo piola por aca wachin" << endl;
    cout << " " << endl;

    Agregar_Frente( &lista, valor+2);
    Mostrar_Lista(lista);

    cout << " " << endl;
    cout << " Todo piola por aca wachin" << endl;
    cout << " " << endl;

    Agregar_Frente( &lista, valor+3);
    Mostrar_Lista(lista);

    cout << " " << endl;
    cout << " Todo piola por aca wachin" << endl;
    cout << " " << endl;

    Agregar_Frente( &lista, valor+4);
    Mostrar_Lista(lista);

    cout << " " << endl;
    cout << " Todo piola por aca wachin" << endl;
    cout << " " << endl;

    cout << "AVISO IMPORTANTE" << endl;
    cout << "Si por alguna casualidad usted desea" << endl;
    cout << "ingresar un valor en la penultima" << endl;
    cout << "posicion, contactese con el programador" << endl;
    cout << " 095 420 927 " << endl;


    Agregar_Lugar( &lista, 6053 , 5 );
    Mostrar_Lista(lista);

    cout << " " << endl;
    cout << " Todo piola por aca wachin" << endl;
    cout << " " << endl;

    cout << lista.largo << endl;

    Borrar_Lista( &lista );
}
