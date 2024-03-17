//#include <iostream>
//#include <list>
//#include <string>
//
//using namespace std;
//
//class ToDoList
//{
//public:
//    string task;
//    list<ToDoList> subtasks;
//
//    ToDoList(const string& task) : task(task) {}
//
//    void addSubtask(const ToDoList& subtask) 
//    {
//        subtasks.push_back(subtask);
//    }
//
//    void print(int level = 0) const 
//    {
//        for (int i = 0; i < level; ++i) 
//        {
//            cout << "  ";
//        }
//        cout << "- " << task << endl;
//        for (const auto& subtask : subtasks) 
//        {
//            subtask.print(level + 1);
//        }
//    }
//};
//
//int main()
//{
//    ToDoList task1("OOP Assignment");
//    ToDoList subtask1("Lab 5 Journal");
//    ToDoList subtask2("Lab 6 Journal");
//    ToDoList task2("ISE Assignment");
//    ToDoList subtask3("Make Groups");
//    ToDoList subtask4("Develop a Software");
//
//    task1.addSubtask(subtask1);
//    task1.addSubtask(subtask2);
//
//    task1.print(); 
//    task2.addSubtask(subtask3);
//    task2.addSubtask(subtask4);
//
//    task2.print();
//
//    return 0;
//}
