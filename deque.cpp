

struct Node{
	int popular;
	Node *next;
	Node *start;
	Node(int data){
		data = popular;
		next = start = NULL;
	}
};


void deleteNode(Node **start, int k){
	Node *curr = *start;
	Node *max = *start;
	Node *temp;
	while(curr!=NULL && curr->next!=NULL && k){

		if(curr->next->popular < max->popular){
			temp = curr->next;
			curr->next = temp->next;
			free(temp);
			k--;
		}
		else{
			curr = curr->next;
			max = curr;
		}

	}
}
Node *reverse(Node *root){

	if(root == NULL || root->next == NULL)
		return root;
	Node *curr = root;
	Node *next = NULL;
	Node *prev = NULL;
	while(curr!=NULL{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;

	}
	root = prev;
}