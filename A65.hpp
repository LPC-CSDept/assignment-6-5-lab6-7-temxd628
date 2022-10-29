//

#include <iomanip>
#include <iostream>
using namespace std;

void getinput(int &, int &, int &);
void swap(int &, int &);
void swap(int &, int &, int &);

void getinput(int &num1, int &num2, int &num3) {
    cin >> num1 >> num2 >> num3;
}

void swap(int &num1, int &num2) {
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void swap(int &num1, int &num2, int &num3) {
    swap(num2, num3);
    swap(num1, num2);
}
