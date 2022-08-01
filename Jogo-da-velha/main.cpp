#include<iostream>
using namespace std;


class Jogo{

    
    public:
        //ONDE OS PASSOS DOS JOGADORES VÃO SER SALVOS
        void tabuleiro(int l,int c, char xo){
            
            tab[l][c] = {xo};

        //imprimindo o tabuleiro
            for(int l = 0; l<3;l++){
                for(int c=0; c<3; c++){
                    cout<<tab[l][c];

                }
                cout<<"\n";
            }
        
        }
        // FINAL DA FUNÇÃO TABULEIRO

        //
        //VAI RECEBER A INFORMAÇÃO DO JOGADOR 1, ONDE NO TABULEIRO ELE QUER INSERIR O "O"
        //int Jogador1(int linha, int coluna){
        //    cout<<"chamou o Jogador 1 pra jogar"<<endl;
        //return linha;
        //};

        /* FINAL DA FUNÇÃO JOGADOR 1*/


        //VAI RECEBER A INFORMAÇÃO DO JOGADOR 1, ONDE NO TABULEIRO ELE QUER INSERIR O "X"
        //int Jogador2(int linha, int coluna){
        //    cout<<"chamou o Jogador 2 pra jogar"<<endl;
        //return linha;
        //};
        // FINAL DA FUNÇÃO JOGADOR 2*/

        void instrucoes(){
            cout<<"A forma de jogar é assim"<<endl;
        }; 

    private:
    char tab[3][3] = {' '};

};




int main(){
    
    //INICIALIZAÇÃO DA VARIAVEL PARA MENU
    int menu;
    Jogo plataforma;

    //APRESENTAÇÃO DO JOGO
    cout<<" \n\n\t Bem vindo ao Jogo da Velha!"<<endl;
    
    //MENU PARA ESCOLHER
    cout<<"\n\n Escolha uma opcao: \n   1 - Instrucoes.\n   2 - Jogar Solo.\n   3 - Jogar duo."<<endl;
    cin>>menu;
    switch(menu){

        case 1:
            cout<<plataforma.instrucoes()<<endl;
            break;
        case 2:
            //cout<<plataforma.<<endl;
            break;
        case 3:            
            cout<<"jogoDuo();"<<endl;
            break;
        default :
            cout<<"Opção Invalida, favor tentar novamente"<<endl;

    }

    return 0;
};