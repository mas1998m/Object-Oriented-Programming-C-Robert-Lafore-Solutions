#include <iostream>
using namespace std;
#include <conio.h>
class angle{
private:
	int deg;
	float mins;
	char dir;

public:
	angle(){}
	angle(int d, float m, char di):deg(d), mins(m), dir(di){};
	void get(){
		cout << "enter the angle degrees:";
		cin >> deg;
		cout << "enter the angle minutes:";
		cin >> mins;
		cout << "enter the angle direction:";
		cin >> dir;
		return;
	}
	void display(void){
		cout << deg << "\xF8" << mins << "' " << dir;
		return;
	}

};

int main(){
	angle a1(13, 38.32, 'W');
	a1.display();
	cout << endl;
	while (1){
		angle a2;
		a2.get();
		a2.display();
	}
	return 0;
}