#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct
{
    int camisa;
    int votos;
    float percentual;
} tJogador;

tJogador jogadores[23];

void Preenchimento()
{
    for(int i = 0; i < 23; i++){
        jogadores[i].camisa = (i + 1);
        jogadores[i].votos = 0;
    }
}

float Percentual(int votos,int nVotos)
{
    float porcentagem;
    porcentagem = (votos/nVotos)*100;
    return porcentagem;
}

int main()
{
    int opcao,nVotos=0,camisa;
    tJogador melhorJogador;
    melhorJogador.camisa = melhorJogador.votos = 0;
    while(1){
        cout << "Escolha uma opcao:\n";
        cout << "1.Votar\n";
        cout << "2.Total de votos\n";
        cout << "3.Lista de votos\n";
        cout << "4.Percentual\n";
        cout << "5.Melhor jogador\n";
        cout << "0.Sair\n\n";
        cout << "Opção desejada: ";
        cin >> opcao;
        fflush(stdin);
        switch(opcao)
        {
        case 1:
            cout << "Digite o numero da camisa do jogador\n\n";
            cin >> camisa;

            if(camisa>0&&camisa<24){
                jogadores[camisa].votos++;
                nVotos++;
            }
            else{
                cout << "Jogador invalido\n";
                opcao = 1;
            }
            break;
        case 2:
            cout << "Foram realizados: \n" << "--- " << nVotos << " votos ---\n\n";
            break;
        case 3:
            for(int i=0;i<23;i++){
                if(jogadores[i].votos>0){
                    cout << "Jogador: \n" << jogadores[i].camisa << "Votos: \n" << jogadores[i].votos << endl;
                }
            }
            break;
        case 4:
            for(int i=0;i<23;i++){
                cout << "Jogador: \n" << jogadores[i].camisa << "Percentual: '%'" << Percentual(jogadores[i].camisa,nVotos) << endl;
            }
            break;
        case 5:
            for(int i=0;i<23;i++){
                if(jogadores[i].votos>melhorJogador.votos){
                    melhorJogador.camisa = jogadores[i].camisa;
                    melhorJogador.votos = jogadores[i].votos;
                    melhorJogador.percentual = Percentual(jogadores[i].votos,nVotos);
                }
            }
            cout << "Jogador: \n" << melhorJogador.camisa << "Votos: \n" << melhorJogador.votos << "Percentual: '%'\n" << melhorJogador.percentual << endl;
            break;
        case 0:
            return 0;
        }
    }
}
