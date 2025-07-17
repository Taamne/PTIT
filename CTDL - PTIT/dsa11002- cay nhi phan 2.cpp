#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int n;
string opera= "+-*/";

class Node{
public:	Node* left;
		Node* right;
		string c;
		Node(string c){
			this->c=c;
			this->left = nullptr;
			this->right = nullptr;
		}
};
Node* createNode(string c){
	Node* node = new Node(c);
	return node;
}
Node* buildTree(Node* r, int i){
	if(i<n){
		r = createNode(v[i]);
		r->left = buildTree(r->left, 2*i+1);
		r->right= buildTree(r->right, 2*i+2);
	}
	return r;
}
void inOder(Node* s){
	if(s!= nullptr){
		inOder(s->left);
		cout<<s->c;
		inOder(s->right);
	}
}
int calc(Node *s){
	if(opera.find(s->c[0]) == string::npos){
		return stoi(s->c);
	}
	else {
		
	
		if(s->c[0] == '+') return calc(s->left ) + calc(s->right);
		else if(s->c[0] == '-') return calc(s->left) - calc(s->right);
		else if(s->c[0] == '*') return calc(s->left) * calc(s->right);
		else if(s->c[0] == '/') return calc(s->left) / calc(s->right); 
}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		v.resize(n);
		for(auto& i : v){
			cin >> i;
		}
		Node* root = nullptr;
		root = buildTree(root, 0);
		cout << calc(root);
		cout << endl;
	}
}
