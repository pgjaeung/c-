#include <iostream>
using namespace std;
class Maxmin{
	double a,b,c;
	public:
		Maxmin(double a, double b, double c){
			this->a = a;
			this->b = b;
			this->c = c;
		}
		double getMax();
		double getMin();
};
double Maxmin::getMax(){
	double max = (a > b ? (a > c ? a : c) : (b > c ? b : c));
	return max;
}
double Maxmin::getMin(){
	double min = (a < b ? (a < c ? a : c) : (b < c ? b : c));
	return min;
}

int main(){
	double a,b,c;
	while (true){
		cout << "실수 세 개 입력 : "; cin>>a>>b>>c;
		if (a+b+c == 0) break;
		Maxmin* p = new Maxmin(a,b,c);
		cout << "최댓값은 " << p->getMax() << ", 최솟값은 " << p->getMin() << endl;
		delete p;
		
	}
	cout << "bye!" << endl;
}
