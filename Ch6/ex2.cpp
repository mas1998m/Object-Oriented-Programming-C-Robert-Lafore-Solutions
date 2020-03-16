#include <iostream>
using namespace std;
#include <conio.h>
class tollBooth{
private:
	unsigned int total_no_of_cars;
	double money_collected;
public:
	tollBooth() :total_no_of_cars(0), money_collected(0){};
	void payingCar(){
		total_no_of_cars++;
		money_collected += 0.5;
	}
	void nopayCar(){
		total_no_of_cars++;
	}
	void display()const{
		cout << "\nTotal number of cars is: " << total_no_of_cars << endl;
		cout << "Total money collected is: " << money_collected << endl;
	}
};

int main(){
	tollBooth myBooth;
	cout << "Press P for paying car & N for non paying car" << endl;
	char n;
	do {
		n= _getche();
		if (n == 'P') myBooth.payingCar();
		else if (n == 'N')myBooth.nopayCar();
	}while ((n != 27));
	myBooth.display();
	return 0;
}