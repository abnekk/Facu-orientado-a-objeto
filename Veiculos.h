#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;
class Veiculo{
	private:
		int Y;
		int X;
		int Velocidade;
		bool Fabrica;
		string Cor;
 	public:
		void setX(int X_Veiculo){
			X=X_Veiculo;
		}
		void setY(int  Y_Veiculo){
			Y=Y_Veiculo;
		}
		void setVelocidade(int  Velocidade_Veiculo){
			Velocidade=Velocidade_Veiculo;
		}
		void setFabrica(int  Fabrica_Veiculo){
			Fabrica= Fabrica_Veiculo;
		}
		void setCor(int  Cor_Veiculo){
			Cor=Cor_Veiculo;
		}
		int getX(){
			return X;
		}
		int getY(){
			return Y;
		}
		double getVelocidade(){
			return Velocidade;
		}
		int getFabrica(){
			return Fabrica;
		}
		string getCor(){
			return Cor;
		}
		int move(int x, int y, int *movimento, int *movimento2){
			int aleatorio;
			srand((unsigned)time(0)); //para gerar números aleatórios.
      			aleatorio = rand()% 3;
     		
				if(aleatorio==1){
					if(movimento[x+1]==0){
						movimento[x]=movimento[x+1];
					};
					if(movimento[x+1]==2){
						movimento[x]=movimento[x+1];
						//criar dois veiculos
					};
				};
				if(aleatorio == 3){
					if(movimento[x-1]==0){
          		    	movimento[x]=movimento[x-1];
          			};
          			if(movimento[x-1]==2){
          				movimento[x]=movimento[x-1];
						//criar dois veiculos
					};
				};
				
				if(aleatorio == 0){
					if(movimento[y+1]==0){
           		    	movimento2[y]=movimento2[y+1];
           			};
           		    if(movimento[y+1]==2){
           		    	movimento2[y]=movimento2[y+1];
						//criar dois veiculos
					};
				};
				if(aleatorio == 2){
					if(movimento[y-1]==0){
           		   		movimento2[y]=movimento2[y-1];
           			}
           		    if(movimento[y-1]==2){
           		    	movimento2[y]=movimento2[y-1];	
						//criar dois veiculos
					}
				}
		}
			
};
class Carro : public Veiculo{
    private:
	int Num_passageiros;
	public:
	int getNum_passageiros(){
		return Num_passageiros;
	};
	Carro(int Num_passageiros){
		this->Num_passageiros=Num_passageiros;
		};
};
class Caminhao : public Veiculo{
    private:
	int Cap_carga;
	public:
	int getCap_carga(){
		return Cap_carga;
	};
	Caminhao(int  Cap_carga){
        this->Cap_carga=Cap_carga;
		};
};


class Moto : public Veiculo{
    private:
	string Tipo;
	public:
	string	 getTipo(){
		return Tipo;
	};
	Moto(string  Tipo){
        this->Tipo=Tipo;
	};
};



class mundo : Moto, Caminhao, Carro{
	private:
		int tamanho_x;
		int tamanho_y;
	public:
		int Mapa[1801];
		void setTamanho_y(int Tamanho_y){
			tamanho_y=Tamanho_y;
		}
		void setTamanho_x(int Tamanho_x){
			tamanho_x=Tamanho_x;
		}
		int getTamanho_y(){
			return tamanho_y;
		}
		int getTamanho_x(){
			return tamanho_x;
		}
		DesenhaMundo(){
		}
		
}; 

