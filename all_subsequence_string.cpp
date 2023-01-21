#include<bits/stdc++.h>
using namespace std;
vector<string>all_subsequence_string(string s)
{
    int n = s.size();
    vector<string>ans;
    for(int num=0;num< (1<<n);num++)
    {
        string sub="";
        for(int i=0;i<n;i++)
        {
            //check i-th bit is set or not
            // not zero means set
            if((num&(1<<i))!=0)
            {
                sub+=s[i];
            }
        }
        if((sub.size())>0)
        {
           ans.push_back(sub);
        }
    }
   // sort(ans.begin(),ans.end());
    return ans;

}
int main()
{
    string s;
    cin>>s;
    vector<string>ans=all_subsequence_string(s);
    for(auto u:ans)
    {
        cout<<u<<endl;
    }
}