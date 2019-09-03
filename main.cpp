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
#include "./lib/eliminar_nodo.hpp"
#include "./lib/eliminar_valor.hpp"
#include "./lib/extraer_nodo.hpp"
#include "./lib/extraer_lugar.hpp"
#include "./lib/agregar_ordenado.hpp"

using namespace std;

int main()
{
    int valor = 50;
    LISTA lista;

    assert( lista.largo == 0 );
    assert( lista.raiz == nullptr );
    assert( lista.copa == nullptr );

    for (int i = 0; i<6; i+=1)
      Agregar_Fondo(&lista, i );

    Agregar_Ordenado(&lista, -1);
    Agregar_Ordenado(&lista, 3);


    Mostrar_Lista(lista);

    cout << " ---- " <<endl;
    Extraer_Lugar(&lista, 4);
    Mostrar_Lista(lista);

    Borrar_Lista( &lista );
}
