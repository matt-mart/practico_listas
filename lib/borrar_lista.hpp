void Borrar_Lista (
  LISTA* _lista
){

  NODO* ptr_nodo = _lista->raiz;

  while ( ptr_nodo != nullptr ){

    NODO* prox = ptr_nodo->proximo;

    delete ptr_nodo;

    ptr_nodo = prox;

  }



  _lista->raiz  = nullptr;
  _lista->copa  = nullptr;
  _lista->largo = 0;



}
