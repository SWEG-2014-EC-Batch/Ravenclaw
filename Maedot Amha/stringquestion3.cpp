#include <iostream>
#include <string.h>

using namespace std;
int main() { 
    int n,correctAns = 0,wrongAns = 0;
    string testAns[5]={'a','b','c'},studentAns[100];
    cout << " enter number of questions";
    cin >> n;
    for (int i =1; i<=n ; i++){
        cout <<" enter the student "<< i << " answer" << endl;
        cin >> studentAns[i];
        if ( studentAns[i]==testAns[i] ) {
            cout << "correct answer "<< endl;
            ++ correctAns ;
        } else {
            cout << " wrong answer"<< endl;
            wrongAns++;
        }
    }cout<< " you got "<< correctAns << " correct from "<< n << " questions";

    return 0;
    }