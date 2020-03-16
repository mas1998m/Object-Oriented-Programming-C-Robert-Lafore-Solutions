#include <iostream>
using namespace std;
#include <conio.h>
class product{
private:
	int id;
	static int count;
public:
	product() :id(count){ count++; };
	void report(){
		cout << "I am product number: " << id;
	}

};
int product::count = 0 ;
int main(){
	product p0, p1, p2;
	product p3;
	p3.report();

	return 0;
}