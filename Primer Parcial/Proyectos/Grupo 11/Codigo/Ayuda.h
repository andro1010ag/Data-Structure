/*---------------------------------------------
*  Universidad de las Fuerzas Armadas Espe     *
* Nombres: Angel C�rdenas, Edison Ba�z         *
* NRC: 2967                                    *
* Fecha: 07/11/2019                            *
*                                              *
*----------------------------------------------*/
#include<iostream>
#include <conio.h>
#define AYUDA 59

using namespace std;

class Ayuda{
	
	public:
		
		void mostrarAyuda(){
			char tecla;
			bool flag;
			do{
				if(kbhit()){
					
					tecla=getch();	
				}else{
					tecla = 112;
				}
				
				switch(tecla){
					case AYUDA:
						system("Ayuda.chm");
			            break;
				}
			}while(true);		
		}
};

