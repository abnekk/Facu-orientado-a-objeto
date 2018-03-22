/* Abner Souz Puertas
 *22115012-1
 *08/03/2018
 *CC3642
 */
#include "DateTest.h"

int main(int argc, char *argv[])
{
    int Dia = 1, Mes = 1, Ano = 1;
    Data Date;
    while(Dia != 0 && Mes != 0 && Ano != 0){
		cout << "Para fechar o progrma coloque 0 no Dia, mes ou ano"<< endl;
		cout << "Dia: ";
    	cin >> Dia;
    	cout << "Mes: ";
		cin >> Mes;
		cout << "Ano: ";
		cin >> Ano;

		Mudanca(Dia, Mes, Ano);
		Date.setDia(Dia);
		Date.setMes(Mes);
		Date.setAno(Ano);
		cout << "Data: "<<Date.getDia()<<"/"<<Date.getMes()<<"/"<< Date.getAno()<<endl;

	};
	system("pause");
	return 0;
}
