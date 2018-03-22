#include <cstdlib>
#include <iostream>
using namespace std;


class Data{
	public:
		void setDia(int Dia){
			this->Dia=Dia;
		}
		void setMes(int Meses){
			Mes=Meses;
		}
		void setAno(int Ano){
			this->Ano=Ano;
		}
		int getDia(){
			return Dia;
		}
		int getMes(){
			return Mes;
		}
		double getAno(){
			return Ano;
		}

	private:
		int Dia;
		int Mes;
		int Ano;

};
int Mudanca(int Dia, int Mes, int Ano){
	if(Dia >= 32){
		cout << "Data invalida, verifique o dia"<< endl;
 	Dia=0;

	}
	if(Mes >= 13){
		cout << "Data invalida, verifique o mes"<< endl;
 	Mes=0;

	}
	if(Mes == 2 && Dia == 29){
		double teste;
		teste=Ano%4;
		if(teste == 0.0){
			Dia= 29;
		}
  		else{
   			cout << "Data invalida o ano nao e bissexto"<< endl;
  		}
	}
	return Dia, Mes, Ano;
}
