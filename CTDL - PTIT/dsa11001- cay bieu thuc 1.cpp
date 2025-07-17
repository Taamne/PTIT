#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	Node* left;
	Node* right;
	char c;
	Node(char c){
		this->c = c;
		this->left = nullptr;
		this->right = nullptr;
	}
};
Node* createNode(char c){
	Node* node = new Node(c);
	return node;
}
void inOder(Node* s){
	if(s!= nullptr){
		inOder(s->left);
		cout<< s-> c;
		inOder(s->right);
	}
}

int main(){
	int t;
	cin >> t;
	string opera = "+-*/";
	while(t--){
		string s;
		cin >> s;
		stack<Node*> st;
		for(int i = 0  ; i < s.length(); i++){
			if(opera.find(s[i]) != string::npos){
				Node* tmp = createNode(s[i]);
				tmp->right = st.top();
				st.pop();
				tmp->left = st.top();
				st.pop();
				st.push(tmp);
				
				
			}
			else {
				st.push(createNode(s[i]));
			}
		}
		inOder(st.top());
		cout << endl;
	}
}
