#include <iostream>
#include <map>
#include <sstream>
#include <string>
std::map<std::string,int>a;
int main() {
    std::string s,buf;
    int n,flag=0;
    while (std::cin>>n) {
        if (flag)
            puts("");
        flag++;
        a.clear();
        while (std::getline(std::cin,s)&&s!="EndOfText") {
            for(int i=0; i<s.length(); i++)
                if (isalpha(s[i])) s[i]=tolower(s[i]);
                else s[i]=' ';
            std::stringstream ss(s);
            while (ss>>buf) a[buf]++;
        }
        int tt=0;
        std::map<std::string,int>::iterator it;
        for(it=a.begin(); it!=a.end(); it++)
            if(it->second==n) {
                tt=1;
                std::cout<<it->first<<std::endl;
            }
        if(!tt) std::cout << "There is no such word." <<std::endl;
    }
}
