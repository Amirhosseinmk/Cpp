#include "expenses.h"
#include <iostream>
using namespace std;
int main(){
    Personal client1;
    client1.display();
    Personal client2("John",25,new double[12]{200,300,400,400,500,600,478,460,300,200,150,500},new double[12]{560,500,300,200,300,450,120,450,340,430,200,130});
    /*cout << "please insert client 2 monthly income:" << endl;
    double insertion[12];
    for(int i = 0 ; i < 12; i++){
        cin >> insertion[i];
    }*/
    cout << '\n';
    client2.display();
    cout << '\n';
    client1.setName("John Doe");
    client1.setMonthlyIncome(300,2); client1.setMonthlyIncome(2000,11);
    client1.setMonthlyExpenses(3450,4); client1.setMonthlyExpenses(490,5);
    client2.setMonthlyExpenses(4500,6);
    client2.setMonthlyIncome(1100,1); 
    client1.display();
    cout<< endl;
    client2.display();
    cout<< endl;
    cout << "Total Expenses:" << client2.getTotalExpenses() << '\n';
    cout << "Total Income:" << client2.getTotalIncome() << endl;
    cout << "Average Expenses:" << client2.getAverageExpenses() << endl;
    cout << "Average Income:" << client2.getAverageIncome() << endl;
    cout << "Total Saving:" << client2.getTotalSaving() << endl;
    

   
}