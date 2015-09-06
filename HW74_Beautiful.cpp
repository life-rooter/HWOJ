/*************************************************************************
	> File Name: HW74_Beautiful.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Sat 05 Sep 2015 06:33:51 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

bool cmp(const int a,const int b){
    return a > b;
}

int BeautyDegree(string str){
    int size = str.size();
    if(size == 0){
        return 0;
    }//if
    int hash[256] = {0};
    for(int i = 0;i < size;++i){
        ++hash[str[i]-'0'] ;
    }//for
    // 从大到小排序
    sort(hash,hash+256,cmp);
    // 相同字符越多赋予的度越大
    int degree = 26,sum = 0;
    for(int i = 0;i < size;++i){
        sum += hash[i] * degree;
        --degree;
    }//for
    return sum;
}

int main(){
    string str;
    int n;
    //freopen("C:\\Users\\Administrator\\Desktop\\c++.txt","r",stdin);
    while(cin>>n){
        for(int i = 0;i < n;++i){
            cin>>str;
	    transform(str.begin(),str.end(),toupper);
            cout<<BeautyDegree(str)<<endl;
        }//for
    }//while
    return 0;
}
