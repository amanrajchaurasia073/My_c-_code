#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set(int);
    void get_roll(void);
};
void Student ::set(int r)
{
    roll_number = r;
}
void Student ::get_roll()
{
    cout << "The roll no is " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << "The marks in maths are " << maths << endl;
    cout << "The marks in physics are " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_marks();
        get_roll();
        cout << "Your percentage is " << (maths + physics) / 2 << endl;
    }
};
int main()
{
    Result a;
    a.set(23);
    a.set_marks(99.8, 91.9);
    a.display();
    return 0;
}