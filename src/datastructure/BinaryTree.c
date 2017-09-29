/*
 * BinaryTree.c
 *
 *  Created on: 2017年9月29日
 *      Author: linuxea
 */


// BinaryTree

#include<stdio.h>
#include<stdlib.h>

#define ELEMENT_TYPE int

struct BinaryTree{
	ELEMENT_TYPE data;
	struct BinaryTree *left;
	struct BinaryTree *right;
};

typedef struct BinaryTree Tree;

Tree *createBSTTree(Tree *tree, ELEMENT_TYPE value);
void prePrint(Tree * tree);



Tree *createBSTTree(Tree *tree, ELEMENT_TYPE value){

	if(NULL == tree){
		tree = (Tree*)malloc(sizeof(Tree));
		tree->data = value;
		tree->left = tree->right = NULL;
	}else{

		printf("有木有进来呢?\n");
		fflush(stdout);

		if(tree->data > value){
			tree->left = createBSTTree(tree->left, value);
		}else if(tree->data < value){
			tree->right = createBSTTree(tree->right, value);
		}else{
			printf("equals(pass)");
			fflush(stdout);
		}
	}

	return tree;
}


void prePrint(Tree * tree){
	if(NULL ==  tree)return;
	printf("%d->",tree->data);
	prePrint(tree->left);
	prePrint(tree->right);
}


int main(void){

	Tree * myTree = NULL;

	createBSTTree(myTree,1);
	createBSTTree(myTree,2);
	createBSTTree(myTree,3);
	createBSTTree(myTree,3);
	createBSTTree(myTree,5);

	printf("create over");
	fflush(stdout);

	prePrint(myTree);

	return 0;
}









