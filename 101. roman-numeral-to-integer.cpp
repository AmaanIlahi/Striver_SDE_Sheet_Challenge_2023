int romanToInt(string s) {
    // Write your code here
    map <char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int n = s.size();
    int i = n-1;
    int ans = 0;

    while(i>=0)
    {
        char curr = s[i];
        char pre = 'i';
        if(i>0){
            pre = s[i-1];
        }
        if(pre != 'i' && mp[pre]<mp[curr]){
            ans += (mp[curr]-mp[pre]);
            i-=2;
        }
        else{
            ans += mp[curr];
            i--;
        }
    }
    return ans;
}