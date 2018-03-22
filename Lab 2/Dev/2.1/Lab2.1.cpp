/* Abner Souz Puertas
 *22115012-1
 *08/03/2018
 *CC3642
 */
 
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Funcionario{
	public:
		void setNome(string Nome){
			this->Nome=Nome;
		}
		void setSobreNome(string SobreNome987){
			SobreNome=SobreNome987;
		}
		void setMensal(double Mensal_Funcionario){
			Mensal=Mensal_Funcionario;
		}
		string getNome(){
			return Nome;
		}
		string getSobreNome(){
			return SobreNome;
		}
		double getMensal(){
			return Mensal;
		}

	private:
		string Nome;
		string SobreNome;
		double Mensal;

};

	double Menor(double Salario){
		if(Salario <= 0){
			Salario = 0 ;
		};
		return Salario;
};
 double Mudanca(double Salario){
        Salario == Salario*1.10;
		return Salario;
	};

int main(int argc, char *argv[])
{
	string Nome;
	string SobreNome;
	double Mensal;
	
	Funcionario g1;
	Funcionario g2;
	
	cin >> Nome;
	cin >> SobreNome;
	cin >> Mensal;
	g1.setNome(Nome);
	g1.setSobreNome(SobreNome);
 	g1.setMensal(Menor(Mensal));
	
	cin >> Nome;
	cin >> SobreNome;
	cin >> Mensal;
	g2.setNome(Nome);
	g2.setSobreNome(SobreNome);
	g2.setMensal(Menor(Mensal));

	cout << "Funcionario 1: "<< endl;
	cout << "Nome:" << g1.getNome();
	cout << " " << g1.getSobreNome()  << endl;
    cout << "Salario: " << g1.getMensal() << endl;

    cout << "Funcionario 2: "<< endl;
	cout << "Nome: " << g2.getNome();
	cout << " " << g2.getSobreNome()  << endl;
    cout << "Salario: " << g2.getMensal() << endl;

    cout << "Apos o aumento:" << endl;
    cout << "Funcionario 1: " << g1.getMensal()*1.10 << endl;
    cout << "Funcionario 2: " << g2.getMensal()*1.10 << endl;
    
	system("pause");
	return 0;
}
