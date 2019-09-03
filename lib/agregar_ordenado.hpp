void Agregar_Ordenado (
  LISTA* _lista,
  int _valor
){
//---------------------------------------------------------------------------//
  if ( _lista->raiz == nullptr
      || _lista->raiz->valor > _valor ){

    Agregar_Frente(_lista, _valor);
    return;

  }


//---------------------------------------------------------------------------//
  for ( NODO* nodo = _lista->raiz; nodo != nullptr; nodo = nodo->proximo){
    //-----------------------------------------------------------------------//
    if ( nodo->valor > _valor ){
        NODO* nodo_nuevo = new NODO{
            nodo->previo,
            nodo,
            _valor
        };
    //-----------------------------------------------------------------------//
        nodo->previo->proximo = nodo_nuevo;
        nodo->previo = nodo_nuevo;
        _lista->largo+=1;

    return;
    }
    //-----------------------------------------------------------------------//


  }
  Agregar_Fondo( _lista , _valor );
}
