
#include <iostream>

using namespace std;

int main()
{
    float  preco_unit, total_prod, total_final, desc;
    string nome_prod;
    int qtde;
    
    cout << "Digite o nome do produto:";
    cin >> nome_prod;
    
    cout << "Digite a quantidade do produto:";
    cin >> qtde;
    
    cout << "Digite o preço do produto:";
    cin >> preco_unit;
    
    total_prod=preco_unit*qtde;
    
    if (qtde <=5){
        desc=total_prod*0.02;
        cout << "O produto escolhido foi:" << nome_prod << "\n";
        cout << "Com desconto de : " << desc << "\n";
        cout << "Total final: " << total_final << "\n";
            }
    else if (qtde > 5 && qtde <= 10){
        desc=total_prod*0.03;
        cout << "O produto escolhido foi:" << nome_prod << "\n";
        cout << "Com desconto de : " << desc << "\n";
        cout << "Total final: " << total_final << "\n";
    }
    else {
        desc=total_prod*0.05;
        cout << "O produto escolhido foi:" << nome_prod << "\n";
        cout << "Com desconto de : " << desc << "\n";
        cout << "Total final: " << total_final << "\n";
        
    }
    
}
