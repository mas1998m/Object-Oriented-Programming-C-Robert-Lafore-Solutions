#include <iostream>
using namespace std;
#include <conio.h>
class time{
private:
	int hours, minutes, seconds;
public:
	time() :hours(0), minutes(0), seconds(0){};

	time(int h, int m, int s) :hours(h), minutes(m), seconds(s){};

	void display()const{
		cout << hours << ":" << minutes << ":" << seconds;
	}

	void add(const time t1,const time t2){
		hours = t1.hours + t2.hours;
		minutes = t1.minutes + t2.minutes;
		seconds = t1.seconds + t2.seconds;
		minutes += seconds / 60;
		seconds %= 60;
		hours += minutes / 60;
		minutes %= 60;
	}
};

int main(){
	time t1(15, 31, 35), t2(3, 3, 30), t3;
	t3.add(t1, t2);
	t3.display();
	return 0;
}