#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    vector <int> Cnt1(26,0);
    vector <int> Cnt2(26,0);

    for(int i=0; i<str1.size(); i++)
    {
        Cnt1[str1[i]-'a']++;
    }
    for(int i=0; i<str2.size(); i++)
    {
        Cnt2[str2[i]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        if(Cnt1[i] != Cnt2[i])
            return false;
    }
    return true;
}