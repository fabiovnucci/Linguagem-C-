#include <iostream>
#include <locale.h>
using namespace std;

int main(){
float valor , desconto, valorDesconto;
string nomeProduto;
setlocale(LC_ALL,"Portuguese");
cout << "Digite o nome do produto que recebera o desconto : ";
cin >> nomeProduto;

cout << "Digite o valor do produto: R$";
cin >> valor;

desconto = valor *  0.3 ;
valorDesconto = valor - desconto;


cout << "O valor do " << nomeProduto << " com desconto é de : R$" << valorDesconto ;


}