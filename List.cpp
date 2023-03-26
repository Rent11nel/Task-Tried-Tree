#include "List.h"

void Add_words(pTree &root, string str, int i)
{
	if (!root)
	{
		root = new Tree;
	}
	if ((str.length()) - 1 < i)
		root->data = true;
	else
		Add_words(root->ptr[str[i] - 'a'], str, i + 1);
}

int Task(int len, int deep, pTree &root)
{
	if (deep > len)
		return 0;
	if (root->data && deep == len)
		return 1;
	int count_words = 0;
	for (int i = 0; i < 26; i++)
	{
		if (root->ptr[i] != nullptr)
			count_words += Task(len, deep + 1, root->ptr[i]);
	}
	return count_words;
}

void print(pTree root, string s) 
{
	pTree temp = root;
	if (temp->data) 
	{
		cout << s << '\n';
	}
	for (int i = 0; i < 26; i++) {
		if (temp->ptr[i]) {
			print(temp->ptr[i], s + (char)(i + 'a'));
		}
	}
}