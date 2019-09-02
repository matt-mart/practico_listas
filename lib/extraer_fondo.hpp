int Extraer_Fondo (
  LISTA* _lista
){

  NODO nodo = *(_lista->copa);
  delete _lista->copa;

  _lista->copa = nodo.previo;
  _lista->copa->proximo = nullptr;
  _lista->largo -=1;


  return nodo.valor;


}
