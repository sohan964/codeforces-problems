    #include<iostream>
    using namespace std;
     
    int main(){
        int limakAge,bobAge;
        int count=0;
        cin>>limakAge>>bobAge;
        
        while(1){
            if(limakAge>bobAge){
                break;
            }
            else{
                
                limakAge=limakAge*3;
                bobAge=bobAge*2;
            }
        count++;
        }
        cout<<count<<endl;
        return 0;
     
    }
