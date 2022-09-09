// Name: Vi Le
// Course: CIS 005 Intro to Computer Sci)
// Date: 9/6/2022
// Assignment: Find the program Errors 

//  # 1

#include <iostream>
using namespace std;
int main ()
{
double number1, number2, sum;
cout << "Enter a number: ";
cin >> number1;
cout << "Enter another number: ";
cin >> number2;
sum = number1 + number2 ;
cout <<  "The sum of the two numbers is " << sum ;
return 0;
}

//  # 2

#include <iostream>
using namespace std;
int main()
{
float number1, number2;
float quotient;
cout << "Enter two numbers and I will divide\n";
cout << "the first by the second for you.\n";
cin >> number1 >>  number2;
quotient = static_cast<float>(number1) / number2;
cout << quotient ;
return 0;
}

//  # 3 
#include <iostream>
using namespace std;
int main()
{
int number1, number2, product;
cout << "Enter two numbers and I will multiply\n";
cout << "them for you.\n";
cin >> number1 >> number2;
product = number1 * number2;
cout << product;
return 0;
}
 
//  # 4

#include <iostream>
using namespace std;
int main()
{
    int number1, number2;
    cout << "Enter two numbers and I will multiply\n";
    cout << "them by 50 for you.\n";
    cin >> number1 >> number2;
    number1 *= 50;
    number2 *= 50;
    cout << number1 << " " << number2;
    return 0;
} 
 
//  # 5

#include <iostream>
 
using namespace std;
 
int main()
{
    double number, half;
    cout << "Enter a number and I will divide it\n";
    cout << "in half for you.\n";
    cin >> number ;
    half = number / 2;
    cout << fixed << showpoint << half << endl;
    return 0;
 
}

//  # 6

#include <iostream>
 
using namespace std;
 
int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hi " << name << endl;
    return 0;
 
}