#include <iostream>
using namespace std;

class punto // declaro la clase llamada punto
{
	
	public:
	    double x,y;
		void tomarpunto(const char pos)       //tomamos los puntos del usuario
		{
			cout << "Coordenada "<<pos<<" en x :" << endl;        
			cin  >> x;
			cout << "Coordenada "<<pos<<" en y :" << endl;
			cin  >> y;
		}
		void mostrarpunto(const char pos) //se muestran los puntos que ingresó el usuario
		{
			cout <<"Punto "<<pos<<":( "<< x << " , " << y << " )" << endl;
		}
		
};


inline void swap(double& a, double& b)		// Intercambio swap	
{													
    

    double temp = a;
	a = b;
	b = temp;
}


int main () // función principal
{
	double pend;
    
	punto p1, p2;
	p1.tomarpunto('1');
	p1.mostrarpunto('1');
	//-------------------------punto1
	p2.tomarpunto('2');
	p2.mostrarpunto('2');
	//-------------------------punto2
	
	swap(p1,p2);
	
	pend=(p2.y-p1.y)/(p2.x-p1.x); //cálculo pendiente
	cout<<"Nuevos puntos"<<endl;
	p1.mostrarpunto('1');
	p2.mostrarpunto('2');

	cout << "La pendiente es :" << pend<< endl;
}
