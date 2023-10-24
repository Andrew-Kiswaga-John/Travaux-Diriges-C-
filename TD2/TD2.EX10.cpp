# include <iostream>
using namespace std;
using std::string;

class Personne{
	protected:
	string nom;
	string prenom;
	string dateNaissance;
	
	public:
	Personne (string nom, string prenom, string dateNaissance) 
	: nom(nom), prenom(prenom), dateNaissance(dateNaissance) {}
	
	virtual void Afficher (){
		cout << " Le nom est : " << nom << " prenom est " << prenom << " naissance est en " << dateNaissance << endl;
	}
};

class Employe : public Personne {
	private:
	double salaire;
	
	public:
	
	Employe( string nom, string prenom, string dateNaissance, double salaire )
	: Personne( nom, prenom, dateNaissance), salaire(salaire){}
	
	void Afficher() override {
		
		Personne::Afficher();
		cout << " La salaire est " << salaire << endl;
	}
	
};

class Chef : public Employe {
	private:
	string service;
	public:
	Chef (string nom, string prenom, string dateNaissance, double salaire, string service) 
	: Employe(nom, prenom, dateNaissance, salaire), service(service) {}
	
	void Afficher () override {
		Employe::Afficher();
		cout << " Le chef faites une service de " << service << endl;
	}
};

class Directeur : public Chef {
	private:
	string entreprise ;
	public:
	Directeur (string nom, string prenom, string dateNaissance, double salaire, string service, string entreprise): Chef (nom, prenom, dateNaissance, salaire, service), entreprise(entreprise){}
	
	void Afficher () override {
		Chef::Afficher();
		cout << " Le Directeur travail dans " << entreprise << endl;
	}
};

int main(){
	Personne personne ("John", "Abigail", "9/10/2006");
	Employe employe ( " John ", " Angel ", " 25/1/2005", 2500000.00);
	Chef chef ( " John ", " Andrew ", " 28/11/2000", 250000000.00, " CEO ");
	Directeur directeur ( " Peter ", " John ", " 1/8/1972", 25000000.00, " MD ", " Pluton Pay ");
	
	personne.Afficher();
	cout <<"\n";
	
	employe.Afficher();
	cout <<"\n";
	
	chef.Afficher();
	cout <<"\n";
	
	directeur.Afficher();
	cout <<"\n";
	
	
}
	
