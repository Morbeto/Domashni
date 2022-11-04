// ConsoleApplication25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{ /*task1
   int a;
    do {
        cin >> a;
    } while (a >= 100 || a  < 10);
  */
  /*task2
a)  int n, m;
cin >> n >> m;
for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
        cout << "*";
    }
    cout << endl;
}

*/
  /*task3
  int n;
  cout << "Enter n : ";
  cin >> n;
  for (int sum = n; sum > 1; --sum) {
      n *= sum - 1;
  }
  cout << "The sum is : " << n << endl;
  */
  /*task4
  int first , second , third;
   for (int number = 100;number < 1000 ; number++) {

       first = number / 100;
       second = (number / 10) % 10;
       third = number % 10;
       if (first != second && first != third)
       {
           if (second != third) {
               cout << number << endl;
           }
       }


   }
  */
    /*task 5
    int first, second, third;
    int sum;
    for ( int number = 100; number < 1000; ++number) {

        first = number / 100;
        second = (number / 10) % 10;
        third = number % 10;
         sum = first * second * third;
         if (sum == 0) {
             continue;
         }
         if (number % sum == 0) {
            cout << number << endl;
        }
    }
    */
    /*task2 
    a)  int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    */
   
}

    
    
   

    


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
