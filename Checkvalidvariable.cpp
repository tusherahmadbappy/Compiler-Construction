#include <iostream>
#include <string>
using namespace std;



int main() {

    int flag = 1;




    string str;
    cout << "Enter your word: ";
    cin >> str;

    int len = str.length();

    string checkStr = "+-*/=#%$@&[](){}!?,.^;:|<>";
    int checkStrLen = checkStr.length();

    string checkKeyword[] = {"printf", "scanf", "main", "cin", "cout", "function", "int", "float", "double", "string", "length", "malloc", "pow", "sqrt", "min", "max", "swap"};

    int checkKeywordLength = 17;


    if(str[0]=='0' || str[0]=='1' ||str[0]=='2' ||str[0]=='3' ||str[0]=='4' ||str[0]=='5' ||str[0]=='6' ||str[0]=='7' ||str[0]=='8' ||str[0]=='9'){
        flag = 0;
    }else{


        for(int i=0; i<len; i++){
            for(int j=0; j<checkStrLen; j++){
                if(str[i]==checkStr[j]){
                    flag = 0;
                    break;
                }
            }
        }


        for(int i=0; i<checkKeywordLength; i++){
            if(str==checkKeyword[i]){
                flag = 0;
            }
        }


    }


    if(flag==1){
        cout << "Valid";
    }else{
        cout << "Invalid";
    }



    return 0;
}
