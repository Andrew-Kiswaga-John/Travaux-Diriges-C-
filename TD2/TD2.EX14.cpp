#include <iostream>
#include <vector>

using namespace std;

class Pile{
	private:
	vector<int> elements;
	
	public:
	Pile(){}
	
	void push( int n){
		elements.push_back(n);
	}
	
	void pop (){
		if (!elements.empty()){
			
			elements.pop_back();
		} else{
			cout << " Les valeurs sont null " << endl;
		}
	}
};

int main(){
	
	Pile p1;
	Pile p2;
	
	p1.push(10);
	p1.push(20);
	p1.push(30);
	
	p2.push(35);
	p2.push(25);
	p2.push(15);
	
	p1.pop();
	p1.pop();
	
	p2.pop();
	
	return 0;
}
		
