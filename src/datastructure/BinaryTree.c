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
	Tree* temp = tree;
	if(NULL == temp){
		temp = (Tree*)malloc(sizeof(Tree));
		temp->data = value;
		temp->left = temp->right = NULL;
	}

	printf("%d vs %d\n", temp->data, value);
	fflush(stdout);

	if(temp->data > value){
		temp->left = createBSTTree(temp->left, value);
	}else if(temp->data < value){
		temp->right = createBSTTree(temp->right, value);
	}else{
		printf("equals(pass)\n");
		fflush(stdout);
	}

	return tree;
}


void prePrint(Tree * tree){
	if(NULL !=  tree){
		printf("%d->",tree->data);
		prePrint(tree->left);
		prePrint(tree->right);
	}
}


int main(void){

	Tree * myTree = NULL;

	createBSTTree(myTree,1);
	createBSTTree(myTree,0);
	createBSTTree(myTree,3);
	createBSTTree(myTree,3);
	createBSTTree(myTree,5);

	printf("is null?!!%d\n", myTree == NULL);
	fflush(stdout);

	prePrint(myTree);

	return 0;
}









