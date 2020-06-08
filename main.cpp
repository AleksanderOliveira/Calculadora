#include <iostream>
#include <locale>
#include <cmath>
double leitura(){
	double n;
	std::cout<<"Digite o numero: ";
	std::cin>>n;
	return n;
}
double soma(double a, double b){
	return a+b;
}
double subt(double a, double b){
	return a-b;
}
double mult(double a, double b){
	return a*b;
}
double div(double a, double b){
	if(b>0)
		return a/b;
	else
		return -1;
}
double pot(double a, double b){
	pow(a,b);
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	double a,b;
	int o;
	do{
	std::cout<<"####################################################\n";	
	std::cout<<"Digite a op��o que deseja: \n 1-Soma \n 2-Subtra��o \n 3-Multiplica��o \n 4-Divis�o \n 5-Potencia��o \n 6-Exponencia��o \n 0-Exit\n";
	std::cin>>o;
	switch(o){
		case 1:{
			a=leitura();
			b=leitura();
			std::cout<<"A soma �: " << soma(a,b) << std::endl;
			break;
		}
		case 2:{
			a=leitura();
			b=leitura();
			std::cout<<"A subtra��o �: " << subt(a,b) << std::endl;
			break;
		}
		case 3:{
			a=leitura();
			b=leitura();
			std::cout<<"A multiplica��o �: " << mult(a,b) << std::endl;
			break;
		}
		case 4:{
			a=leitura();
			b=leitura();
			
			if(div(a,b)!= -1)
			std::cout<<"A divis�o �: " << div(a,b) << std::endl;
			else
			std::cout<<"N�o � possivel dividir por zero"<<std::endl;
			break;
		}
		case 5:{
			a=leitura();
			b=leitura();
			std::cout<<"A potencia��o �: " << pow(a,b) << std::endl;
			break;
		}
		case 6:{
			a=leitura();
			std::cout<<"A exponencia��o �: "<< exp(a) << std::endl; //Ainda acho que o nome disso ta errado
			break;
		}
		default:{
			std::cout<< "Op��o Inv�lida";
			break;
		}
	}
	}while(o!=0);
	return 0;
}
