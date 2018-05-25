#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "Jogador.h"

using namespace std;
int main(int argc, char *argv[]){
	vector <Jogador*> J;
	int i = 1;
	int k;
	while(i=1){
		cout << "Aperte 1 para jogar. " << endl;
		cout << "Aperte 0 para sair. " << endl;
		cin >> i;
		while(i==1){
      		cout << "Nick:  " << endl;
      		cin << J.Nick << endl;
      		cout << "Senha:  " << endl;
       		cin << Jogador. << endl;
            for (int l=0;l<=J.size();l++){  //busca
                if(J.Nick[l]==J.Nick && J.Senha[l] == J.Senha ){
					if(J.Placar == 1 ){
                    	cout << "Voce ganhou!" << endl;
                    	cout << "Gostaria de tenta jogar novamente?" << endl;
                    	cout << "Aperte 1 para jogar. " << endl;
						cout << "Aperte 0 para sair. " << endl;
						cin >> J.Placar;
						k=i;
					}
					if(J.Placar == 2){
						cout << "Voce perdeu!" << endl;
						cout << "Gostaria de tenta jogar novamente?" << endl;
						cout << "Aperte 1 para jogar. " << endl;
						cout << "Aperte 0 para sair. " << endl;
						cin >> J.Placar;
						k=i;
					}
				}
			}
			
			if(k==0){
				J.erase (J.begin()+ l);
            	cout << " O predio esta a pegar fogo, nao existe muito tempo para sair. "<< endl;
		   		cout << " A unica coisa entre voce e a liberdade e aquele homem em sua frente armado, tente sobreviver." << endl;
				J.push_back(new Jogador(J.Nick, J.Senha));
				cout << " 1 - Bandido "<< endl;
				cout << " 2 - Policia "<< endl;
				int play;
				cin << play;
				combate(player);
		    
		    
		}
            cout << " Obrigado por jogar espero que tenha gostado." << endl;






	system("pause");
	return 0;
}
