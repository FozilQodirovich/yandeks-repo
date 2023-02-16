#include <iostream>
#include <vector> 
using namespace std;
typedef long long ll;
typedef long double ld;
void solve(){
    vector<string> table;
    for(int i = 0;i < 4;i++){
        string s;
        getline(cin,s);
        string temp;
        for(int j = 0;j < s.size();j++){
            if(s[j] == '+'){
                temp += '8';
                j++;
            }
            else {if(s[j] == '(' || s[j] == ')' || s[j] == '-') continue;
            temp += s[j];
            }
        }
        table.push_back(temp);
    }
    vector<string> ans;
    for(int i = 0;i < 4;i++){
        if(table[i].size() == 7){
            ans.push_back("8495" + table[i]);
        }else{
            ans.push_back(table[i]);
        }
    }
    for(int i = 1;i <= 3;i++){
        if(ans[0] == ans[i]){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }
}
