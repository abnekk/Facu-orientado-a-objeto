#include "Herois.h"
int main(int argc, char *argv[]){
	vector <Jogador*> J;
	int i = 0;
	while(i=0){
		cout << "Aperte 1 para jogar. " << endl;
		cout << "Aperte 0 para sair. " << endl;
		cin >> i;
		if(i==1){
		    //resto do programa
      		cout << "Nick:  " << endl;
      		cin << J.Nick << endl;
      		cout << "Senha:  " << endl;
       		cin << J.Senha << endl;
       		if(){
            for (int i=0;i<=J.size();i++){  //busco
                if(J.Nick[i]==J.Nick && J.Senha[i] == J.Senha ){
					if(J.Placar == 1 ){
                    


				}
				else{
                    cout << " O predio esta a pegar fogo, nao existe muito tempo para sair "<< endl;
					cout << " A unica coisa entre voce e a liberdade e aquele homem em sua frente armado, tente sobreviver, ou ..." << endl;




            }
		    J.push_back(new Jogador(J.Nick, J.Senha));
		    
		    
		}
		if(i==0){
            cout << " Obrigado por jogar espero que tenha gostado." << endl;
		}





}
	system("pause");
	return 0;
}
