#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Worker
{
    string name;
    int salary;
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

// Read the data from the file into a vector of Student objects
vector<Worker> workers;
string line;
while (getline(input, line))
{
    // Use a stringstream to extract the name and mark from the line
    stringstream ss(line);
    string name;
    int salary;
    if (ss >> name >> salary)
    {

        {
            workers.push_back({ name, salary });
        }
    }
}

    // Check if the vector is empty
    if (workers.empty()) {
    cout << "~~~~No data found in the file.~~~" << endl;
    return 0;
}
else {
    cout << "Data file contains info" << endl;
}

// Calculate the average mark
    double total = 0;
    for (const auto& worker : workers)
    {
        total += worker.salary;
    }
    double average = total / workers.size();
    cout << "= Average salary: " << average << endl;
























      
  }    
else
    {
        cout << "Invalid username or password." << endl;
    }

    return 0;
}