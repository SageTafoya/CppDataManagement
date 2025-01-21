/*
Skeleton code for storage management
*/


#include <regex>
#include <string>
#include <ios>
#include <fstream>
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <cmath>
#include "classes-4.h"

using namespace std;

int main(int argc, char* argv[]) {

   
    

    // Initialize the Storage Manager Class with the Binary .dat file name we want to create
    StorageManager manager("EmployeeRelation.dat");


    // Assuming the Employee.CSV file is in the same directory, 
    // we want to read from the Employee.csv and write into the new data_file
    manager.createFromFile("Employee-2.csv");

    // Searching for Employee IDs Using [manager.findAndPrintEmployee(id)]
    /***TO_DO***/ 




    bool keepask = true;
    string chooseTask;
    

    while(keepask)
    {
        cout << endl;
        cout << "(1)Press [s] to search for employee by ID: " << endl;
        cout << "(2)Press [x] to exit: " << endl;
        cout << "Input: ";
        cin >> chooseTask;
        int empid;
        cout << endl;
        if(chooseTask == "s" || chooseTask == "S")
        {
            cin.clear();
            empid = 0;
            cout << "Enter the employee's id to search for: ";
            cin >> empid;
            cout << endl;
            // cout << empid+1 << endl;

            // cout << empid << endl;
            manager.findAndPrintEmployee(empid);
         

        }
        else if(chooseTask == "x" || chooseTask == "X")
        {
            keepask = false;
            break;
        }
        cout << endl;

    }


    return 0;
}