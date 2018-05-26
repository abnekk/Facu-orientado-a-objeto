#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

class Policia : public Jogador { // sub-classe Policia
	private:
		double Vida = 100.00;
		int Balas = 15;
	public:
		void Dano(){
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
		void tiros(){
			Balas = 30;
			
			
		}
		void setVida(int Vida_Policia){
			Vida=Vida_Policia;
		}
		int getVida(){
			return Vida;
		}
		void setBalas(int Balas_Policia){
			Balas=Balas_Policia;
		}
		int getBalas(){
			return Balas;
		}
		int combate(int player){
			
		}
		
};
 
