
void Agregar_Frente (
  LISTA* _lista,
  int   _valor
){


  NODO* anterior = _lista->raiz;

  _lista->raiz = new NODO{

      nullptr,
      anterior,
      _valor

  };

  _lista->largo +=1;


  if ( _lista->largo > 1 )
    anterior->previo = _lista->raiz;
  else
    _lista->copa = _lista->raiz;



      //_lista->raiz->previo = new NODO{
     //     _valor,
      //    nullptr,
        //  _lista->raiz

      //};


      //_lista->raiz   = _lista->raiz->previo;
      //_lista->largo += 1;



}
