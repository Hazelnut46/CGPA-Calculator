#include <iostream>
#include <stdlib.h>
using namespace std;

void calculateGPA();
void calculateCGPA();
void method();

int main()
{
    system("cls");
    int input;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                    GPA & CGPA Calculator (Developed by Arnav)             "<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate GPA (Grade Point Average / Single Semester)"<<endl;
    cout<<"                   2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"                   3. Method that is applied here for calclating GPA & CGPA"<<endl;
    cout<<"                   4. Exit Application"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    sub:
    cout<<"Enter Your Choice: ";
    cin>>input;
    switch(input){
        case 1:
            calculateGPA();
            break;
        case 2:
            calculateCGPA();
            break;
        case 3:
            method();
            break;
        case 4:
            exit(EXIT_SUCCESS);
            break;

        default:
        cout<<"You have entered wrong input.Try again!\n"<<endl;
            goto sub;
            break;
    }
}

void calculateGPA(){
    int q;
    system("cls");
    cout << "-------------- GPA Calculating -----------------"<< endl;
    cout <<"How many subject's points you want to enter: ";
    cin>>q;


    float credit [q];
    float point [q];

    cout<<endl;
    for(int i=0;i<q;i++){
        cout<<"Enter the credit of subject"<<i+1<<": ";
        cin>>credit[i];
        cout<<endl;
        cout<<"Enter the point of subject"<<i+1<<": ";
        cin>>point[i];
        cout<<"-----------------------------------\n\n"<<endl;
    }

    float sum=0;
    float tot;
    for (int j=0;j<q;j++){
        tot=credit[j]*point[j];
        sum=sum+tot;
    }

    float totCr=0;
    for(int k=0;k<q;k++){
        totCr=totCr+credit[k];
    }

    cout<<"\n\nTotal Points Earned: "<<sum<<" . Total Credits: "<<totCr<<" . Total GPA: "<<sum/totCr<<" ."<<endl;


    sub:
    int inmenu;
    cout<<"\n\n1. Calculate GPA Again"<<endl;
    cout<<"2. Back to Main Menu"<<endl;
    cout<<"3. Exit Application"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>inmenu;



    switch(inmenu){

        case 1:
            calculateGPA();
            break;
        case 2:
            main();
            break;
        case 3:
            exit(EXIT_SUCCESS);
        default:
            cout<<"You have entered wrong input.Try again!\n"<<endl;
            goto sub;
    }
}




