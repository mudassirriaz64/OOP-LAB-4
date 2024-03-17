//#include<iostream>
//#include<list>
//using namespace std;
//
//class Spreadsheet
//{
//public:
//    list<list<int>> data;
//
//    void addRow(list<int> row)
//    {
//        data.push_back(row);
//    }
//
//    void deleteRow(int rowIndex)
//    {
//        if (rowIndex < 0 || rowIndex >= data.size())
//        {
//            cout << "Invalid row index!" << endl;
//            return;
//        }
//        auto it = data.begin();
//        advance(it, rowIndex);
//        data.erase(it);
//    }
//
//    void display()
//    {
//        for (auto row : data)
//        {
//            for (auto cell : row)
//            {
//                cout << cell << "\t";
//            }
//            cout << endl;
//        }
//    }
//};
//
//int main()
//{
//    Spreadsheet sheet;
//    int row_delete;
//    sheet.addRow({ 1, 2, 3 });
//    sheet.addRow({ 4, 5, 6 });
//    sheet.addRow({ 7, 8, 9 });
//
//    cout << "Spreadsheet:" << endl;
//    sheet.display();
//    cout << "Enter the row you want to delete : ";
//    cin >> row_delete;
//    sheet.deleteRow(row_delete);
//    cout << "After Deleting : \n";
//    sheet.display();
//    return 0;
//}
