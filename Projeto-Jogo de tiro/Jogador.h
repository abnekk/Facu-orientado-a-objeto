#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
using namespace std;

class Jogador{//Class do usuario
	private:
		string Nick;
		string Senha;
		int Placar;

	public:
		virtual void Dano(){
			cout << "Atacou errado" << endl;
			
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
		
	
		virtual ~Jogador(){};
		
};

class Policia : public Jogador{ // sub-classe Policia
	private:
		int Vida;// Sera a vida do Bandido
	public:
		void vidona(int Vidinha){
			Vida=Vidinha;
		}
		void Dano(){//Dano que o Policial da no Bandido.
			int r;
			srand (time(NULL));
			r = rand() % 4 + 1;
			if(r==1){
				int cabeca; 
				cabeca = rand() % 20 + 60;
				cout << "Acertou a cabeca: " << cabeca << " de dano" << endl;
				Vida = Vida-cabeca;
				cout << "Vida atual: " << Vida << endl;
				
			}
			if(r==2){
				int Torax;
				Torax = rand() % 25 + 1;
				cout << "Acertou o torax: " << Torax << " de dano" << endl;
				Vida = Vida-Torax;
				cout << "Vida atual: " << Vida << endl;
			}
			if(r==3){
				int Membros;
				Membros = rand() % 15 + 1;
				cout << "Acertou um membro: " << Membros << " de dano" << endl;
				Vida = Vida-Membros;
				cout << "Vida atual: " << Vida << endl;
			}
			if(r==4){
				cout << "Erro" << endl;
				cout << "Vida atual: " << Vida << endl; 
			}
		}
		int combate(){//O ataque do Policial
					string i;
                    cout << "Coloque qualquer coisa para atacar"<< endl;
                    cin >> i;
					Dano();
					cout << "Vida atual do Bandido: " << Vida << endl;
					if(Vida<= 0){
						return 1;
					}
			}
		
		void setVida(int Vida_Bandido){//Aqui sra guardado a vida do Bandido
			Vida=Vida_Bandido;
		}
		int getVida(){
			return Vida;
		}
};
 
class Bandido : public Jogador{// sub-classe Bandido
	private:
		int Vida;// Sera a vida do Policial
	public:
		void vidona(int Vidinha){
			Vida=Vidinha;
		}
		void Dano(){//Dano que o Bandido da no Policial.
			int r;
			srand (time(NULL));
			r = rand() % 4 + 1;
			if(r==1){
				int cabeca;
				cabeca = rand() % 20 + 60;
				cout << "Acertou a cabeca: " << cabeca << " de dano" << endl;
				Vida = Vida-cabeca;
				cout << "Vida atual: " << Vida << endl;
				
			}
			if(r==2){
				int Torax;
				Torax = rand() % 35 + 1;
				cout << "Acertou o torax: " << Torax << " de dano" << endl;
				Vida = Vida-Torax;
				cout << "Vida atual: " << Vida << endl;
				
			}
			if(r==3){
				int Membros;
				Membros = rand() % 25 + 1;
				cout << "Acertou um membro: " << Membros << " de dano" << endl;
				Vida = Vida-Membros;
				cout << "Vida atual: " << Vida << endl;
			}
			if(r==4){
				cout << "Erro" << endl;
				cout << "Vida atual: " << Vida << endl;
				
			}
		}
		int combate(){//O ataque do Bandido
					string i;
                    cout << "Coloque qualquer coisa para atacar"<< endl;
                    cin >> i;
					Dano();
					cout << "Vida atual do Policial: " << Vida << endl;
					if(Vida<= 0){
						return 1;
					}
			}
		
		void setVida(int Vida_Policia){//Aqui sra guardado a vida do Policial
			Vida=Vida_Policia;
		}
		int getVida(){
			return Vida;
		}
		
	
	
};
