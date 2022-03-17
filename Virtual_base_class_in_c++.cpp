#include<iostream>
using namespace std;
class Student{
    protected:
    int roll_number;
    public:
    void set_roll(int r){
        roll_number=r;
    }
    void get_roll(){
        cout<<"Your roll no is "<<roll_number<<endl;
    }
};
class Test:virtual public Student{
    protected:
    float maths,physics;
    public:
    void set_marks(int m,int p){
        maths=m;
        physics=p;
    }
    void get_marks(){
        cout<<"Your maths marks is "<<maths<<endl
            <<"Your physics marks is "<<
                physics<<endl;
    }
};
class Sports: public virtual Student{
    protected:
    int score;
    public:
    void set_score(int s){
        score=s;
    }
    void get_score(){
        cout<<"Your score is "<<
        score<<endl;
    }
};
class Result:public Test,public Sports{
    protected:
    int total;
    public:
    void  display(){
        total=maths+physics+score;
        get_roll();
        get_marks();
        get_score();
        cout<<"Your Result is "<<total<<endl;
    }
};
int main(){
    Result r;
    r.set_roll(23);
    r.set_marks(89.7,78.5);
    r.set_score(9);
    r.display();
return 0;
}