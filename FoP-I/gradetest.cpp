#include <iostream>
#include <cmath>

using namespace std;
int main() {
float grade;
float test;
float quiz;
float project;
float assignment;
float finalExam;
first_input:
cout << " enter test result";
cin >> test;
if ( 0 > test || test > 15)
{
    cout << " invalid ";
    goto first_input;
}
second_input:
cout << " enter quiz result";
cin >> quiz;
if ( 0 > quiz ||quiz > 5)
{
    cout << " invalid ";
    goto second_input;
}
third_input:
cout << " enter project result ";
cin >> project;
if ( 0 > project || project > 20)
{
    cout << " invalid ";
    goto third_input;
}
fourth_input:
cout << " enter assignment result ";
cin >> assignment;
if ( 0 > assignment || assignment > 10)
{
    cout << " invalid ";
    goto fourth_input;
}
fifth_input:
cout << " enter final exam result";
cin >> finalExam;
if ( 0 > finalExam || finalExam > 50)
{
    cout << " invalid ";
    goto fifth_input;
}
grade= finalExam + test + quiz + project + assignment ;
cout << " Total grade "<< grade << endl;
if( grade >= 90)
{cout<< " a+";
}else if( grade >= 80){
cout<< " a";
}else if( grade >= 75)
{cout<< " b +";
}else if( grade >=60 )
{cout<< " b";
}else if( grade >=55 )
{cout<< " c+";
}else if( grade >=45 )
{cout<< " c";
}else if( grade >=30 )
{cout<< " d";
}else if ( grade>=20)
{cout<< " f";
}else " invalid ";
}


