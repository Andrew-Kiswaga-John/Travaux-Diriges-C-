# include <iostream>
using namespace std;
using std::string;

 class Animal{
	public:
	void set_value( string name, int age){
		
		nom = name;
		this->age = age;
	}
	
	protected:
	string nom;
	int age;
};

class Zebra: public Animal {
	public:
	
	void set_value(string name, int age, string habitat){
		nom = name;
		this->age = age;
		this->habitat = habitat;
	}
	void print_info(){
		cout <<" Je suis un zebra qui s'appelle " << nom << " J'ai " << age << " ans " << " J'habite a " << habitat << endl;
	}
		private:
		string habitat;
	};
	
	class Dolphin: public Animal{
		public:
		
		void set_value(string name, int age, string origin){
			nom = name;
			this ->age = age;
			this->origin = origin;
		}
		
		void print_info(){
			cout <<" Je suis un dolphin qui s'appelle " << nom << " J'ai " << age << " ans " << " Ma origine est " << origin << endl;
		}
		private:
		string origin;
	};
	
	int main(){
		Zebra zebra;
		Dolphin dolphin;
		
		zebra.set_value("ZEBU", 12, " Serengeti National Park, Tanzania ");
		dolphin.set_value("Doli", 13, " Indian Ocean ");
		
		cout << " Information sur les zebras " << endl;
		zebra.print_info();
		
		cout << " Information sur les dolphins " << endl;
		dolphin.print_info();
	
}
	
	
	
