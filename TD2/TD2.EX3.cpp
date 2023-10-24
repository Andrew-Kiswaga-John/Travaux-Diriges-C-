# include <iostream>

using namespace std;

int main(){
	
	int tab[10];
	int i;
	
	for ( i=0; i < 10; i++){
		cout << " Entrez les valeurs " ;
		cin >> tab[i];
	}
	// Maniére 1 
	int min = tab[0];
	int max = tab[0];
	
	for ( i = 1; i < 10; i++ ) {
		
		if ( tab [i] < min ){
			
			min = tab [i];
		}
		
		if ( tab [i] > max ){
			
			max = tab [i];
		}
		
	}
	
	cout << " Le nombre maximum dans la tableau est " << max << endl;
	cout << " Le nombre minimum dans la tableau est " << min << endl;
	
	
	// Maniére 2 
	
	int *ptMin = &tab[0];
	int *ptMax = &tab[0];
	
	for ( i = 1; i < 10; i++ ){
		
		if ( tab [i] < *ptMin ){
			
			ptMin = &tab[i];
		}
		
		if ( tab [i] > *ptMax ){
			
			ptMax = &tab[i];
		}
	}
	
	cout << " Le nombre maximum dans la tableau est " << *ptMax << endl;
	cout << " Le nombre minimum dans la tableau est " << *ptMin << endl;
}
