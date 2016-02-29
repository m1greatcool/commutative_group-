#ifndef _TREE_H
#define _TREE_H
#include "Tree_Node.h"
#include <iostream>

using namespace std;

 class Tree{
 	public:
 		Tree();
 		void insertNode(int);
 		int findmax();
 		int findmin();
 		int findNK(int); // Элемент след за данным ключём
 		void deleteNode(int);
 		
 	private: 
 		Tree_Node *root;
 		
 };
	 Tree :: Tree(){root = 0;}
 	void Tree:: insertNode(int a){ // Вставка элемента в дерево
 	 	Tree_Node* N = new Tree_Node(a);
 	 	Tree_Node* _N1;
 	 	Tree_Node* _N2;
 	 	N->_P=N->_Lb=N->_Rb=0;
 	 	_N1 = root;
 	 		while(_N1!=0){
 	 				_N2 = _N1; // В конце цикла _N2 - родитель a;
 	 				if(a<_N1->get_Data()) _N1=_N1->_Lb;
 	 				else _N1=_N1->_Rb;
			  }
			  N->_P=_N2;
			  if(_N2==0) root = N;
			  else{
			  	if(a<_N2->get_Data()) _N2->_Lb=N;
			  	else _N2->_Rb=N;
			  }
	  }
 	int Tree::findmax(){
 		int x;
 		Tree_Node* K = new Tree_Node;
 		if(root == 0) {cout << "Tree clear" ; return 0;}
		K = root;
		while(K!=0){
			x = (*K).get_Data();
			K = K->_Rb;
		}
 		return x;
	 }
	int Tree::findmin(){
		int x;
		Tree_Node* K = new Tree_Node;
		if(root == 0){cout << "Tree clear"; return 0;}
		K = root;
		while(K!=0){
			x = (*K).get_Data();
			K = K->_Lb;
		}
		return x;
	}
#endif
