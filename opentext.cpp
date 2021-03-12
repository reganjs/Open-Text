//Regan 
//January 5th, 2021

//Write a program that opens a (text) file, and displays the contents of that file one line at a time. After a line has been displayed, the program should wait for the user to press the key before displaying the next line in the file.

//Tests: Created a text file that contains some sentences(each sentence per individual line) and then runs the program. When a line is displayed the program will wait for the user to press a key before displaying the next line in the file.

#include <iostream>
#include <fstream>
using namespace std;

void printdata(char filename[]) //function to print lines in the file
{
     
    ifstream fin(filename); //opens the file
    if(!fin.is_open()) //if the file is not found then display an error message and return from the function so there is no further execution
    {
      cout << "\nSorry "<<filename <<" file not found!\n\n";
      return;
    }
    string line; //string variable that holds a line taken from the file
    while(getline (fin, line, '\n')) //looping until there are lines in the file found
    {
      while(getchar() != '\n'); //waits for the user to press a key before displaying the next line in the file.
      cout << line; //displays a line taken from the file to the user 
    }
    cout << endl;
    fin.close(); //closes the file.
}

int main()
{
  char filename[100]; //character array that takes an input for the file name entered by the user
  cout<<"Enter file name: "; //requests user to enter file name
  cin>>filename; //takes input for the file name
  printdata(filename); //function call that prints lines in the file
  return 0;
}
