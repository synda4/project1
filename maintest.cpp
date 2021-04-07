#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std ;

 int main() 
 {
vector <string> playersresults ;

string fich;
cout<<"please enter the name of the file\n";
cin>>fich;
ifstream entree (fich, ios::in);
if (entree){
    string line;
        while(getline(entree,line))
        {
            string word="";
            for(auto x: line)
            {
                if (x==':')
                {
                    word="";
                }
                else{
                    word= word +x;
                    
                    
                }
            
            if (word !=""){
            playersresults.push_back(word);
            }}
        }
}

else {

    cout<< "error :Unable to open file for reading."<<endl;
}

int i=0;
// display each player's scores ;
for ( int j=0 ; j<= playersresults.size(); j=j+3)
{
    
    cout << "player " << i <<"\n" ;
cout<< playersresults[j]<<"\n";
cout<< playersresults[j+1]<<"\n";
cout<< playersresults[j+2]<<"\n";
i=i+1; }
entree.close();
return 0;
 }