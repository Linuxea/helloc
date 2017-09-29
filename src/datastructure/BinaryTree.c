/*
 * BinaryTree.c
 *
 *  Created on: 2017年9月29日
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

		if(tree->data > value){
			tree->left = createBSTTree(tree->left, value);
		}else if(tree->data < value){
			tree->right = createBSTTree(tree->right, value);
		}else{
			//pass
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


void midPrint(Tree * tree){
	if(NULL ==  tree)return;
	midPrint(tree->left);
	printf("%d->",tree->data);
	midPrint(tree->right);
}


void postPrint(Tree * tree){
	if(NULL ==  tree)return;
	postPrint(tree->left);
	postPrint(tree->right);
	printf("%d->",tree->data);
}


int main(void){

	Tree * myTree = NULL;

	Tree * one = createBSTTree(myTree,1); // create root
	createBSTTree(one,2);
	createBSTTree(one,3);
	createBSTTree(one,9);
	createBSTTree(one,5);

	fflush(stdout);

	prePrint(one);
	printf("prePrint over\n");
	midPrint(one);
	printf("midPrint over\n");
	postPrint(one);
	printf("postPrint over\n");

	free(myTree);
	free(one);

	return 0;
}









