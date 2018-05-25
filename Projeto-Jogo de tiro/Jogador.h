#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

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
		Jogador(string Nick_Jogador, int Senha_Jogador){
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
		virtual ~Jogador(){};
		
};



