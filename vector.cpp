#include<iostream>

#include<vector>

using namespace std;


int main(){
    vector<int> v;
    
    for(int i=1;i<6;i++)
    v.push_back(i*10);
    auto p=v.begin();
    p++;p++;
    v.erase(p);
        
    cout<<"{";
    for(auto i=v.rbegin();i<v.rend();i++)
    cout<<*i<<"\t";
    cout<<"}"<<endl;
    for(auto i:v){cout<<i<<"\t";}
    
    
    
    return 0;
}


