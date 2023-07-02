#include <iostream>
#include <conio.h>
using namespace std;
int CalculPromedio (int a,int b,int c);
int main()
{
int a,b,c;
int promedio;

cout<<"ingresa 1ra nota:"<<endl;
cin>>a;
cout<<"ingresa 2da nota:"<<endl;
cin>>b;
cout<<"ingresa 3ra nota:"<<endl;
cin>>c;

promedio=(a+b+c)/3;
if (promedio<=6){
cout<<"desaprobado"<<endl;
}
else if(promedio>=7){
cout<<"aprobado"<<endl;
}
else if(promedio>=8){
cout<<"exelente"<<endl;
}
cout<<"el promedio total es: "<<CalculPromedio (a,b,c)<<endl;
getch();
return 0;
}
int CalculPromedio (int a,int b,int c){
	float resultado;
    resultado=(a+b+c)/3;
	return resultado;
}
