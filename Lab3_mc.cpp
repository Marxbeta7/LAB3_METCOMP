# include <iostream>
//para poder importar string debo incluir una librería
# include <string>

//linea para plotear informaciòn en terminal

using namespace std;

int main(){

// comando cout imprime en consola    
cout<<"mi primer programa"<<endl ; 

//definimos variables
int a = 4;
float b = 6.0;
double c = 1e-6;
float k;
// ver en consola k 
cout<<"c="<<c<<endl;

//para pedir ingresar información uso el cin
int s;
cout<<"ingrese valor entero:";cin >>s;

//variable constante en caracter 
const char carac[]= "abcdefgh";
cout<<carac<<endl;

//definimos un string 

string g = "jaja esta es una prueba";

// definir un número binario

int v = 0b11;

//difinir un numero hexadecimal

int w = 0xa;

//imprimir numeros 
cout<<"el numero binario es:"<<v<<endl;
cout<<"el numero hexagesimal es"<<w<<endl;



return 0;
} 