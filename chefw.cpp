    #include <stdio.h>
    #include <string>
    #include <stdlib.h>
    #include <iostream>
    #include <stack>
    #include <queue>
    #include <list>
    #include <deque>
    #include <vector>
    #include <cstring>
    #include <algorithm>
    using namespace std;
    int main()
    {
            long int ns,np,num,pro,c,hash[100000] = {0,},k = 0,l = 0,x[100000],y[100000];
            string s[10000],s1,s2[10000];
            cin >> ns >> np;
            for(int i = 0; i < ns; i++)
            {
                    cin >> c;
                    hash[c]++;
            }
            for(int i = 0; i < np; i++)
            {
                    cin >> num >> pro >> s1;
                    if(hash[num] != 0)
                    {
                            x[k] = pro; s[x[k]] = s1;
                            k++;
                    }
                    else
                    {
                            y[l] = pro; s2[y[l]] = s1;
                            l++;
                    }
            }
            sort(x,x+k); sort(y,y+l);
            for(int i = k-1; i >=0; i--)
            {
                    cout << s[x[i]] << endl;
            }
            for(int i = l-1; i >= 0; i--)
            {
                    cout << s2[y[i]] << endl;
            }
            return 0;
    } 