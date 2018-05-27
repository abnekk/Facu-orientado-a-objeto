#include "Jogador.h"
int main(int argc, char *argv[]){
	vector <Jogador*> J;
	Bandido* B;
	Policia* P;
	int i = 1;
	string nome;
	string pass;
	cout << "Aperte 1 para jogar. " << endl;
	cout << "Aperte 0 para sair. " << endl;
	Jogador *jogador = new Jogador("teste","123");
	cin >> i;
	while(i==1){
	  	cout << "Nick:  " << endl;
      	cin >> nome;
      	cout << "Senha:  " << endl;
       	cin >> pass;
        for (int l=1;l<=100;l++){  //busca
            switch(J.at(l)->getNick() == nome && J.at(l)->getSenha() == pass){
				switch(J.at(l)->getPlacar() == 1){
                   	cout << "Voce ganhou!" << endl;
                   	cout << "Gostaria de tenta jogar novamente?" << endl;
                   	cout << "Aperte 0 para mudar. " << endl;
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
						cout << "Aperte 0 para mudar. " << endl;
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
		
			
			if(i==1){
				Jogador *jogador = new Jogador(nome, pass);
				J.push_back(jogador);
            	cout << " O predio esta a pegar fogo, nao existe muito tempo para sair. "<< endl;
		   		cout << " A unica coisa entre voce e a liberdade e aquele homem em sua frente armado, tente sobreviver." << endl;
				cout << " 1 - Bandido "<< endl;
				cout << " 2 - Policia "<< endl;
				int play;
				cin >> play;
				cout << " Vida do Policial: "<< endl;
				int vidinha;
				cin >> vidinha;
				B->vidona(vidinha);
				cout << " Vida do Bandido: "<< endl;
				cin >> vidinha;
				P->vidona(vidinha);
				int n=1;
				while(n==1){
					B->combate();
					P->combate();
					switch(P->getVida()<=0){
						n==0;
						switch(play==2){
							play=1;
						}
					}
					switch(B->getVida()<=0){
						n==0;
						switch(play==1){
							play=2;
						}
					}
					
				}
				J.at(J.size())->setPlacar(play);
				i==1;
		    	}
		}
	
            cout << " Obrigado por jogar espero que tenha gostado." << endl;






	system("pause");
	return 0;
}
