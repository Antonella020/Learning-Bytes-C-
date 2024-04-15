/*
#include <iostream>

int main() {
  bool miBool = true;
  // false;
  char miCaracter ='132';
  unsigned int miEntero = 2147483648;
  float miFloat = 0.61f; // el f nos ayuda a poder llenar los datos con dos 00,
                         // en sus byts, es mejor utilizarlo.
  double miDouble = 12.036;

  std::cout << "mi booleano: " << miBool << std::endl;
  std::cout << "mi caracter: " << miCaracter << std::endl;
  std::cout << "mi entero: " << miEntero << '\n';
  std::cout << "mi float: " << miFloat << '\n';
  std::cout << "mi double: " << miDouble << '\n';

  return 0;
}
*/
/*
#include <iostream>

int main() {
  int a=0;
  float b=0;
  double c=0;
  bool d=false;
  char e='a';
  std::cout<<"Ingrese un valor entero"<<std::endl;
  std::cin>>a;
  std::cout<<"El valor ingresado es:"<<a<<std::endl;

  std::cout<<"Ingrese un valor float"<<std::endl;
  std::cin>>b;
  std::cout<<"El valor ingresado es:"<<b<<std::endl;

  std::cout<<"Ingrese un valor double"<<std::endl;
  std::cin>>c;
  std::cout<<"El valor ingresado es:"<<c<<std::endl;

  std::cout<<"Ingrese un valor bool"<<std::endl;
  std::cin>>d;
  std::cout<<"El valor ingresado es:"<<d<<std::endl;

  std::cout<<"Ingrese un valor char"<<std::endl;
  std::cin>>e;
  std::cout<<"El valor ingresado es:"<<e<<std::endl;
  return 0;
}
*/
#include <iostream>
int main()
{
	bool a{true},b{false},c,d,e,f;
	c=a && b;
	std::cout<<a<<" AND "<<b<<"="<<c<<std::endl;
	d=a || b;
	std::cout<<a<<" OR "<<b<<"="<<d<<std::endl;
	e=!a;
	std::cout<<"-"<<a<<"="<<e<<std::endl;
	f=!b;
	std::cout<<"-"<<b<<"="<<f<<std::endl;
}