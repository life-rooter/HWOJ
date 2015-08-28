/*************************************************************************
	> File Name: HW51_LastKNode.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Fri 28 Aug 2015 06:30:22 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
struct ListNode
{
	int m_nkey;
	ListNode *m_pNext;
};
ListNode *FindKthtoTail(ListNode *plistHead,unsigned k)
{
	if(plistHead==NULL||k==0)
		return NULL;
	ListNode* pAhead = plistHead;
	ListNode* pBehind = NULL;
	for (int i = 0; i < k; i++)
	{
		if (pAhead->m_pNext != NULL)
		{
			pAhead = pAhead->m_pNext;
		}
		else
		{
			return NULL;
		}
	}
	pBehind = plistHead;
	while(pAhead->m_pNext != NULL)
	{
										
		pAhead  = pAhead->m_pNext;
		pBehind = pBehind->m_pNext;
	}
	return pBehind;
}

int main()
{
	int N;
	int k;
	ListNode *p,*q,*p1;
	p=p1=new ListNode;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		q=new ListNode ;
		cin>> q->m_nkey;
		p->m_pNext=q;
		p=q;
//		cout<<i<<endl;
	}
	p->m_pNext=NULL;
	cin>>k;
	p=FindKthtoTail(p1,k);
	cout<<p->m_nkey<<endl;
}
