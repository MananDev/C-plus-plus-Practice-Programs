#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter First number";
    cin>> a;
    cout<<"Enter Second number";
    cin>> b;
    int add= a+b;
    int sub= a-b;
    int div= a/b;
    int mul= a*b;
    cout<< "addition of 2 numbers is=" << add <<endl;
    cout<< "subtraction of 2 numbers is=" << sub <<endl;
    cout<< "division of 2 numbers is=" << div <<endl;
    cout<< "multiplication of 2 numbers is=" << mul <<endl;
	return 0;
}