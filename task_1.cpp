//task 1 created by Ilyan khan
/*Write a program that simulates rolling a pair of dice. Each time the
program runs, it should randomly generate two numbers between 1
and 6 (inclusive), representing the result of each die. The program
should then display the results and ask if the user would like to roll
again*/
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    srand(time(0));
    char choice;
    do{
        int die1=(rand()%6)+1;
        int die2=(rand()%6)+1;
        cout<<"You rolled: "<<die1<<" and "<<die2<<endl;

        cout<<"You want to do again(y/n): ";
        cin>>choice;
    }while (choice=='y' || choice=='Y');
    cout<<"Exiting... Goodbye.";
    return 0;
}