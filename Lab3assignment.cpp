s

#include <iostream>
using namespace std;
int securitycode(int n) {
    int product = 1;
    for (int i = n; i >= 1; i--) {
        product *= i;
    }
    return product;
}


int main()
{
        cout << "Task 1 Secret code machine: \n\n";
        int (*codeptr)(int);
        codeptr = securitycode;
        int secretcode;
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num == 0)
        {
            secretcode = 1;
            cout << "\nYour secret code is : " << secretcode << endl;
           
        }
        else if (num < 0)
        {
            cout << "Number must be positive..\nPlease try again: \n";
            cout << "Enter a number: ";
            cin >> num;
        }
        else 
        {

            secretcode = codeptr(num);

        }
      
        cout << "Your secret code is: " << secretcode << endl;

        cout << "Task 2 Coffee order process: \n\n";
        float resp = 200.0, rcapp = 150.0, rlatt = 100.0;
        float* esp = &resp;
        float* capp = &rcapp;
        float* latt = &rlatt;
        float qesp, qcapp, qlatt;

        float* pqesp = &qesp;
        float* pqcapp = &qcapp;
        float* pqlatt = &qlatt;
        float bill;
        float* ptrbill = &bill;

        cout << "1.esp=200\n2.cappu = 150\n3.latte=100\n";
        cout << "please order number of espresso:";
        cin >> qesp;
        cout << "please order number of cappucino:";
        cin >> qcapp;
        cout << "please order number of latte:";
        cin >> qlatt;

        *(ptrbill) = (*(esp) * *(pqesp)) + (*(capp) * *(pqesp)) + (*(latt) * *(pqlatt));
        cout << "\n" << bill;
        
        cout << "Task 3 Sport score tracker: \n\n";
        
        int number;
        cout << "Enter number of players particapating: ";
        cin >> number;  
        int* scores = new int[number];
     
        cout << "Enter scores for each player:\n";
        for (int i = 0; i < number; i++) 
        {
             cout << "Player " << (i + 1) << " Score is: ";
             cin >> scores[i];
        }
        cout << "\n--- Scores ---\n";
        for (int i = 0; i < number; i++)
        {
          cout << "Player " << (i + 1) << " score: " << scores[i] << endl;
        }
        
        delete[] scores;

        cout << "\nTask 4 Attendace Register: \n\n";

        int numbers;
        cout << "Enter number of students: ";
        cin >> numbers;

        int* attendance = new int[numbers];
        for (int i = 0; i < numbers; i++) {
            attendance[i] = 0;
        }

        cout << "Enter participant numbers to mark as present (1 to " << numbers << "), enter -1 to stop:\n";
        for (int i = 0; i < numbers; i++)
            {

            int p;
            cin >> p;
            if (p == -1)
            {
                break;
            }
            else if (p >= 1 && p <= numbers) {
                attendance[p - 1] = 1;
            }
            else {
                cout << "Invalid participant number.\n";
            }
        }
        cout << "\nAttendance List: \n";
        for (int i = 0; i < numbers ; i++)
        {
            cout << "Participant " << (i + 1) << " is: ";
            if (attendance[i] == 1)
            {
                cout << "Present\n";
            }
            else
            {
               cout << "Absent" << endl;
            }
        delete[] attendance;
          
        return 0;
}
