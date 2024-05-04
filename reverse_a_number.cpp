    #include <bits/stdc++.h>
    using namespace std;



    int main()
    {   int a;
        int rev=0;
        cin >> a; 
        while(a!=0){
            int digit=a%10;
            rev=rev*10+digit;
            
            a/=10;
            
        }
        cout << rev;
        

        return 0;
    }
