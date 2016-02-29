#ifndef _TREE_NODE_H
#define _TREE_NODE_H
#include <iostream>
using namespace std;	
	class Tree_Node{
		private:
			int Data;
		public:	
			
			Tree_Node* _Lb;
			Tree_Node* _Rb;
			Tree_Node* _P;
			int get_Data() const{ return Data;}
			Tree_Node(){Data = 0;}
			Tree_Node(int);
	};
	
	Tree_Node::Tree_Node(int a){
		Data = a;
		_Lb=_Rb=0;
	}
	
#endif
