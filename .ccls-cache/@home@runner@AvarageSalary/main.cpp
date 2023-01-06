#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{
    string name;
    int mark;
};

int main()
{
    // Prompt the user to enter their username and password
    cout << "Enter your username: ";
    string username;
    getline(cin, username);
    cout << "Enter your password: ";
    string password;
    getline(cin, password);

    // Check the login
    if (username == "VVK" && password == "VVK")
    {
        cout << "Login successful!" << endl;

  cout << "=======================================" << endl;
    // Open the file "data.txt" for reading
    ifstream input("data.txt");
