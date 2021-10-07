#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

class Banking{
private:
    string name;
    long accNo;
    long balanceAmt;
public:
    void display();
    void newAccount();
    void deposit();
    void withdrawl();
};

void Banking::deposit(){
    fflush(stdin);
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter amount to be deposited(>= 500): ";
    cin >> balanceAmt;
}

void Banking::newAccount(){
    fflush(stdin);
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNo;
    cout << "Enter balance amount: ";
    cin >> balanceAmt;
}

void Banking::display(){
    cout << "\n\t\t\tBanking System" << endl;
    cout << "*****************************************************************" << endl;
    cout << "\t\tAccount holder name: " << name << endl;
    cout << "\t\tBalance in Account: " << balanceAmt << endl;
    cout << "*****************************************************************" << endl;
}

void Banking::withdrawl() {
    int wd;
    fflush(stdin);
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter balance amount in account: ";
    cin >> balanceAmt;
    cout << "Enter the amount to be withdrawn: ";
    cin >> wd;
    balanceAmt = balanceAmt - wd;
    if(balanceAmt >= 500){
        cout << "Your balance amount is: " << balanceAmt << endl;
    }
    else{
        cout << "Your balance is below minimum!" << endl;
    }
}

int main() {
    char choice;
    int num;
    Banking a1;

    cout << "\t1. NewAccount" << endl;
    cout << "\t2. Deposit" << endl;
    cout << "\t3. Withdraw" << endl;
    cout << "\t4. Current Balance" << endl;
    cout << "\t5. Exit" << endl;
    cout << "Enter your choice: " << endl;
    cin >> num;

    switch (num) {
        case 1:
            a1.newAccount();
            a1.display();
            break;
        case 2:
            a1.deposit();
            a1.display();
            break;
        case 3:
            a1.withdrawl();
            break;
        case 4:
            a1.display();
            break;
        case 5:
            cout << "Exiting...";
            break;
        default:
            cout << "\a";
            break;
    }
}