/*
a)Fazer o quadro resumo de variáveis, o quadro resumo de funções e o código fonte: 
Exercícios I, J e L da página 26 do livro: Estudo Dirigido de Algoritmos.
Não precisa criar menu, execute as funções e voids como foi feito no programa 3.
*/

#include "iostream"
#include "cstdlib"
using namespace std;

double const PI = 3.14; // constante
double const G = 9.8;    // constante
double MEDIA1 = 5; // variável global

void listar(){
  cout<<"PI = "<<PI;
  cout<<"G = "<<G;
  cout<<"media1 = "<<MEDIA1;
  cout<<"media2 = "<<MEDIA2<<endl;//Erro
  system("pause");
}

int main(){
  double MEDIA2=9;
   
  /*
  A variável local MEDIA2     não poderá ser usada dentro de outra função ou void a não ser a função onde ela foi criada localmente que neste caso é função main(),  MEDIA2 é uma variável local, esse código deverá ser alterado para compilar e funcionar
  */

  listar();

  return 0;
  
}
