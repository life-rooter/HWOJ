#include<stdio.h>
#include<string.h>
/*思路：1：将字符串中每一个单词反转，利用两个指针确定某一个单词
 * eg:I am a boy --> I ma a yob
 * 2将整个单词除去'\0'以外传递两个指针，进行反转
 * eg boy a am I
 * */
void ReverseWord(char *x,char *y)
{
    while(x<y)    //这里比较的是指针的位置先后，而不是指针指向字符的大小
    {
        char t=*x;
        *x++=*y;
        *y--=t;
    }
}
// 将句子按单词逆序
char *ReverseSentence(char *s)
{
    // 这两个指针用来确定一个单词的首尾边界
    char *p=s ;         // 指向单词的首字符
    char *q=s ;   // 指向空格或者 '\0'
 
    while(*q!='\0')
   {
       if (*q==' ')
       {
            ReverseWord(p,q-1) ;
            q++;  // 指向下一个单词首字符
            p=q;
        }
        else
            q++;
    }
    ReverseWord(p,q-1); // 对最后一个单词逆序
    ReverseWord(s,q-1); // 对整个句子逆序
    return s;
}
void main()
{
 char *k;
// char b[]="what is your name";    //这里要定义数组，不能用指针指向字符串常量，因为字符串常量的内存空间是不能被修改的
char b[500];
int len;
while (fgets(b,500,stdin)!=NULL)
{
	//fgets return end of b is \n \0;
	len=strlen(b);
	b[len-1]='\0';//get rid of \n
k=ReverseSentence(b);
 printf("%s",k);    //输出字符串传指针就可以了，*k只是字符串第一个字符

}// puts("");
}
