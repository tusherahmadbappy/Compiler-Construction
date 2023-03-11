#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cout << "Enter my word: ";
    cin >> s;
    int len = s.length();
    int k=1;

    if(s=="printf" || s=="main" || s=="cin" || s=="cout" || s=="function" ){
        cout << "This is a keyword" << endl;
    }else if(s=="number" || s=="value" || s=="malloc" || s=="puts"){
        cout << "This is an identifier" << endl;
    }else if(s=="=" || s=="+" || s=="-" || s=="*" || s=="/"){
        cout << "This is an operator" << endl;
    }else if(s=="$" || s=="#" || s=="@" || s=="?"){
        cout << "This is a special character" << endl;
    }else if(len>0){


        for(int i=0; i<len; i++){
            if(s[i]=='0' || s[i]=='1' ||s[i]=='2' ||s[i]=='3' ||s[i]=='4' ||s[i]=='5' ||s[i]=='6' ||s[i]=='7' ||s[i]=='8' ||s[i]=='9'){
                continue;
            }else{
               k=0;
            }
        }

        if(k==1)
            cout << "This is a number" << endl;
        else{
            cout << "This is not special character not operator not identifier not keyword" << endl;
        }

    }

    return 0;

}
