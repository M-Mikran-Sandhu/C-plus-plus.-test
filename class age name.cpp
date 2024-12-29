#include<iostream>
using namespace std;

class person
{
    private:
        int age;
        string name;
        
    public:
    
    void in(){
        cout<<"Enter Name: ";
        cin>>name;
        
        cout<<"Enter Age: ";
        cin>>age;
    }   

    void out(){
        cout<<"Name: " <<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

    int ageout(){
        return age;
    }   
};

int main(){
    person p1,p2;
    
    p1.in();
    p2.in();
    
    if(p1.ageout() > p2.ageout()){
        p1.out();
        cout<<"is older"<<endl;
    }else if(p1.ageout() < p2.ageout()){
        p2.out();
        cout<<"is older"<<endl;
    }else {
        cout<<"Both are of the same age!"<<endl;
    }
    return 0;
}

