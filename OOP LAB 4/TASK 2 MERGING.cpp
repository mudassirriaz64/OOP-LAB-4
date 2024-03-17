//#include<iostream>
//#include<list>
//using namespace std;
//class node
//{
//public:
//	int data;
//	node* next;
//	node(int value):data(value),next(nullptr){}
//};
//class linkedlist
//{
//public:
//	node* head;
//	linkedlist():head(nullptr){}
//	void append(int data)
//	{
//		if (head == NULL)
//		{
//			head = new node(data);
//		}
//		else
//		{
//			node* temp = head;
//			while (temp->next != NULL)
//			{
//				temp = temp->next;
//			}
//			temp->next= new node(data);
//		}
//	}
//
//	void display()
//	{
//		node* temp = head;
//		while (temp!= NULL)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//	}
//};
//
//linkedlist mergelist(linkedlist list1, linkedlist list2) // CUSTOM MERGING FUNCTION
//{
//	linkedlist mergedlist;
//	node* temp1 = list1.head;
//	node* temp2 = list2.head;
//	while (temp1 != NULL && temp2 != NULL)
//	{
//		if (temp1->data <= temp2->data)
//		{
//			mergedlist.append(temp1->data);
//			temp1 = temp1->next;
//		}
//		else
//		{
//			mergedlist.append(temp2->data);
//			temp2 = temp2->next;
//		}
//	}
//	while (temp1 != NULL)
//	{
//		mergedlist.append(temp1->data);
//		temp1 = temp1->next;
//	}
//	while (temp2 != NULL)
//	{
//		mergedlist.append(temp2->data);
//		temp2 = temp2->next;
//	}
//	return mergedlist;
//}
//
//int main()
//{
//	linkedlist list1,list2,mergedlist;
//	list1.append(33);
//	list1.append(44);
//	list1.append(55);
//	list2.append(32);
//	list2.append(43);
//	list2.append(54);
//	cout << "Before Merging : \nList 1 : ";
//	list1.display();
//	cout << "\nList 2 : ";
//	list2.display();
//	mergedlist = mergelist(list1, list2);
//	cout << "\nAfter Merging : ";
//	mergedlist.display();
//	return 0;
//}