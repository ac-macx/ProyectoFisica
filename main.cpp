#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;
///Declararacion de los subprogramas
void menu();
void coulomb();
void ohm();
void ohmIntensidad();
void ohmVoltios();
void ohmResistencia();
void resistenciaDeColores();
void salir();


///Programa principal
int main()
{
    menu();///el menu es el unico que se ejecuta en el Main principal

    return 0;
}

///Menu del programa
void menu(){
    int opcion=0; ///variable inicializado en 0
    do{             ///sirve para que el programa siga ejecutandose
    system("cls");
    cout<<"+-----------------------------------+"<<endl;
    cout<<"|  Bienvenido al Programa Fisica II |"<<endl;
    cout<<"+-----------------------------------|"<<endl;
    cout<<"|  1.- Ley de Coulomb               |"<<endl;
    cout<<"|  2.- Ley de Ohm                   |"<<endl;
    cout<<"|  3.- Resistencia de Colores       |"<<endl;
    cout<<"|  4.- Salir                        |"<<endl;
    cout<<"+-----------------------------------+"<<endl;
    cout<<"Eliga una opcion: "<<endl;
    cin>>opcion;
        switch (opcion){ ///switch para elegir el tema
        case 1: coulomb(); break;
        case 2: ohm(); break;
        case 3: resistenciaDeColores(); break;
        case 4: salir(); break;
        }
    }while (opcion!=4);
getch();///permite ver el resultado de la ejecucion
}

void coulomb(){
   ///las variables
float k = 9000000000;///valor constante
float q1;
float q2;
float r;
float f;
    system("cls");
    cout<<"+----------------------+"<<endl;
    cout<<"|   Ley de Coulomb     |"<<endl;
    cout<<"+----------------------+"<<endl;
    cout<<"|  valor constante = K |"<<endl;
    cout<<"| Ingrese las cargas q |"<<endl;
    cout<<"+----------------------+"<<endl;
    cout<<"Carga q1:"<<endl;
    cin>>q1;
    cout<<"Carga q2:"<<endl;
    cin>>q2;
    cout<<"Distancia de separacion (metros):";
    cin>>r;
    f=(k*(q1*q2))/(r*r);///proceso del programa
    cout<<"La fuerza es de: "<< f <<endl;
    getch();
}

void ohm(){
    int opcion1;///variable para el switch de ohm
    system("cls");
    cout<<"+-------------------------+"<<endl;
    cout<<"|        Ley de Ohm       |"<<endl;
    cout<<"+-------------------------+"<<endl;
    cout<<"|  1.- Buscar Intnesidad  |"<<endl;
    cout<<"|  2.- Buscar Voltio      |"<<endl;
    cout<<"|  3.- Buscar Resistencia |"<<endl;
    cout<<"+-------------------------+"<<endl;
    cout<<"Eliga una opcion: "<<endl;
    cin>>opcion1;
        switch (opcion1){ ///switch para elegir el tema
        case 1: ohmIntensidad(); break;
        case 2: ohmVoltios(); break;
        case 3: ohmResistencia(); break;
        }
    getch();///permite ver la ejecucion
}

void ohmIntensidad(){
    float i, v, r;
    system("cls");
    cout<<"+---------------------------+"<<endl;
    cout<<"| Encontrando la Intensidad |"<<endl;
    cout<<"+---------------------------|"<<endl;
    cout<<"Ingrese el Voltio: "<<endl;
    cin>>v;
    cout<<"Ingrese la Resistencia: "<<endl;
    cin>>r;
    i=v/r;
    cout<<"La Intensidad es de: "<< i <<endl;
    getch();
}

void ohmVoltios(){
    float i, v, r;
    system("cls");
    cout<<"+---------------------------+"<<endl;
    cout<<"|   Encontrando el Voltio   |"<<endl;
    cout<<"+---------------------------|"<<endl;
    cout<<"Ingrese la Intensidad: "<<endl;
    cin>>i;
    cout<<"Ingrese la Resistencia: "<<endl;
    cin>>r;
    v=i*r;
    cout<<"El voltio es de: "<< v <<endl;
    getch();
}

void ohmResistencia(){
    float i, v, r;
    system("cls");
    cout<<"+----------------------------+"<<endl;
    cout<<"| Encontrando la Resistencia |"<<endl;
    cout<<"+----------------------------+"<<endl;
    cout<<"Ingrese el Voltio: "<<endl;
    cin>>v;
    cout<<"Ingrese la Intensidad: "<<endl;
    cin>>i;
    r=v/i;
    cout<<"La Resisencia es de: "<< r <<endl;
    getch();
}

void resistenciaDeColores(){
    char colors[3];
    char valorColor;

    int valor;
    system("cls");
    cout<<" N=negro\n M=Marron\n R=rojo\n NA=naranja\n A=amarillo\n V=verde\n AZ=azul\n VI=violeta\n G=gris\n B=blanco\n";
    cout<<"\nIngresa las inicales de los tres primeros colores de las resistencias: \n";
    cin>>colors;

    cout<<"\n P=Plata \n D=Dorado";
    cout<<"\n\nIngrese la inicial del ultimo Color: ";
    cin>>valorColor;

    //evaluamos el primer elemento del arreglo comparandolo con las letras que representan cada color

    switch(colors[0]){
    case 'N':valor=0;break;
    case 'M':valor=10;break;
    case 'R':valor=20;break;
    case 'NA':valor=30;break;
    case 'A':valor=40;break;
    case 'V':valor=50;break;
    case 'AZ':valor=60;break;
    case 'VI':valor=70;break;
    case 'G':valor=80;break;
    case 'B':valor=90;break;
    default:
    cout<<"Opcion invalida";break;

    }
    //evaluamos el segundo elemento
    switch(colors[1]){
    case 'N':valor+=0;break;
    case 'M':valor+=1;break;
    case 'R':valor+=2;break;
    case 'NA':valor+=3;break;
    case 'A':valor+=4;break;
    case 'V':valor+=5;break;
    case 'AZ':valor+=6;break;
    case 'VI':valor+=7;break;
    case 'G':valor+=8;break;
    case 'B':valor+=9;break;
    default:
    cout<<"Opcion invalida";break;
    }

    //evaluamos el tercer elemento que es el multiplicador
    switch(colors[2]){
    case 'N':valor*=1;break;
    case 'M':valor*=10;break;
    case 'R':valor*=100;break;
    case 'NA':valor*=1000;break;
    case 'A':valor*=10000;break;
    case 'V':valor*=100000;break;
    case 'AZ':valor*=1000000;break;

    default:
    cout<<"Opcion invalida";break;
    }

    //se imprime el valor

    cout<<"\nEl valor de la resistencia es: " << valor << " ohms";

    switch(valorColor){
        case 'P':cout<<"+- 10%\n";break;
        case 'p':cout<<"+- 10%\n"; break;
        case 'D':cout<<"+- 5%\n"; break;
        case 'd':cout<<"+- 5%\n";break;

    }
    getch();
}

void salir(){
    system("cls");
    cout<<"Programa Finalizado"<<endl;
    getch();
}




