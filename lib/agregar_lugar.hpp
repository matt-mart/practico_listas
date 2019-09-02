void Agregar_Lugar (

  LISTA* _lista,
  int    _valor,
  int    _lugar

){

  if ( _lugar == 0 )
    return Agregar_Frente(_lista, _valor);


  if ( _lugar == _lista->largo )
    return Agregar_Fondo( _lista, _valor);


  return  Agregar_Nodo( _lista, _valor, _lugar);



}
