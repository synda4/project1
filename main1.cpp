#include<iostream>
#include<fstream>
#include<string>
using namespace std ;


int main() {
string namefich;
cout<<"please enter the name of the continent\n";   
cin >> namefich;
ifstream entree (namefich, ios::in);
if (entree)
{
    string line;
    while(getline(entree,line))
    {
        cout<<line<<endl;
    }

}
else {

    cout<< "error :Unable to open file for reading."<<endl;
}
entree.close();
return 0;
    
}
