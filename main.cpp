//Написать программу, проверяющую что сумма двух (введенных с клавиатуры) чисел лежит в пределах от 10 до 20 включительно), если да – вывести строку "true", в противном случае – "false";
//2. Написать программу, выводящую на экран строку “true”, если
//две целочисленные константы, объявленные в её начале либо
//обе равны десяти сами по себе, либо их сумма равна десяти.
//Иначе "false".

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Task1
//    int a,b;
//    cout << "Enter first number: ";
//    cin >> a;
//    cout << "Enter second number: ";
//    cin >> b;
//    if (a+b<21 && a+b>9)
//        cout << "True" << endl;
//    else
//        cout << "False" << endl;

//    //Task2
//    const int c=6, d=33;
//    if (c == 10){
//        cout << "True" << endl;
//    }
//        else if (d==10){
//        cout << "True" << endl;
//    }
//            else if (c+d==10){
//            cout << "True" << endl;
//    }
//    else
//            cout << "False" << endl;

//    //Task3
//    int i;
//    cout << "Your odd numbers: ";
//    for (i=1; i<50; i=i+2)
//    cout << " " << i;

//    //Task4
//    int x,cx;
//    bool bPrime = true;
//    cout << "Enter a number: ";
//    cin >> x;
//    for (cx=2; ix<=(sqrt(abs(x))); cx++){
//            if (x%cx==0){
//            bPrime = false;
//            break;
//            }
//        }
//        if(bPrime)
//            cout<<"This is a prime number"<<endl;
//        else
//            cout<<"This is NOT a prime number"<<endl;

    //Task5
    int iYear;
    cout << "Enter a year (from 0 to 3000): ";
    cin >> iYear;

//    switch (iYear){
//    case (iYear < 0):
//    cout << "You entered a not proper number. Try again" << endl;
//    cout << "Enter a year (from 0 to 3000): ";
//    cin >> iYear;
//    case (iYear > 3000):
//    cout << "You entered a not proper number. Try again" << endl;
//    cout << "Enter a year (from 0 to 3000): ";
//    cin >> iYear;
//    };

//    while (iYear<0 && iYear>3000){
//        cout << "You entered a not proper number. Try again" << endl;
//    }
//    cout << iYear << endl;

    return 0;
}
