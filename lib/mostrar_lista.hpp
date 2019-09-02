void Mostrar_Lista (
  LISTA _lista
){

   for ( NODO* nodo = _lista.raiz; nodo != nullptr; nodo=nodo->proximo  )
    std::cout << nodo->valor << std::endl;




}
