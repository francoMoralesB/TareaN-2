#include <iostream>
#include <string.h>

using namespace std;



int main(int argc, char *argv[]){

    

	if(argc > 1){
		if(strcmp(argv[1], "-so")==0){

		 if(argc == 5){ 
			cout<<"Entro al SO"<<endl;
			cout<<"Ingresaron los argumentos -so desde hasta archivo!!"<<endl;
			cout<<argv[1]<<endl;
			cout<<argv[2]<<endl;
			cout<<argv[3]<<endl;
			cout<<argv[4]<<endl;} else { cout<<"Mal ingresada la cantidad de parametros"<<endl;}
		}

		if(strcmp(argv[1], "-geo")==0){

		 if(argc == 5){ 
			cout<<"Entro al SO"<<endl;
			cout<<"Ingresaron los argumentos -geo desde hasta archivo!!"<<endl;
			cout<<argv[1]<<endl;
			cout<<argv[2]<<endl;
			cout<<argv[3]<<endl;
			cout<<argv[4]<<endl;} else { cout<<"Mal ingresada la cantidad de parametros"<<endl;}
		}
		else{
			if(strcmp(argv[1], "-v")==0){   //leo la segunda opcion de argumento enviado!

			   if(argc == 2){   
			   	cout<<"+----------------------------------------------------------------+"<<endl;                                    
				cout<<"|°Integrantes del Grupo                                          |"<<endl;
				cout<<"|-Franco Morales Barcelo                                         |"<<endl;
				cout<<"|-Cesar Miranda Guajardo                                         |"<<endl;
				cout<<"|-Cristobal Herrera Fuenzalida                                   |"<<endl;
				cout<<"+----------------------------------------------------------------+"<<endl;
				cout<<""<<endl;
				cout<<" Fecha de compilacion: "<< __DATE__ << " " << __TIME__ <<"        "<<endl;
				cout<<""<<endl;
				} else {cout<<"Mal ingresada la cantidad de parametros"<<endl;}

			}
		}
	
	}
	else{
		cout<<"Tiene que mandar algun parametro!"<<endl;
	}
}
