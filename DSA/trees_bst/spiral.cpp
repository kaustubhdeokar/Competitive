#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
void printSpiral(struct Node *root);
int main()
{
   int t;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
      //  cout << n1 << " " << n2 << " " << (char)lr << endl;
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        Node *child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
    printSpiral(root);
    cout<<endl;
  }
    return 0;
}

int height(Node* root){
	if(root==nullptr)
	return 0;
	int l=height(root->left);
	int r=height(root->right);
	if(l>r)
	return l+1;
	else
	return r+1;
}

void printSpiral(Node* root,int level,int itr){
	if(root==nullptr)
	return;
	if(level==1)
	cout<<root->data<<" ";
	else{
		if(itr){
			printSpiral(root->left,level-1,itr);
			printSpiral(root->right,level-1,itr);
		}
		else{
			printSpiral(root->right,level-1,itr);
			printSpiral(root->left,level-1,itr);
		}
	}
}

void printSpiral(Node* root){
	int d=height(root);
	bool itr=false;
	for(int i=1;i<=d;i++)
	{
		printSpiral(root,i,itr);
		itr=!itr;
	}
}


