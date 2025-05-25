#include <iostream>
#include <string>



using namespace std;
using std::string;


int main(){

    string str;

    int a;


//I have an Idea, lets use for loop for that if int num = a * 100 + b * 10 + c; seems like a lot of work to do for every character in the string, we can use a for loop to do that for us.
//as ur brother ,me , Mahbub is quite lazy

int StartPosition;
int EndPosition;
int total = 0;

cout << "Enter Some Number As String"<< endl;
cin >> str;

cout << "Enter Start Position (0 to "  << str.length() - 1 << " ): ";
cin >> StartPosition;

cout << "Enter End Position ("<< StartPosition + 1 << " to  "<< str.length() - 1 << " ): ";
cin >> EndPosition;


//Using For Loop
for (int i = StartPosition; i <= EndPosition; i++) {

total = total + ( (str.at(i) - '0') * pow(10, EndPosition - i));
}

cout << "The Extracted Number is: " << total << endl;



 //Using Substract Function 
total = stoi(str.substr(StartPosition, EndPosition - StartPosition + 1)); // string_variable_name.substr(start_position, length_of_substring);
cout << "The Extracted Number is: " << total << endl;
    return 0;
}
