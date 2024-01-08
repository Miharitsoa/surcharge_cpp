#ifndef __CALCUL_H_
#define __CALCUL_H_

#include <iostream>
#include <string>
using namespace std;

class Calcul{
	public:
		Calcul();
		double addition(int a,int b);
		double addition(float a,float b);
		double addition(double a,double b);
		string addition(string a,string b);
		~Calcul();
};

#endif
