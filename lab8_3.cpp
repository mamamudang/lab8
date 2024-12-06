#include <iostream>
using namespace std;

int main(){
    
    int age;
    int height;
    int bou;
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        if(height < 100){
            cout << "Your character = Chopper";
        }else if (height < 180){
            cout << "Your character = Usopp";
        }else if (height >= 180){
            cout << "Enter your bounty: ";
            cin >> bou;
            if (bou <= 1100000000){
                cout << "Your character = Sanji";
            }else{
                cout << "Your character = Zoro";
            }
        }
    }else if (age <= 60){
        cout << "Enter your bounty: ";
        cin >> bou;
        if (bou > 500000000){
            cout << "Your character = Jinbe";
        }else{
            cout << "Your character = Franky";
        }
    }else if (age > 60){
        cout << "Your character = Brook";
    }
return 0;
}