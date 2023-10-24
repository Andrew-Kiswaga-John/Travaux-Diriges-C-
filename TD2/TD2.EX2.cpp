# include <iostream>
using namespace std;

int Paire (int n){
	
	return ( n % 2 == 0 );
}

int Multiple (int n){
	
	return ( n % 3 == 0 );
}


int main(){
	
	int m;
	
	cout << " donnez un entier : ";
	cin >> m;
	
	if ( Paire(m)){
		
		cout << m << " est une nombre paire " << endl;
	} 
	
	if ( Multiple(m) ){
		
		cout << m << " multiple de 3 " << endl;
	}
	
	 if ( Multiple(m) && Paire(m) ) {
		cout << m << " divisible par 6 " << endl;
	} else {
		
		cout << m << " est ni Paire , ni divisible par 3 " << endl;
	}
}
