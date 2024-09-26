# EXPERIMENT 16
# AIM
To study and implement Exception handling in C++
# THEORY
Exception Handling in C++ is the system for detecting, handling, and managing runtime failures (exceptions) in a program. C++ provides an organized and controlled strategy to dealing with such scenarios, guaranteeing that the program can handle unexpected errors more gracefully and without crashing. <BR>

*KEY CONCEPT* : <BR>
1. Exceptions: An exception is an event that occurs during the execution of a program that disrupts the normal flow of the program’s instructions. Exceptions can arise from user input errors, hardware failures, or logic mistakes in the code. <BR>
2. Try, Throw, and Catch: <BR>
   * try: Code that might throw an exception is placed inside a `try ` block. The code in this block is monitored for errors. <BR>
   * throw: When an error or exception occurs, a `throw ` statement is used to signal that an exception has occurred. This statement transfers control to a corresponding catch block. <BR>
   * catch: The ` catch` block is used to handle the exception. It follows the `try` block and defines how the program will respond to the exception. <BR>
3. Syntax:
``` 
try {
    // Code that may generate exceptions
}
catch (exception_type e) {
    // Code to handle exceptions
}
```
# CODE & OUTPUT
* CODE A:
```
//SARA KANYAL
//23070123115
// Exception handling 
// Program 1
# include <iostream>
using namespace std;
int main(){
    float n1,n2, ans;
    cout << " Enter values of number 1 & 2 : " ;
    cin >>n1>>n2;
    try{
        if(n2==0){
            throw n2;
        }
        else{
            ans=n1/n2;
            cout<< " Answer = " << ans <<endl;
        }
    }
    catch(float num){
        cout<<"\nERROR : Division by "<< num<<endl;
    }
}


```
OUTPUT A:
 ![EXP16A](https://github.com/sarakanyal03/CDS_Experiment16/blob/main/16A.png )
* CODE B:
```
//SARA KANYAL
//23070123115
// Exception handling 
// Program 2
# include <iostream>
using namespace std;
int main() {
    int age;
    cout<<" Enter age ";
    cin>>age;
    try{
        if (age<18){
            throw age;
        }
        else {
            cout << " Age  : "<< age<<"\n APPROVED" <<endl;
        }
    }
    catch(int a){
        cout << "\n ERROR : Underage!(" << age <<")"<<endl;
    }
}
```
OUTPUT A:
 ![EXP16B]( https://github.com/sarakanyal03/CDS_Experiment16/blob/main/16B.png)
# CONCLUSION
Exception handling in C++ is an essential feature that allows developers to detect and manage runtime errors effectively. By using try, throw, and catch, programs can handle exceptions without abruptly terminating, improving both the robustness and the reliability of the code.
