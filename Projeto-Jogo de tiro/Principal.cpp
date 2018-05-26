#include "Jogador.h"

int main(int argc, char *argv[]){
	vector <Jogador*> J;
	vector <Jogador*>::iterator it;
	int i = 1;
	string nome;
	string pass;
	while(i=1){
		cout << "Aperte 1 para jogar. " << endl;
		cout << "Aperte 0 para sair. " << endl;
		cin >> i;
		while(i==1){
      		cout << "Nick:  " << endl;
      		cin >> nome;
      		cout << "Senha:  " << endl;
       		cin >> pass;
            for (int l=0;l<=J.size();l++){  //busca
                switch(J.at(l)->getNick() == nome && J.at(l)->getSenha() == pass){
					switch(J.at(l)->getPlacar() == 1 ){
                    	cout << "Voce ganhou!" << endl;
                    	cout << "Gostaria de tenta jogar novamente?" << endl;
                    	cout << "Aperte 0 para jogar. " << endl;
						cout << "Aperte 1 para sair. " << endl;
						int k;
						cin >> k;
						J.at(l)->setPlacar(k);
						i=J.at(l)->getPlacar();
						if(J.at(l)->getPlacar() == 0){
							J.erase(J.begin()+ l);
						}
					}
					switch(J.at(l)->getPlacar() == 2){
						cout << "Voce perdeu!" << endl;
						cout << "Gostaria de tenta jogar novamente?" << endl;
						cout << "Aperte 0 para jogar. " << endl;
						cout << "Aperte 1 para sair. " << endl;
						int k;
						cin >> k;
						J.at(l)->setPlacar(k);
						i=J.at(l)->getPlacar();
						switch(J.at(l)->getPlacar() == 0){
                            J.erase(J.begin()+ l);
						}
					}
					
				}
			}
		}
			
			if(i==0){
                J.push_back(new Jogador(nome,pass));
            	cout << " O predio esta a pegar fogo, nao existe muito tempo para sair. "<< endl;
		   		cout << " A unica coisa entre voce e a liberdade e aquele homem em sua frente armado, tente sobreviver." << endl;
				cout << " 1 - Bandido "<< endl;
				cout << " 2 - Policia "<< endl;
				int play;
				cin << play;
				Jogador.setPlacar(combate(player));
				i==1;
		    	}
		
	}
            cout << " Obrigado por jogar espero que tenha gostado." << endl;






	system("pause");
	return 0;
}
