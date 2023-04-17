//Initializer list
/*declare an array while also populating the elements / indexes of the list with items

EX: int primesUnder10[4] = {2, 3, 5, 7 };
        array name  size    element list

Better to declare less items in the initializer list than exist in the array / index because under declaring causes no
errors, while exceeding the bounds of an array / list do cause compiler errors


remember while the declared size of the array may be array[5] or 5, the indexes will go from {0,1,2,3,4}
Don't use the number used to declare the list size to call an element in the array list, it will cause an error


*************Looping / iterating through an array*****************

use a for loop

EX: for (int i = 0; i < ArraySize; i++)
{
    cout << "Day of Week: " << days[i];
}


*******************Passing an Array to a function****************

 When passing an array or an array element to a function
 (for example making a function that changes the value of element [0])
 Be aware that arrays pass a reference automatically /  by default
 meaning that any function that modifies or changes an array or its elements
 doesn't make the changes to a copy but changes the original array itself


 *****************Struct Array************************************
 You can declare an array as a struct data type which will essentially create a multi-level more complex
 array with multiple parts / variables and data types to each element within the array

 EX:
 struct Date
 {
    int day;
    int month;
    int year;
 }

 Date dates[15];

 dates[0].day = 15;
 dates[0].month = 1;
 dates[0].year = 2017;

 dates[1] = {2, 17, 2020};

 ***********************2D Arrays*********************************

 Has rows and columns like a table

        int numbers [3][4]
 data type array name [# of rows][# of columns

 data elements still start at 0 for both the columns and rows


  2d Array Initilization

  EX:
  int numbers [3][4] = {

  {11, 13, 9, 12},  //row 1
  {3, 5, 21, 10},    //row 2
  {17, 15, 32, 4}    //row 3

  };


 *******************Iterating through a 2d Array*******************

 Use a for loop to iterate through the columns and nest it inside of a for loop to iterate through each row

 EX:
 char tactoe[Rows][Cols] = {
 {'X', ' ', 'O'},
 {'O', 'O', 'X'},
 {' ', 'X', ' '}
 };


 for (int r = 0; r < Rows; r++) {
    for (int c = 0; c < Cols; c++) {
        cout << tactoe[r][c] << "|"; // "|" symbol used to separate elements in each column, formats tic-tac-toe table
    }
    cout << endl <<"______" << endl; //used to format the tic-tac-toe grid for user, separates the rows
 }

 ****************** <cctype> ******************************

 <cctype> includes a series of character functions to test a char variable /  value for various conditions
 they return false / true depending on whether the condition is true or not

 isalnum() = is alpha or numeric?
 isalpha() = is it alphabetical?
 isblank() = is it blank / void?
 isdigit() = is it a number?
 islower() = is it lower case?
 isupper() = is it upper case?
 isspace() = is it a space?


 ****************** C-Strings ******************************

 recommended to use a string data type, but you can also use a character (char) array
 to represent a string or stand in as one.
 Useful / necessary when sending data back to the operating system

 Be sure to leave an additional space in  the array at the end of a char array declaration, as char arrays
 leave a null operator / value at the end of the array to denote the end of the c-string.

 ******************* C++ Strings *********************************
 string name;
 cin >> name

 You can use cin and >> operator to collect input but it has limitations
 It will read user input up until a space or enter key, preventing the user from entering a full sentence and etc.

 string name;
 Use getline(cin, name);
 This will take the user's entire input without requiring additional cin statements
 the only issue is that it can't be mixed with a cin >> statement and won't take a endl or new line keyword.


 ********************** Iterating Over Strings **********************I

 use a for loop in combo with .at(int num) function (looks at index corresponding to int num)
 or you can use the array index notation Ex: string[i];

 EX:
 string str  = "...";

 for(int i = 0; i < str.length(); i++)
 {
    cout << str.at(i) << endl;
    cout << str[i] << endl;

 }
*/
