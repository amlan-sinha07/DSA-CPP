#include <iostream>
using namespace std;
int main() {

    int total_points=15;
    int items=2;
    double wrong_average=total_points/items;

    double correct_average=static_cast<double>(total_points)/items;
    cout<<"\n--- Common Use Case ---\n";
    cout<<"\nwrong average: "<<wrong_average;

    cout<<"\ncorrect average: "<<correct_average;
    cout<<endl;

    int integerNum=10;
    double doubleNum=5.5;
    double result=integerNum+doubleNum;
    
    cout<<"\n---Type Promotion---\n";
    cout<<"\nint: "<<integerNum<<"\ndouble: "<<doubleNum<<"\nresult is in double: "<<result;
    double pi=3.14159;

    int truncatedPi= pi;
    cout<<"\n---Type Demotion---\n";
    cout<<"\noriginal double value of pi: "<<pi;
    
    cout<<"\ntruncated value of pi: "<<truncatedPi;
    cout<<"\n";
    char letter='A';

    int asciiValue=letter+5;
    cout<<"\n---Character Promotion---\n";
    cout<<"\nchar: "<<letter<<" + 5 = ascii value : "<<asciiValue<<endl;

    double principal, rate , time , simple_interest;
    cout<<"\nEnter principle amount: ";
    
    cin>>principal;
    cout<<"\nEnter rate: ";
    cin>>rate;
    
    cout<<"\nEnter time in years: ";
    cin>>time;
    simple_interest=(principal*rate*time)/100;
    
    cout<<"\n----Result----\n";
    cout<<"\nPrincipal amount: "<<principal;
    cout<<"\nSimple interest: "<<simple_interest;
    
    cout<<"\nTotal Amount: "<<(principal+simple_interest);
    cout<<endl;
    float celsius12=36.99f;
    
    float fahrenheit12;
    fahrenheit12=((celsius12/5)*9)+32;
    cout<<celsius12<<" degree celsius converted into "<<fahrenheit12<<" degree ferenheit"<<endl;
    
    float radius11=7.33f;
    float area11=3.14*radius11*radius11;
    cout<<radius11<<" radius : area is: "<<area11<<endl;
    
    string name10="Amlan Sinha";
    int age10=20;
    int roll_number10=6;
    
    float percentage10=86.86;
    cout<<"name: "<<name10<<"\nage: "<<age10<<"\nroll number: "<<roll_number10<<"\npercentage: "<<percentage10<<endl;
    return 0;
}