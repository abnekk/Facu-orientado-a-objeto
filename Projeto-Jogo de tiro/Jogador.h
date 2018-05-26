#include "Policia.h"
#include "Bandido.h"

using namespace std;

class Jogador{//Class do usuario
	private:
		string Nick;
		string Senha;
		int Placar;

	public:
		virtual void Dano(){
			cout << "Atacou" << endl;
			
		}
		Jogador(string Nick_Jogador, string Senha_Jogador){
			Nick=Nick_Jogador;
			Senha=Senha_Jogador;
		}
		string getNick(){
			return Nick;
		}
		string getSenha(){
			return Senha;
		}
		void setPlacar(int Placar_Jogador){
			Placar=Placar_Jogador;
		}
		int getPlacar(){
			return Placar;
		}
		int combate(int Player){
			switch(Player == 1){
				while(1){
					string i;
                    cout << "Coloque qualquer coisa para atacar"<< endl;
                    cin << i;
					int D = Bandido.Dano();
					Policia.setVida() = Policia.setVida() - D;
					cout << "Vida atual do policial: " << Policia.getVida() << endl;
					if(Policia.getVida()<= 0){
						return 1;
					}
					cout << "Ataque inimigo"<< endl;
					int D = Policia.Dano();
					Bandido.setVida() = Bandido.setVida() - D;
					cout << "Vida atual do bandido: " << Bandido.getVida() << endl;
					if(Bandido.getVida()<= 0){
						return 2;
					}
				
			switch(Player = 2){
				while(1){
					string i;
                    cout << "Coloque qualquer coisa para atacar"<< endl;
                    cin << i;
					int D = Policia.Dano();
					Bandido.setVida() = Bandido.setVida() - D;
					cout << "Vida atual do bandido: " << Bandido.getVida() << endl;
					switch(Bandido.getVida()<= 0){
						return 1;
					}
					cout << "Ataque inimigo"<< endl;
					int D = Bandido.Dano();
					Policia.setVida() = Policia.setVida() - D;
					cout << "Vida atual do policia: " << Policia.getVida() << endl;
					switch(Policial.getVida()<= 0){
						return 2;
					}
		virtual ~Jogador(){};
		
};



