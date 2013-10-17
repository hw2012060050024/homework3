#pragma once

struct node{
	int data;
	struct node * next;
};
class staket
{
public:
	staket();

	~staket();
	void pop();
	void push( int n); 
    int	reade();
	bool isempty();
private :
	node * h;



};

