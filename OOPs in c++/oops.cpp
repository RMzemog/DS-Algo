#include<iostream>
using namespace std;

class Employee{
    public:
    string Name;
    string Company;
    int Age;


    void IntroductYourself(){
        cout <<"Name = "<< Name << endl;
        cout <<"Company = "<< Company << endl;
        cout <<"Age = "<< Age << endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};
int main(){
        Employee employee1= Employee("Priya", "Oneplus", 19);
        employee1.IntroductYourself();
        Employee employee2= Employee("Anshu","Plusone",91);
        employee2.IntroductYourself();
} 