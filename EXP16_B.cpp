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