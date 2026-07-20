#include <iostream>
using namespace std;
int main(){
    cout << "enter";
    int x;
    int p=0;
    cin >> x;
    int c;
    int d=x;
    while(d>0){
        c=d%10;
        d=d/10;
        p=10*p+c;
    }
    if (p==x){
        cout << "yea";
    }
else {
    cout << "nope";
}
} 
