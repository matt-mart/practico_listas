int Extraer_Lugar (
  LISTA* _lista,
  int    _lugar
){

  if ( _lugar == 0 )
    return Extraer_Frente(_lista);

  if (_lugar == _lista->largo-1) // HIJO DE PUTA. :)
    return Extraer_Fondo(_lista);


  return Extraer_Nodo(_lista, _lugar );




}
