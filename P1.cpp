#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        string rollno;
        string name;
        double fee;

    public:
        void inputdata(string a, string b, double c){
            this->rollno = a;
            this->name = b;
            this->fee = c;
        }
        void displaydata(){
            cout << this->rollno <<" "<< this->name <<" " << this->fee<<endl;
        }
};

int main(){
    Student S1;
    S1.inputdata("1234","S1",1254.0);
    S1.displaydata();
    Student S2;
    S2.inputdata("1234","S2",1254.0);
    S2.displaydata();
    Student S3;
    S3.inputdata("1234","S3",1254.0);
    S3.displaydata();
    Student S4;
    S4.inputdata("1234","S4",1254.0);
    S4.displaydata();
    Student S5;
    S5.inputdata("1234","S5",1254.0);
    S5.displaydata();
    Student S6;
    S6.inputdata("1234","S6",1254.0);
    S6.displaydata();
    Student S7;
    S7.inputdata("1234","S7",1254.0);
    S7.displaydata();
    Student S8;
    S8.inputdata("1234","S8",1254.0);
    S8.displaydata();
    Student S9;
    S9.inputdata("1234","S9",1254.0);
    S9.displaydata();
    Student S10;
    S10.inputdata("1234","S10",1254.0);
    S10.displaydata();
    
    return 0;
}