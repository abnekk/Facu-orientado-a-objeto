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
		void setNick(int Nick_Jogador){
			Nick=Nick_Jogador;
		}
		int getNick(){
			return Nick;
		}
		void setSenha(int Senha_Jogador){
			Senha=Senha_Jogador;
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








