//#include<iostream>
//using namespace std;
//
//class node
//{
//public:
//	int data;
//	node* next;
//	node(int value) :data(value), next(nullptr) {}
//};
//
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
//			node* temp = head;
//			while (temp->next != NULL)
//			{
//				temp = temp->next;
//			}
//			temp->next = new node(data);
//		}
//	}
//	void display()
//	{
//		node* temp = head;
//		while (temp != NULL)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//		cout << endl;
//	}
//	void bubblesort() //Custom Sorting Function
//	{
//		if (head == NULL || head->next == NULL)
//		{
//			return;
//		}
//		bool swapped;
//		do
//		{
//			swapped = false;
//			node* current = head;
//			while (current->next != NULL)
//			{
//				if (current->data > current->next->data)
//				{
//					int temp;
//					temp = current->next->data;
//					current->next->data = current->data;
//					current->data = temp;
//					swapped = true;
//				}
//				current = current->next;
//			}
//		} while (swapped);
//	}
//};
//
//int main()
//{
//	linkedlist obj1;
//	obj1.append(70);
//	obj1.append(50);
//	obj1.append(60);
//	cout << "Before Sorting : ";
//	obj1.display();
//	obj1.bubblesort();
//	cout << "After Sorting : ";
//	obj1.display();
//	return 0;
//}