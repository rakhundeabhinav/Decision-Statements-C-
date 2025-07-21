//Abhinav Rakhunde
//PRN:24070123001

#include<iostream>
using namespace std;

int main()  {
    char alpha;
    cout<<"Enter a character="<<endl;
    cin>>alpha;

    if(alpha=='a' || alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U') {
        cout<<"Character is a vowel"<<endl;
    }
    else {
        cout<<"Character is consonant"<<endl;
    }

    return 0;

}

/* OUTPUT:
Enter a character=
g
Character is consonant
*/