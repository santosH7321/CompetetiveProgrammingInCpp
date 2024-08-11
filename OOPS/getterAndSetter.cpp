#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    float cgpa;

public:
    
    // void getPercentage(){
    //     cout<<(cgpa * 10)<<" %"<< endl;
    // }
    // Setter
    void setName(string n, float gpa){
        name = n;
        cgpa = gpa;
    }

    // Getter
    string getName(){
        return name;
    }
    float getGpa(){
        return cgpa;
    }

};

int main(){
    Student s1;
    s1.setName("Santosh Kumar", 7.2);
    cout<<"Name: "<<s1.getName()<<endl;
    cout<<"CGPA: "<<s1.getGpa()<<endl;
    // s1.getPercentage();
}
