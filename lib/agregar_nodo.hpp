void Agregar_Nodo(
  LISTA* _lista,
  int    _valor,
  int    _lugar
){


  NODO* nodo = _lista->raiz;


  for( int i = 0; i<_lugar; i+=1){

    nodo = nodo->proximo;

  }

  NODO* nodo_nuevo = new NODO{
    nodo->previo,
    nodo,
    _valor
  };

  nodo->previo->proximo = nodo_nuevo;
  nodo->proximo->previo = nodo_nuevo;

  _lista->largo+=1;





}
