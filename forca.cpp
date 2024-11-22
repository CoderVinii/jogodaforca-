#include <iostream>
#include <string>
using namespace std;

bool letra_existe(char chute){
    for(int i = 0; i < palavra_secreta.size());
}


    
int main () { 
    string palavra_secreta = "DINOSSAURO";    
    
    bool nao_acertou = true;
    bool nao_enforcou = true;

    while(nao_acertou && nao_enforcou) {
        char chute;
        cin >> chute;

        if(letra_existe(chute)) {
            cout << "Voce acertou, seu chute esta na palavra." << endl;
        }
        else{
            cout << "Voce errou, seu chute nao esta na palavra." << endl;
        };
    }
}