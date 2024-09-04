#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int input1;
int input2;
char operation;

char finished;
int fin;
string history;

int sum(int num1, int num2){
    int ans;
    ans=num1+num2;
    cout<<ans;
    return ans;
}
int diff(int num1, int num2){
    int ans;
    ans=num1-num2;
    cout<<ans;
    return ans;
}
int product(int num1, int num2){
    int ans;
    ans=num1*num2;
    cout<<ans;
    return ans;
}
int quotiant(int num1, int num2){
    int ans;
    ans=num1/num2;
    cout<<ans;
    return ans;
}



int main (void){
    while(true){
        cout << "welcome to my calculator please insert a number"<<endl;
        cin >> input1;
        cout << "now a second number"<<endl;
        cin >> input2;
        cout << "now what operation should be done between the two[+,-,*,/]"<<endl;
        cin >> operation;
        
        switch(operation) {
            case '+':
            fin=sum(input1,input2);
            history=history+to_string(fin)+ '\n';
            break;
            case '-':
            fin=diff(input1,input2);
            history=history+to_string(fin)+ '\n';
            break;
            case '*':
            fin=product(input1,input2);
            history=history+to_string(fin)+ '\n';
            break;
            case '/':
            fin=quotiant(input1,input2);
            history=history+to_string(fin)+ '\n';
            break; }
        
        while(true){
        cout<< " would you like to be done? y/n or h for calculator history";
    cin >> finished;
            if(finished=='y'){
                break;
            }
            else if(finished=='h'){
                cout<<history;
                continue;
            }
            else if(finished=='n'){
                break;
            } 
            else{
                continue;
            }           
        }
        if(finished=='n'){
            continue;
        }
        break;
    }
     return 0;

}

