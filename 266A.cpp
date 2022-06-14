#include<iostream>
using namespace std;

int main(){
    char R,G,B;
    int n,count=0,si[50],i;
    cin>>n;
    char s[50];
    for(i=0;i<n;i++){
        cin>>s[i];     
    }
    for(i=0;i<n;i++){
        //it's means i and i+1 equal same then it will work
        //other wise not work
        if(s[i]=='R'&& s[i+1]=='R'){
           
          count++;
            
        }
        if(s[i]=='G'&& s[i+1]=='G'){
            count++;
        }
        if(s[i]=='B'&& s[i+1]=='B'){
            count++;
        }
        
    }
cout<<count<<endl;
   


    return 0;
}
