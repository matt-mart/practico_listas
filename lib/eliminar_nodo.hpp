
int Eliminar_Nodo (
  LISTA* _lista,
  NODO* _nodo
){


    int valor = _nodo->valor;
    std::cout << "Eliminando nodo" << std::endl;
    _nodo->previo->proximo = _nodo->proximo;
    std::cout << "Eliminando nodo1" << std::endl;
    _nodo->proximo->previo = _nodo->previo;

    _lista->largo -=1;
    std::cout << "Eliminando nodo2" << std::endl;
    delete _nodo;

    return valor;


}
