//#include<iostream>
//using namespace std;
//class node
//{
//public:
//	int data;
//	node* next;
//	node(int value) :data(value), next(nullptr) {}
//};
//class linkedlist
//{
//public:
//	node* head;
//	linkedlist() :head(nullptr) {}
//	void append(int data)
//	{
//		if (head == NULL)
//		{
//			head = new node(data);
//		}
//		else
//		{
//			node* temp;
//			temp = head;
//			while (temp->next != NULL)
//			{
//				temp = temp->next;
//			}
//			temp->next = new node(data);
//		}
//	}
//	void display()
//	{
//		node* temp;
//		temp = head;
//		while (temp != NULL)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//	}
//	void reverse() // Function to reverse
//	{
//		node* current = head;
//		node* previous = nullptr;
//		node* future = nullptr;
//		while (current != NULL)
//		{
//			future = current->next;
//			current->next = previous;
//			previous = current;
//			current = future;
//		}
//		head = previous;
//	}
//	bool search(int value) // Function to search element
//	{
//		bool search = false;
//		node* temp = head;
//		while (temp != NULL)
//		{
//			if (temp->data == value)
//			{
//				search = true;
//			}
//			temp = temp->next;
//		}
//		return search;
//	}
//};
//
//int main()
//{
//	linkedlist obj1;
//	int value;
//	bool search;
//	obj1.append(50);
//	obj1.append(60);
//	obj1.append(70);
//	cout << "Before Reversing : ";
//	obj1.display();
//	cout << endl;
//	obj1.reverse();
//	cout << "After Reversing : ";
//	obj1.display();
//	cout << endl;
//	cout << "Enter element you want to search : ";
//	cin >> value;
//	search = obj1.search(value);
//	if (search == true)
//	{
//		cout << "Element Found" << endl;
//	}
//	else
//	{
//		cout << "Not Found" << endl;
//	}
//	return 0;
//}