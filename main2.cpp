#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std ;
 int main() 
 {
string namefich;
cout<<"please enter the name of the fileplayers\n";
cin>>namefich;
vector <string> playersname;

ifstream entree (namefich, ios::in);
if (entree){
    string line;
    while(getline(entree,line))
    {
      playersname.push_back(line);

     
 }}
 
else {

    cout<< "error :Unable to open file for reading."<<endl;
}

for (int i=0; i<= playersname.size(); i++)
{
    cout << playersname[i] << "\n";
}
entre.close();
return 0;}