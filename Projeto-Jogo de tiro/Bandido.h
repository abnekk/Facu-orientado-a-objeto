using namespace std;


class Bandido : public Jogador{// sub-classe Bandido
	private:
		double Vida;
		int Balas;
		double dano;
	public:
		void Dano(){
			int r;
			srand (time(NULL));
			r = rand() % 4 + 1;
			if(r==1){
				int cabe�a;
				cabe�a = rand() % 85 + 1;
				cout << "Acertou a cabe�a: " << cabe�a << " de dano" << endl;
				vida = vida-cabe�a;
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
		Balas=Balas_Banadido;
	}
	int getBalas(){
		return Balas;
	}
	
}
