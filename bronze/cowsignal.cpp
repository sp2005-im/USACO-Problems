//Sri Rama Jayam 
//The Cow Signal - 2016 Bronze
#include <iostream>
#include<string>
#include<vector>
using namespace std;
string amplify_signal(string s, int k){
        int x_count = 0;
        string s_n = "";
        for (int i = 0; i<s.length(); i++){
                if (s[i] == 'X'){
                        s_n+=string(k,'X');
                }
                else if (s[i]=='.'){
                        s_n+=string(k,'.');
                }
        }
        return s_n;
}

int main(){
	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out","w", stdout);
        int m,n,k;
        cin>>m>>n>>k;
        vector<string>y;
        for (int i = 0; i<m; i++){
                string s;
                cin>>s;
                string s_new = amplify_signal(s,k);
                y.push_back(s_new);
        }
        for (int i = 0; i<y.size(); i++){
                for (int j = 0; j<k; j++){
                        cout<<y[i]<<endl;
                }
        }
        return 0;
}		
