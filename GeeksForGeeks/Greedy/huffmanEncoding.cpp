#include<bits/stdc++.h>
using namespace std;

struct node{
	int freq;
	char data;
	node *left,*right;
	node(){

	}
	node(char dta, int fq){
		data = dta;
		freq = fq;
		left = nullptr;
		right = nullptr;
	}
	~node(){
		delete left;
		delete right;
	}
};

struct cmp{
    bool operator()(node* l, node* r){
    	return (l->freq > r->freq);
     }
 };



class huffman{
public:

	void Encode(string s, vector<int> frequncey){
		priority_queue<node*, vector<node*> , cmp > minHeap;
	

		for(int i = 0; i < (int)s.length(); i++){
			minHeap.push(new node(s[i], frequncey[i]));
		}

		while(minHeap.size() != 1){
			node *l = minHeap.top();
			minHeap.pop();
			node *r  = minHeap.top();
			minHeap.pop();
			node *N = new node('$' , l->freq + r->freq);
			N->left =  l;
			N->right = r;
			minHeap.push(N);
		}

		printCode(minHeap.top(), "");

	}

	void printCode(node *root, string str){
		if(root == nullptr){
			return;
		}
		if(root->data != '$'){
			cout<<root->data<<" : "<<str<<" ";
		}
		printCode(root->left,str + "0");
		printCode(root->right, str + "1");
	}

};

int main(){
	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		std::vector<int> frequncey((int)s.length());
		for(int i = 0; i < (int)s.length(); i++){
			cin>>frequncey[i];
		}
		huffman ob;
		ob.Encode(s,frequncey);
    cout<<endl;

	}
}
