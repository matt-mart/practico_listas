int Extraer_Frente(
  LISTA* _lista
){

  NODO nodo = *( _lista->raiz );
  delete _lista->raiz;
  _lista->largo -=1;
  _lista->raiz = nodo.proximo;


  return nodo.valor;

}
