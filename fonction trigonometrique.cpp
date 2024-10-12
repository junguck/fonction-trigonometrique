#include <iostream>
//fonction permettant de calculer le factoriel
double factoriel(int a);
//fonction permettant de calculer la puissance 
double puissance(double b,int n);
//fonction permettant de caculer le cosinus 
double cos(float a);
//fonction permettant de calculer le sinus
double sin(float a);
double tan(float a);
const double pi=3.1415926535897932384626433832795;

int main(int argv,char** argc){
	int a;
	double b,c;
	
std::cout<<"saisissez le nombre dont on veut determiner le sinus le cosinus et la tangente\n";
std::cin>>b;
c=b;
            /*verification de la mesure principal*/while(b>360){b=b-360;}
            /*verification du cas particulier de la mesure de 90*/
			if(b==90){std::cout<<"-le cosinus de  "<<c<<"  est  [0]\n";
            std::cout<<"-le sinus de  "<<c<<"  est  [1]\n";
            std::cout<<"-la tangente de "<<c<<" est  [entree non valide]\n";
            }else if(b==180){
			std::cout<<"-le cosinus de  "<<c<<"  est  [-1]\n";
            std::cout<<"-le sinus de  "<<c<<"  est  [0]\n";
            std::cout<<"-la tangente de "<<c<<" est  [0]\n";            	
			}else if(b==270){
			std::cout<<"-le cosinus de  "<<c<<"  est  [1]\n";
            std::cout<<"-le sinus de  "<<c<<"  est  [-1]\n";
            std::cout<<"-la tangente de "<<c<<" est  [entree non valide]\n";	
			}
            else{
				std::cout<<"-le cosinus de  "<<c<<"  est  ["<<cos((b*pi)/180)<<"]\n-son sinus est ["<<sin((b*pi)/180)<<"] \n-sa tangente est ["<<tan((b*pi)/180)<<"]\n";
			}
			
	return 0;
}
//fonction permettant de calculer le factoriel
double factoriel(int a){
    int i=1;
    double f=1;
    for ( i = 1; i <=a; i++){
	f=f*i;
    }
    return f;
}
//fonction permettant de calculer la puissance 
double puissance(double b,int n){
    double bPn=1;
    int i;
    for ( i = 0; i <=n-1; i++)
    {
    bPn=bPn*b;
    }
    return bPn;
}
//fonction permettant de caculer le cosinus 
double cos(float a){
	double s=1;
	int cmt=1;
	int i;
	for(i=2;i<=12;i=i+2){
		if((cmt%2)==1){
			s=s-puissance(a,i)/factoriel(i);
			cmt++;
		}else{
			s=s+puissance(a,i)/factoriel(i);
			cmt++;
		}
	}
	return s;
}
//fonction permettant de calculer le sinus
double sin(float a){
	double s=a;
	int cmt=1;
	int i;
	for(i=3;i<=13;i=i+2){
		if((cmt%2)==1){
			s=s-puissance(a,i)/factoriel(i);
			cmt++;
		}else{
			s=s+puissance(a,i)/factoriel(i);
			cmt++;
		}
	}
	return s;
}
double tan(float a){
	double s;
	s=sin(a)/cos(a);
	return s;
}