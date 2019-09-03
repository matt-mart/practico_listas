int Extraer_Nodo(
  LISTA* _lista,
  int    _lugar
){

  NODO* nodo = _lista->raiz;
  int valor;
  for( int i = 0; i< _lugar; i+=1 )
    nodo = nodo->proximo;

  valor = nodo->valor;
  nodo->proximo->previo = nodo->previo;
  nodo->previo->proximo = nodo->proximo;

  _lista->largo -=1;
  delete nodo;

    return valor;


}
