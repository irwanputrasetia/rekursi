#include <iostream>
#include <string>
using namespace std;

class olahraga {
    public:
        void gerak(string gerakan);
        int tempat(string lapangan);
        string teknik;
        void jmlpemain(int jumlah);
        };
int main(){ 
	olahraga renang,sepakbola,basket,angkatbesi,lari,voli; 
	renang.teknik		= " menahan napas, dan bergerak diair ";
	sepakbola.teknik 	= " menendang bola hingga masuk ke gawang ";
	basket.teknik 		= " memainkan bola dan melempar ke dalam ring ";
	angkatbesi.teknik 	= "mengangkat besi dengan beban dan waktu yang ditentukan ";
	lari.teknik 	    = "berlari cepat hingga garis finish ";
	voli.teknik  		= "memainkan bola bertim dengan tangan jangan sampai terjatuh ";
	
	cout << "ciri-ciri renang: \n\n";
	cout << (renang.teknik);
	renang.gerak(" mengayuh tangan dan menggerakkan kaki di air ");
	renang.tempat("kolam ");
	renang.jmlpemain(1);
	cout <<"===================================\n\n";
	
	cout << "ciri-ciri sepakbola: \n\n";
	cout << (sepakbola.teknik);
	sepakbola.gerak("menendang bola menggunakan kaki");
	sepakbola.tempat("dilapangan luas berumput");
	sepakbola.jmlpemain(11);
	cout <<"===================================\n\n";
	
	cout << "ciri-ciri basket: \n\n";
	cout << (basket.teknik);
	basket.gerak("memantulkan bola menggunakan tangan ");
	basket.tempat("lapangan dengan ada ring yang bergantung");
	basket.jmlpemain(5);
	cout <<"===================================\n\n";
	
	cout << "ciri-ciri angkat besi: \n\n";
	cout << (angkatbesi.teknik);
	angkatbesi.gerak("mengangkat besi dengan beban");
	angkatbesi.tempat("gym");
	angkatbesi.jmlpemain(1);
	cout <<"===================================\n\n";
	
	cout << "ciri-ciri lari: \n\n";
	cout << (lari.teknik);
	lari.gerak("berlari sekuat tenaga menggunakan kaki");
	lari.tempat("lapangan atau tempat terbuka");
	lari.jmlpemain(1);
	cout <<"===================================\n\n";
	
	cout << "ciri-ciri voli: \n\n";
	cout << (voli.teknik);
	voli.gerak("memukul dan mengcontrol bola agar tidak terjatuh");
	voli.tempat("lapangan berbatas di net ditengah lapangan");
	angkatbesi.jmlpemain(6);
	cout <<"===================================\n\n";
}
