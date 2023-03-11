#include <iostream>

using namespace std;

int main()
{
    int table[2][2],i,j,l,status=0;
    string input;

    cout<<"Program for implementing DFA of language\n\n\nEnter input string\n";

    table[0][0]=0;
    table[0][1]=1;
    table[1][0]=1;
    table[1][1]=-1;

    cin>>input;
    l=input.size();

    for(i=0;i<l;i++)
    {

        if(input[i] !='a' && input[i] !='b')
        {
            cout<<"Value entared is wrong"<<endl;
            return 0;
        }
        if(input[i]=='a')
        {
            status=table[status][0];
        }
        else
        {
            status=table[status][1];
        }
        if(status==-1 && i!= l-1)
        {
            status=0;
        }
    }
    if(status==-1)
        cout<<"accepted"<<endl;
    else
        cout<<"Not accepted"<<endl;
    return 0;
}
