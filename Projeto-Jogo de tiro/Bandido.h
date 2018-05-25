#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;


class Bandido : public Jogador{// sub-classe Bandido
	private:
		double Vida = 100.00;
		int Balas = 20;
	public:
		void Dano(){
			int r;
			srand (time(NULL));
			r = rand() % 4 + 1;
			if(r==1){
				int cabeca;
				cabeca = rand() % 20 + 50;
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
	void setVida(int Vida_Bandido){
		Vida=Vida_Bandido;
	}
	int getVida(){
		return Vida;
	}
	void setBalas(int Balas_Bandido){
		Balas=Balas_Bandido;
	}
	int getBalas(){
		return Balas;
	}
	
};
