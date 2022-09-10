#include <iostream>

using namespace std;

int main(){
float salarioAtual, reajuste, salarioAtualizado;
string nomeFuncionario;

cout << "Digite o salario atual: ";
cin >> salarioAtual;
cout << "Digite o seu nome : ";
cin >> nomeFuncionario;

reajuste = salarioAtual * 0.2;
salarioAtualizado = salarioAtual + reajuste;

cout << nomeFuncionario << "  , o seu salario atualizado e de : R$" << salarioAtualizado ;

}