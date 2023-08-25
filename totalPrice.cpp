/******************************************************************************
Basic Template for our C++ Programs.
*******************************************************************************/
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>       // String managment funtions.
#include <iostream>     // For input and output
#include <cmath>        // For math functions.
#include <math.h>
#include <cstdlib>
#include <cctype>
using namespace std;
////////////////////////////////////////////////////////////////////////
//         y = (rand()% (maxValue-minValue + 1)) + minValue          ///
////////////////////////////////////////////////////////////////////////


int main()
{
  string str;
  cout << "Please enter the first item price" << endl; //prompt for user input
  float price1; //declaring price1
  cin >> price1; //initilizing price1 with user input

  cout << "Please enter the second item price" << endl;
  float price2;
  cin >> price2;

  cout << "Please enter the third item price" << endl;
  float price3;
  cin >> price3;

  cout << "Please enter the fourth item price" << endl;
  float price4;
  cin >> price4;

  cout << "Please enter the fifth item price" << endl;
  float price5;
  cin >> price5;

  const float tax = 0.06;
  float totalPrice1 = (price1 + price2 + price3 + price4 + price5); //sum of all 5 prices
  float totalPrice2 = totalPrice1 * tax; //the total sum multiplied by the tax rate 0.06
  float totalPrice3 = totalPrice1 + totalPrice2; //the tax added back to the original sum
  cout << "Your total cost is $" << totalPrice3 << endl;

  return 0;
}
