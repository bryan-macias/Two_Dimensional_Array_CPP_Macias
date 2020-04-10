//Student Name: Bryan Macias

//Teacher: Dr. Tyson McMillan

//Date: 4/10/2020

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

/*

Research Input data: go to http://www.weather.com

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//Santa Clara = 1, Houston = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: 66

City 1, Day 1: 66

City 1, Day 2: 60

City 1, Day 3: 55

City 1, Day 4: 53

City 1, Day 5: 51

City 1, Day 6: 51

City 1, Day 7: 56

City 2, Day 1: 74

City 2, Day 2: 74

City 2, Day 3: 70

City 2, Day 4: 68

City 2, Day 5: 66

City 2, Day 6: 64

City 2, Day 7: 67

*/

 

int main()

{

      const int CITY = 2;

      const int WEEK = 7;

 

    int temperature[CITY][WEEK];
    string cityArray[2] = {"Santa Clara", "Houston" };

    //Note your input data from the above

    cout << "Enter all temperature for a week of Santa Clara, California and then Houston, Texas. \n";

 

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << cityArray[i] << ", Day " << j + 1 << " : ";

            cin >> temperature[i][j];

        }

    }

 

    cout << "\n\nDisplaying Values:\n";

 

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << cityArray[i] << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }

 

    return 0;

}