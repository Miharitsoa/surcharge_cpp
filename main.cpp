#include "Calcul.h"
//<>
int main(){
	
	Calcul*c=new Calcul();
	cout<<"12+15="<<c->addition(12,15)<<endl;
	cout<<"15.59+20.35="<<c->addition(15.59,20.35)<<endl;
	cout<<"18.546687+14.11145="<<c->addition(18.546687,14.11145)<<endl;
	cout<<"Mihari+tsoa="<<c->addition("Mihari","tsoa")<<endl;
	
	return 0;
}
