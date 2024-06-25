// NUMBER GUESSING GAME TASK 1 CodSoft
//  #CodSoft
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct tasks
{
    string task;// to store task
    string c;// to store status of task i.e., completed/pending
};
void add_task(vector<tasks> &task_list) //adding task to vector task_list
{
    tasks t;
    cout << "enter the task: ";
    cin.ignore();
    getline(cin, t.task);
    t.c = "Pending";
    task_list.push_back(t);
}
void disp_task(vector<tasks> &task_list) // displaying all the task eith its status present in the task_list
{
    int s = task_list.size();
    cout << "   Tasks\t\t\tC/N" << endl;
    for (int i = 0; i < s; i++)
    {
        int x = task_list[i].task.length();
        cout << i + 1 << ". " << task_list[i].task;
        for (int a = x; a < 28; a++)
            cout << " ";
        cout << task_list[i].c << endl;
    }
    cout << endl
         << endl;
}
void del_task(vector<tasks> &task_list) // deleteing the tasks from task_list
{
    disp_task(task_list);
    int n;
    cout << "enter the task number to delete: ";
    cin >> n;
    n -= 1;
    if (n >= 0 && n < task_list.size())
    {
        task_list.erase(task_list.begin() + n);
        cout << "task deleted successfully." << endl;
        disp_task(task_list);
    }
    else
        cout << "invalid task number" << endl;
}
void mark_done(vector<tasks> &task_list)//marking completed the tasks which are done.
{
    disp_task(task_list);
    cout << "Enter the task no. you want to be marked as done.: ";
    int n;
    cin >> n;
    n -= 1;
    if (n >= 0 && n < task_list.size())
    {
        task_list[n].c = "Completed";
        cout << "task marked as done successfully.\nUpdated task list is here..." << endl;
        disp_task(task_list);
    }
    else
        cout << "task marked done." << endl;
}
void edit_task(vector<tasks> &task_list) //editing the tasks present in task_list.
{
    disp_task(task_list);
    cout << "Enter the task no. you want to edit.: ";
    int n;
    cin >> n;
    n -= 1;
    if (n >= 0 && n < task_list.size())
    {
        cout << "Enter the new task: ";
        cin.ignore();
        getline(cin, task_list[n].task);
        cout << "task edited successfully.\nUpdated task list is here..." << endl;
        disp_task(task_list);
    }
}
int main() //main function to check and use all the function designed above.
{
    vector<tasks> task_list;
    int choice;
    int flag=true;
    while (flag)
    {
        cout << "1. Add task.\n2. Display tasks 'C'-task completed 'N'-task not completed.\n3. mark any task done.\n4. Edit task.\n5. Delete task.\n6. Exit."<<endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            add_task(task_list);
            break;
        }
        case 2:
        {
            disp_task(task_list);
            break;
        }
        case 3:
        {
            mark_done(task_list);
            break;
        }
        case 4:
        {
            edit_task(task_list);
            break;
        }
        case 5:
        {
            del_task(task_list);
            break;
        }
        case 6:
        {
            flag=false;
            break;
        }
        default:
            cout << "Invalid choice\n";
        }
    }
    cout<<"Thank you for using this to do list program."<<endl;
}
