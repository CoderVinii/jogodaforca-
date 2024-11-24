#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

const string PALAVRA_SECRETA = "DINOSSAURO"; 
map<char, bool> chutou;
vector<char> chutes_errados;

bool letra_existe(char chute){
    for(char letra : PALAVRA_SECRETA){
        if(chute == letra){
            return true;
        }
    }
    return false;
}


int main () {
    
    cout << "********************************" << endl;
    cout << "*Bem Vindo ao meu Jogo da Forca*" << endl;
    cout << "********************************" << endl;
    cout << endl;


    bool nao_acertou = true;
    bool nao_enforcou = true;

    while(nao_acertou && nao_enforcou){
        for(char letra: PALAVRA_SECRETA){
            if(chutou[letra]) {
                cout << letra << " ";
            }
            else{
                cout << "_ ";
            }
        }
        cout << endl;

        cout << "Seu Chute: ";
        char chute;
        cin >> chute;

        chutou[chute] = true;

        if(letra_existe(chute)){
            cout << "Voce acertou! Seu chute esta na palavra." << endl;
        }
        else{
            cout << "Voce errou! Seu chute nao esta na palavra." << endl;
            chutes_errados.push_back(chute);
        }
        cout << endl;
    }
}