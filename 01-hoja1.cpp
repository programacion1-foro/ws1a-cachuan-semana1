// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float a;
	float arect;
	float atotal;
	float atri;
	SIN_TIPO b;
	float brect;
	float btri;
	float c;
	cin >> a;
	cin >> b;
	cin >> c;
	atri = a-c;
	btri = b;
	arect = c;
	brect = b;
	atri = (atri*btri)/2;
	arect = (arect*brect);
	atotal = atri+arect;
	cout << atotal << endl;
	return 0;
}

