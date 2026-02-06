//Task 2 created by Ilyan khan
/*Write a program to create a simple To-Do List application. The program
allows users to add tasks, view the current list of tasks, and remove
tasks once they are completed.*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string tasks[100];
    int num_tasks=0;
    int choice;
    do{
        cout<<"1.Add task.\n2.Display all tasks.\n3.Remove task.\n4.Exit.\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Enter task: ";
                cin>>tasks[num_tasks];
                num_tasks++;
                break;}
            case 2:
                {cout<<"Displaying all tasks\n";
                for(int i=0;i<num_tasks;i++){
                cout<<i+1<<". "<<tasks[i]<<endl; }
                break;}
            case 3:{
                if (num_tasks == 0) {
        cout << "Error: List is empty. Nothing to remove.\n";
        break;
    }
                int task_num;
                cout<<"Enter task number to remove: ";
                cin>>task_num;
                for(int i=task_num-1;i<num_tasks-1;i++){
                    tasks[i]=tasks[i+1];}
                num_tasks--;
                break;}
            }

            }while(choice!=4);
            return 0;
        }
    
