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
	
}
