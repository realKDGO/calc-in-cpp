#include<iostream.h>
#include<stdio.h>
#include<conio.h>

int main() {
 clrscr();

 double num1, num2, res;
 char choi;

 cout << "Enter first number: ";
 cin >> num1;

 cout << "Enter second number: ";
 cin >> num2;
 clrscr();
 cout << "Choose operator (+, -, *, /): ";
 cin >> choi;

 switch(choi) {
  case '+':
   clrscr();
   res = num1 + num2;
   cout << num1 << " + " << num2 << " is " << res;
   break;
  case '-':
   clrscr();
   res = num1 - num2;
   cout << num1 << " - " << num2 << " is " << res;
   break;
  case '*':
   clrscr();
   res = num1 * num2;
   cout << num1 << " * " << num2 << " is " << res;
   break;
  case '/':
  clrscr();
   res = num1 / num2;
   cout << num1 << " / " << num2 << " is " << res;
   break;
  default:
   clrscr();
   cout << "Error: Invalid Operator!";
  }

 getch();
 return 0;
}