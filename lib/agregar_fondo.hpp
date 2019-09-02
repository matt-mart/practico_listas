void Agregar_Fondo (
  LISTA* _lista,
  int    _valor
){

  NODO* anterior = _lista->copa;

  _lista->copa = new NODO{
      anterior,
      nullptr,
      _valor
  };

  _lista->largo +=1;


   if ( _lista->largo > 1 )
    anterior->proximo = _lista->copa;
  else
    _lista->raiz = _lista->copa;




}
