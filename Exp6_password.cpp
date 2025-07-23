#include <iostream>
using namespace std;
int main(){
    string a="qwertz";
    string b;
    int trys = 5;
    cout << "Enter a password: ";
    cin >> b;
    while (b != a) {
        trys--;
        if (trys == 0) {
            cout << "You have exceeded the maximum number of attempts." << endl;
            cout << "The system will be locked for 1 minute." << endl;
            return 0;
        }
        cout << "Incorrect password. Try again: "<<endl;
        cout << "Hint: The password is the first five letters of your keyboard." << endl;
        cout << "Enter a password: ";
        cin >> b;
    }
    cout << "Password accepted!" << endl;
    return 0;
    
}
/*Enter a password: qwertz
Password accepted!
Enter a password: eeeyg
Incorrect password. Try again: 
Hint: The password is the first five letters of your keyboard.
Enter a password: dgdfg
Incorrect password. Try again: 
Hint: The password is the first five letters of your keyboard.
Enter a password: fdgfd
Incorrect password. Try again: 
Hint: The password is the first five letters of your keyboard.
Enter a password: gfdg
Incorrect password. Try again: 
Hint: The password is the first five letters of your keyboard.
Enter a password: fdgs
You have exceeded the maximum number of attempts.
The system will be locked for 1 minute*/
