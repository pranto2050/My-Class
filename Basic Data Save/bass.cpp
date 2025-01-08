
#include <iostream>
#include <fstream>
#include "json.hpp" // Include the JSON library

using namespace std;
using json = nlohmann::json;

int main() {
    // Step 1: Initialize variables to store user input
    string name, mobile;

    // Step 2: Take input from the user
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your mobile number: ";
    getline(cin, mobile);

    // Step 3: Create a JSON object and set values
    json user_data;
    user_data["name"] = name;
    user_data["mobile"] = mobile;

    // Step 4: Write the JSON data to a file
    ofstream output_file("user_data.json");
    if (output_file.is_open()) {
        output_file << user_data.dump(4); // Save JSON with indentation
        output_file.close();
        cout << "Data has been saved to user_data.json file." << endl;
    } else {
        cout << "Error: Could not open file to write data." << endl;
    }

    return 0;
}
