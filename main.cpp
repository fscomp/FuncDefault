#include <iostream>
#include <stdio.h>
using std::cin;
using std::cout;
using namespace std;



int quadradoPorValor( int );
void quadradoPorReferencia( int &);
float volume(float c = 1, float l = 1, float h = 1);

main()
{
int a, b, c;


cout<< "\nQUADRADO POR VALOR> Digite um numero inteiro: ";
cin >> a;
c = quadradoPorValor( a );
cout<< "\nO quadrado de " << a << " eh: "<< c;

cout<< "\nQUADRADO PO REF> Digite um numero inteiro: ";
cin>>b;
quadradoPorReferencia( b ); 
cout<< "\nO quadrado de " <<b<< " eh: "<< b;


    float comprimento;
    float largura;
    float altura;

    cout << volume() << endl;

    cout << "\nComprimento: ";
    cin >> comprimento;

    cout << "Largura: ";
    cin >> largura;

    cout << "Altura: ";
    cin >> altura;

    cout << "Volume = " << volume(comprimento, largura, altura) << endl;


}

float volume(float c, float l, float h){

        float vol = c * l * h;

    return vol;
  }



int quadradoPorValor( int number )
{
return number *= number;
}
void quadradoPorReferencia( int &numberRef )
{
numberRef *= numberRef ;
}
