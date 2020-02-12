#include <iostream>
using namespace std;

int main(){

	unsigned int height;
	cout << "How tall is your ladder? ";
	cin >> height;
	if(cin.fail()!=0){
		cout << "Invalid input" << endl;
	}else if(height == 0){
		cout << "The height can't be zero." << endl;
	}
	string ladder_even = "###";
	string ladder_odd = "# #";
	int copy = height;
	for(int i=0; i<height; i++){
		if(i%2 == 0){
			cout << ladder_odd << endl;
		}else{
			cout << ladder_even << endl;
		}
	}
	return 0;
}
