/*24点游戏算法，穷举法： 
f(Array)
{
   if(Array.Length<2)
   {
     if(得到的最终结果是24) 输出表达式
     else 输出无符合要求的表达式
   }
   foreach(从数组中取任意两个数的组合)
   {
      foreach(运算符(+ - * /))
      {
         1、计算该组合在此运算符下的结果
         2、将该组合中的两个数从原数组中删除，并将步骤1的结果放入数组
         3、对新数组递归调用f。如果找到一个表达式就返回
         4、将步骤1的计算结果移除，并将该组合中的两个数重新放回数组中对应的位置
      } 
   }
}     
*/

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

const double Threshold=1E-6;
const int CardsNumber=4;
const int ResultValue=24;
double number[CardsNumber];
//string result[CardsNumber];

bool PointsGame(int n)
{
    if(n==1)
    {
        //浮点数的比较使用差值与阈值的比较
        if(fabs(number[0]-ResultValue)<Threshold)
        {
			
          //  cout<<result[0]<<endl;
            return true;
        }
        else
			return false;
	 }
    for(int i=0; i<n; ++i)
        for(int j=i+1; j<n; ++j)
        {
            double a,b;
           // string expa,expb;

            a=number[i];
            b=number[j];
            number[j]=number[n-1];

            //expa=result[i];
           // expb=result[j];
           // result[j]=result[n-1];

          //  result[i]='('+expa+'+'+expb+')';
            number[i]=a+b;
            if(PointsGame(n-1)) return true;

           // result[i]='('+expa+'-'+expb+')';
            number[i]=a-b;
            if(PointsGame(n-1)) return true;

           // result[i]='('+expb+'-'+expa+')';
            number[i]=b-a;
            if(PointsGame(n-1)) return true;

           // result[i]='('+expa+'*'+expb+')';
            number[i]=a*b;
            if(PointsGame(n-1)) return true;

            if(b!=0)
            {
              //  result[i]='('+expa+'/'+expb+')';
                number[i]=a/b;
                if(PointsGame(n-1)) return true;
            }
            if(a!=0)
            {
               // result[i]='('+expb+'/'+expa+')';
                number[i]=b/a;
                if(PointsGame(n-1)) return true;
            }

            number[i]=a;
            number[j]=b;
            //result[i]=expa;
           // result[j]=expb;
        }
        return false;
}

int main()
{
    int x;
    for(int i=0; i<4; ++i)
    {
     //  char buffer[20];
      // cout<<"the "<<i+1<<"th number:";
       cin>>x;
       number[i]=x;
      // itoa(x,buffer,10);
       // result[i]=buffer;
    }
    if(PointsGame(CardsNumber))
      cout<<"true"<<endl;

    else cout<<"false"<<endl;

	//system("pause");
    return 0;
}
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 迭代 模拟各种组合
void helper(vector<int> &num,int index,int result,bool &isSucess){
    if(index == 4){
        if(result == 24){
            isSucess = true;
        }//if
        return;
    }//if
    for(int i = 0;i < 4;++i){
        if(i == 0){
            //op.push_back('+');
            helper(num,index+1,result+num[index],isSucess);
        }//if
        else if(i == 1){
            //op.push_back('-');
            helper(num,index+1,result-num[index],isSucess);
        }//else
        else if(i == 2){
            //op.push_back('*');
            helper(num,index+1,result*num[index],isSucess);
        }//else
        else{
            //op.push_back('/');
            helper(num,index+1,result/num[index],isSucess);
        }//else
        //op.pop_back();
        // 找到解决方案
        if(isSucess){
            break;
        }//if
    }//for
}

bool Game24Points(int a, int b, int c, int d){
    vector<int> num;
    num.push_back(a);
    num.push_back(b);
    num.push_back(c);
    num.push_back(d);
    bool isSucess = false;
    helper(num,1,num[0],isSucess);
    if(isSucess){
        return isSucess;
    }//if
    // 全排列  主要应对 6 + 2 * 4 + 10 = 24
    while(next_permutation(num.begin(),num.end())){
        helper(num,1,num[0],isSucess);
        if(isSucess){
            return isSucess;
        }//if
    }//while
    return isSucess;
}
*/
