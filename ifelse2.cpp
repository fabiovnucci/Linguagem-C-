#include <iostream>

using namespace std;

int main()
{
    float qtde, preco, total, totalDesconto;
    string produto;
    
    cout << "Digite o nome do produto:";
    cin >> produto;
    
    cout << "Digite a quantidade do produto:";
    cin >> qtde;
    
    cout << "Digite o preço do produto:";
    cin >> preco;
    
    total=qtde*preco;
    
    if (qtde <=5){
        totalDesconto=total-total*0.02;
        cout << "O produto " << produto << " totalizou com desconto: " << totalDesconto;
            }
    else if (qtde > 5 && qtde <= 10){
        totalDesconto=total-total*0.03;
        cout << "O produto " << produto << " totalizou com desconto: " << totalDesconto;
    }
    else {totalDesconto=total-total*0.05;
        cout << "O produto " << produto << " totalizou com desconto: " << totalDesconto;}
    
}
