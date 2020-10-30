#include <stdio.h> 
#include <stdlib.h>

//define the node for dlist
struct Node { 
	int data; 
	struct Node* next; 
	struct Node* prev; 
};

//add a new node to the front of the list
void push(struct Node** start, int newNum) 
{ 
	//create a new node
	struct Node* newNode;
	newNode = (struct Node*)malloc(sizeof(struct Node)); 

	//insert data into the new node
	newNode->data = newNum;

	//next of new node is head
	//previous of new node is NULL
	newNode->next = (*start); 
	newNode->prev = NULL; 

	//new node becomes a head node of the previous head node
	if ((*start) != NULL) {
		(*start)->prev = newNode; 
	}
	
	*start = newNode; 
}

//add a new node to the back of the list
void append(struct Node** start, int newNum) 
{ 
	//create a new node
	struct Node* newNode;
	newNode = (struct Node*)malloc(sizeof(struct Node)); 

	struct Node* last = *start; 

	//insert data into the new node
	newNode->data = newNum; 

	//since newNode is last node, the next of its is NULL
	newNode->next = NULL; 

	//if the dlist is empty, this newNode is head of dlist
	if (*start == NULL) { 
		newNode->prev = NULL; 
		*start = newNode; 
		return; 
	} 

	//else, go back to the end of dlist (last node)
	while (last->next != NULL)
	{
		last = last->next; 
	}

	//the next of last node is new last node
	last->next = newNode; 

	//ex last node is the previous of new node
	newNode->prev = last; 

	return; 
}


//remove a node
void deleteNode(struct Node** start, struct Node* delNode)
{ 
	//make sure dlist and given node are not NULL
	if (*start == NULL || delNode == NULL)
	{
		return; 
	}

	//if the del node is head node
	if (*start == delNode) 
	{	
		*start = delNode->next; 
	}

	//if the del node is not the last node
	if (delNode->next != NULL) 
	{
		delNode->next->prev = delNode->prev; 
	}

	//if the del node is not the first node
	if (delNode->prev != NULL) 
	{
		delNode->prev->next = delNode->next;
	}
	
	free(delNode); 
	return; 
} 

//search for a node that contains a given value
struct Node *searchList(struct Node* start, int key) 
{ 
	// define the temp Node 
	struct Node *temp = start; 
       
	// If the list is empty, return NULL
	//make sure the list is not empty, then search for the key
	if(temp != NULL)
	{ 
		// Move the pointer until the key is found or next = NULL
		while(temp->next != NULL)
		{ 
			//Search for the key until it is found
			if(temp->data == key) 
			{ 
				break; 
			} 
			//move the temp pointer to next
			temp = temp->next;    
		}
	}
	else
	{ 
		return NULL; 
	}
	
	return temp;
} 

//return the first node
struct Node *firstNode(struct Node* start) 
{ 
	// define the temp Node 
	struct Node *temp = start; 
       
	// If the list is empty, return NULL
	//make sure the list is not empty, then return the first
	if(temp != NULL)
	{ 
		while(temp->prev != NULL)
		{
			temp = temp->prev;
		}
	}
	else
	{ 
		return NULL; 
	}
	
	return temp;
} 

//return the last node
struct Node *lastNode(struct Node* start) 
{ 
	// define the temp Node 
	struct Node *temp = start; 
       
	// If the list is empty, return NULL
	//make sure the list is not empty, then go to the end of list
	if(temp != NULL)
	{ 
		// Move the pointer until the next = NULL. End of the list
		while(temp->next != NULL)
		{
			temp = temp->next;    
		}
	}
	else
	{ 
		return NULL; 
	}
	
	return temp;
} 


//return the previous node
struct Node *previousNode(struct Node* start) 
{ 
	// define the temp Node 
	struct Node *temp = start; 
       
	// If the list is empty, return NULL
	//make sure the list is not empty
	if(temp != NULL)
	{ 
		//make sure given node is not first node 
		//Move the pointer to previous node
		if(temp->prev != NULL)
		{
			temp = temp->prev;
		}
	}
	else
	{ 
		return NULL; 
	}
	
	return temp;
} 


//return the next node
struct Node *nextNode(struct Node* start) 
{ 
	// define the temp Node 
	struct Node *temp = start; 
       
	// If the list is empty, return NULL
	//make sure the list is not empty
	if(temp != NULL)
	{ 
		//make sure given node is not last node 
		//Move the pointer to next node
		if(temp->next != NULL)
		{
			temp = temp->next;
		}
	}
	else
	{ 
		return NULL; 
	}
	
	return temp;
} 
