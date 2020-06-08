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
	std::cout<<"Digite a opção que deseja: \n 1-Soma \n 2-Subtração \n 3-Multiplicação \n 4-Divisão \n 5-Potenciação \n 6-Exponenciação \n 0-Exit\n";
	std::cin>>o;
	switch(o){
		case 1:{
			a=leitura();
			b=leitura();
			std::cout<<"A soma é: " << soma(a,b) << std::endl;
			break;
		}
		case 2:{
			a=leitura();
			b=leitura();
			std::cout<<"A subtração é: " << subt(a,b) << std::endl;
			break;
		}
		case 3:{
			a=leitura();
			b=leitura();
			std::cout<<"A multiplicação é: " << mult(a,b) << std::endl;
			break;
		}
		case 4:{
			a=leitura();
			b=leitura();
			
			if(div(a,b)!= -1)
			std::cout<<"A divisão é: " << div(a,b) << std::endl;
			else
			std::cout<<"Não é possivel dividir por zero"<<std::endl;
			break;
		}
		case 5:{
			a=leitura();
			b=leitura();
			std::cout<<"A potenciação é: " << pow(a,b) << std::endl;
			break;
		}
		case 6:{
			a=leitura();
			std::cout<<"A exponenciação é: "<< exp(a) << std::endl; //Ainda acho que o nome disso ta errado
			break;
		}
		default:{
			std::cout<< "Opção Inválida";
			break;
		}
	}
	}while(o!=0);
	return 0;
}
