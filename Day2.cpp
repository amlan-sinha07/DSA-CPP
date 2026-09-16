#include <iostream>
using namespace std;
int main(){
    int number_20,integer_20;
    cout<<"\nEnter number_20: ";
    cin>>number_20;
    cout<<"\nEnter integer_20: ";
    cin>>integer_20;
    cout<<'\n';
    string result_20=(number_20>integer_20)? "number_20 is greater.":"integer_20 is greater.";
    cout<<'\n'<<result_20;
    return 0;
}