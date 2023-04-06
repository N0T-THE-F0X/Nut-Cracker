//Libraries:
#include <iostream>
#include <chrono>
#include <string>
using namespace std;

//Variabels:
string alphabet = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz1234567890`~!@#$%^&*()_-+=|}{][:;><.,?/";
string password, guess, curentletter, crack;
int i = 0, x =0;
bool check = true;

//Program:
int main(){
    cout << "Password: "; cin >> password;  //Asks for and saves your password
    auto start_time = chrono::high_resolution_clock::now(); //Starts the stop watch  
    while(check){
        guess = alphabet[i]; curentletter = password[x]; // restates the curent letters

        if(curentletter == guess){ //checks if its equal 
            x++; crack = crack + guess;
            
            if(password == crack){ //checks if the whole password has been cracked
                auto end_time = chrono::high_resolution_clock::now(); //ends the stopwatch
                auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time); //Computes the time diference
                cout << "\nPassword: " << password;
                cout << "\n Cracked: " << crack;
                cout << "\n    Time: " << duration.count() << " microseconds.";
                check = false;
            }
        }
        i++;
    }
return(1);
}
