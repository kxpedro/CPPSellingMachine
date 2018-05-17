//Created by Pedro Henrique Rech Sarmento in 17/05/2018

#include <iostream>
using namespace std;

class maqvenda{
	protected:
		int m;
		int c;
		int opc;
		char nv;
		double saldo;
		double troco;
	
	public:				
		double insertSaldo(){			
			cout << "Moedas  = R$1,00" << endl;
			cout << "Cedulas = R$2,00" << endl;
			
			cout << "Insira numero desejado de moedas: "  << endl;
			cin >> m;		
			
			cout << "Insira numero desejado de cedulas: " << endl;
			cin >> c;
			
			saldo = m + (c * 2);
			
			if(saldo>9){
				cout << "Saldo: " << saldo << endl;					
				cout << "Saldo nao pode excer R$9,00" << endl;
								
				troco = saldo - 9;
				
				cout << "Retornando R$" << troco << ",00" << endl;
			}
			else{
				cout << "Saldo: R$" << saldo << ",00" << endl;	
			}			
			
			return saldo;
		}	
		
		double produto(){
			do{
				system("pause");
				system("cls");
	
				cout << "Lista de Produtos: "  << endl << endl;
				cout << "1 - Barra de Cereal - R$1,00" << endl;
				cout << "2 - Garra d'Agua    - R$2,00" << endl;
				cout << "3 - Coca Cola 400ml - R$3,00" << endl;
				cout << "4 - Salgado         - R$5,00" << endl;
				cout << endl;
				cout << "Saldo: R$" << saldo << ",00"  << endl;
					
				cin >> opc;
					
				switch(opc){
					case 0:
						cout << "Saindo..." << endl;
						break;
											
					case 1:
						cout << "Produto 1 Selecionado"    << endl;
						cout << "Barra de Cereal - R$1,00" << endl;
						saldo = saldo - 1;
						cout << "Saldo: R$" << saldo << ",00" << endl;
						break;
							
					case 2:
						cout << "Produto 2 Selecionado" << endl;
						cout << "Garra d'Agua - R$2,00" << endl;
						saldo = saldo - 2;
						cout << "Saldo: R$" << saldo << ",00" << endl;
						break;	
											
					case 3:
						cout << "Produto 3 Selecionado"    << endl;
						cout << "Coca Cola 400ml - R$3,00" << endl;
						saldo = saldo - 3;
						cout << "Saldo: R$" << saldo << ",00" << endl;
						break;
							
					case 4:	
						cout << "Produto 4 Selecionado"    << endl;
						cout << "Salgado - R$5,00"         << endl;
						saldo = saldo - 5;
						cout << "Saldo: R$" << saldo << ",00" << endl;
						break;
							
					default:
						cout << "Invalido..." << endl;
						break;				
				}
			}while(opc != 0 && nv == 's');
			
			return saldo;
		}
};


int main(int argc, char** argv) {
	
	maqvenda mv;
	
	char dj;
	
	do{		
		system("cls");
		cout << "Inserir dinheiro?" << endl;
		cin >> dj;
		if(dj == 's'){
			mv.insertSaldo();
			mv.produto();	
			system("pause");
		}		
	}while(dj == 's');

	
	return 0;
}
