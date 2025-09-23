/*
#include<iostream>
using namespace std;

#define Maxlen 255 

typedef struct SString {
	char ch[Maxlen];
	int length;
};


int GetLength(SString S) {
	return S.length;
}

int ViiolentMatching(SString S,SString T) {
	int i = 1, j = 1;
	while (i<S.length&&j<T.length) {
		if (S.ch[i]==T.ch[j])
		{
			++i; 
			++j;
		}
		else
			
		{
			i = i - j + 2;
			j = 1;
		}
		if (j>T.length)
		{
			return i - T.length;
		}
		else
		{
			return 0;
		}
	}
}

void GetNext(SString T,int next[]) {
	int i = 1, j = 0;
	next[1] = 0;
	while (i < T.length) {
		if (j==0||T.ch[i]==T.ch[j])
		{
			++i;
			++j;
			next[i] = j;
		}
		else
		{
			j = next[j];
		}
	}
}


int KMP(SString S,SString T,int next[]) {
	int i = 1, j = 1;
	while (i<=S.length&&j<=T.length) {
		if (j=0||S.ch[i]==T.ch[j])
		{
			++j;
			++i;
		}
		else
		{
			j = next[j];
		}
	}
	if (j > T.length)
		
	{
		return i - T.length;
	}
	else
	{
		return 0;
	}
}

*/