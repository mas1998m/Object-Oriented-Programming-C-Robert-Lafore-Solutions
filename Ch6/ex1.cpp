#include <iostream>
using namespace std;
class Int{
private:
	int data;
public:
	Int():data(0) {}
	Int(int d) :data(d) {}
	void add_int(Int d1, Int d2){
		data = d1.data + d2.data;
		return;
	}
	void print_data(void){
		cout << data;
		return;
	}
};

int main(){

	Int o1(5), o2(3), o3;
	o3.add_int(o1, o2);
	o3.print_data();
	return 0;
}