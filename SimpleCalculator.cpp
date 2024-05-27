#include <iostream>
using namespace std;
int main(){

    cout<<"This is  a Simple Calculator."<<endl<<"Enter in format (Operand1 operator Operand2)."<<endl<<"Operators can be (+ - * /)"<<endl ;

    double num1 , num2 ;
    char op ;
    cin>>num1 >>op >>num2 ;

    switch(op)
    {
        case '+' :
        cout<< "your answer is " <<num1 + num2 <<endl ;
        break ;

        case '-' :
        cout<< "your answer is " <<num1 - num2 <<endl ;
        break ;
        
        case '*' :
        cout<< "your answer is " <<num1 * num2 <<endl ;
        break ;
        
        case '/' :
        if(num2 == 0){
            cout<< "Division is not possible." <<endl ;
        }
        else{
            cout<< "your answer is " <<num1 / num2 <<endl ;
        }
        break ;

        default :
        cout<< " INVALID OPERATOR. "<<endl ;
    }

    return 0;

}