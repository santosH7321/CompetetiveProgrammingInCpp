#include<iostream>
using namespace std;
int main(){
    //initilise
    int price, deductionPercentage, deductetPrice,overallPrice;
    //printing
    cout<<"Enter your actual Price and Percentage of dedecton in percent: ";
    //Taking Input
    cin>>price>>deductionPercentage;
    //Formula  of percentage
    deductetPrice = (price * deductionPercentage) /100;
    //deductetPrice deduction valu
    cout<<"deductetPrice reducing concetion: "<<deductetPrice<<endl;
    //over all price after bata (chhut)
    overallPrice = price - deductetPrice;
    cout<< "Over all price: "<< overallPrice;


}