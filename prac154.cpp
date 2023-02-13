//OOPS : CLASS


#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void setname(string s){
        name=s;
    }

    void printinfo(){
        cout<<"name = ";
        cout<<name<<endl;
        cout<<"age = ";
        cout<<age<<endl;
        cout<<"gender =";
        cout<<gender<<endl;
    }
    
};

int main(){
    
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        string s;
        cout<<"name = ";
        cin>>s;
        arr[i].setname(s);
        cout<<"age = ";
        cin>>arr[i].age;
        cout<<"gender =";
        cin>>arr[i].gender;
    }

    cout<<"---------------------------------------------------------------------"<<endl;
    for (int i = 0; i < 3; i++)
    {
        arr[i].printinfo();
    }
    
    
    return 0;
}