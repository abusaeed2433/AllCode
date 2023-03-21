#include<stdio.h>

int main(){

        int t;
        int n,k,x,counter=0;
        string s;
        cin >> t;
        while(t>0){
            t--;
            cin >> n >> k >> x;
            int a =1;
            while (a<=n){
                cin >> s;
                if(a>=k){
                    int i=0;
                    while (i<s.length()){
                        if(s.charAt(i)=='0') counter++;
                        i++;
                    }
                    if(counter>x) break;
                }
                a++;
            }
        }
        if(counter>=x) System.out.println("YES");
        else System.out.println("NO");
}
