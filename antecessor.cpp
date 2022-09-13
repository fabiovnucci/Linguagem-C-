#include <iostream>

using namespace std;

int main(){
int valor, antecessor;
setlocale(LC_ALL,"Portuguese");
cout << "Digite um valor inteiro: ";
cin >> valor;
antecessor = valor -1 ;
cout << "O antecessor do " << valor << " é: " << antecessor;



}