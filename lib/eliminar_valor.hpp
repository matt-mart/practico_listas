NODO Eliminar_Valor(
  LISTA* _lista,
  int    _valor
){


  for ( NODO* nodo = _lista->raiz ; nodo != nullptr; ){

    if ( nodo->valor == _valor ){
    //---------------------------------------------------//
        NODO* prox = nodo->proximo;
    //---------------------------------------------------//
      if ( nodo == _lista->raiz)
        Extraer_Frente(_lista);

      else

      if ( nodo == _lista->copa)
        Extraer_Fondo(_lista);

      else
          Eliminar_Nodo(_lista, nodo);
      //---------------------------------------------------//

      nodo = prox;

    }
    else
      nodo = nodo->proximo;
  }

}
