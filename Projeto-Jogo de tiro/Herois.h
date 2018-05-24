#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "Bandido.h"
#include "Policia.h"

using namespace std;

class Jogador{//Class do usuario
	private:
		string Nick;
		string Senha;
		int Placar;

	public:
		virtual void dano(){
			//int cabeça = rand() % 100; 
		}
		Jogador(string Nick_Jogador, int Senha_Jogador){
			Nick=Nick_Jogador;
			Senha=Senha_Jogador;
		}
		string getNick(){
			return Nick;
		}
		int getSenha(){
			return Senha;
		}
		void setPlacar(int Placar_Jogador){
			Placar=Placar_Jogador;
		}
		int getPlacar(){
			return Placar;
		}
		virtual ~dano(){};
		
}





