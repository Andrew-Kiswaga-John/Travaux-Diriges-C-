# include <iostream>
using namespace std;

class Fichier {
	private:
	char *P;
	int longeur;
	
	public:
	Fichier(int length): longeur(length) 
	{
		P = nullptr;
		}
	
	void Creation (){
		P = new char[longeur];
	}
	
	void Remplit (){
		
		if ( P != nullptr ){
			
			for (int i = 0 ; i < longeur ; i++ ){
				
				P[i] = 'A' + (i % 26);
			}
		}
	}
	
	void Affiche () {
		
			if ( P != nullptr ){
				
				for ( int i = 0 ; i < longeur ; i++ ){
					
					cout << P[i] << endl;
				}
			} else {
				cout << " ESPACE ALLOUER " << endl;
			}
		}
				
	~Fichier(){
		delete [] P;
	}
};

int main(){
	int th = 10;
	
	Fichier *myfile = new Fichier(th);
	
	myfile->Creation();
	myfile->Remplit();
	myfile->Affiche();
	
	delete myfile;
	
}
