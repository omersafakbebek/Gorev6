#define _USE_MATH_DEFINES // M_PI
#include <cmath>
#include <iostream>
using namespace std;
class RegularPolygon{
	private:
		int n;
		double angle;
		static int count;
	
	public:
		
		RegularPolygon(int vertex){
		n=vertex;
		angle=((double) (n-2)/n)*M_PI;
		count+=1;
		}
		double getAngle(){
			return angle;
		}
		int getCount(){
			return count;
		}
		static void setCount(int c){
			count=c;
		}
		double area(double length){
			return n*length*length*(1/tan(M_PI/n))/4;
		}
		double length(double area){
			return pow(4*area/(n*(1/tan(M_PI/n))),0.5);
		}
};
int RegularPolygon::count=0;
int main(){	
	RegularPolygon square(4);
	cout << square.area(5);
	cout << square.length(49);
	return 0;
}
