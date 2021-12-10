#include <iostream>
#include <list>
#include <iterator>

using namespace std;

template <typename T>
void print_number(const list<T>& lst)
{
    for (auto i = lst.cbegin(); i != lst.cend(); ++i) {
        cout << *i << endl;
    }
}

template <typename T>
void add_numbers(int number, list<T>& lst)
{
    for (int i = 2; i <= number; ++i)
    {
        lst.push_back(i);
    }
}

template <typename T>
void selection(int number, list<T>& lst)
{
    list<int> tmp_list;
    for (int j = 2; j < number; j++)
    {
        for (auto i = lst.cbegin(); i != lst.cend(); i++)
        {

            if (*i % j == 0 && *i != j)
            {
                tmp_list.push_back(*i);
                /*lst.erase(i);*/
             /*   continue;*/
            }
            else {
                continue;
            }
        }

    }
    tmp_list.unique();
    for (auto i = tmp_list.cbegin(); i != tmp_list.cend(); i++)
    {
        lst.remove(*i);
    }
}

int main() {
    list<int> smp_list;
    int number;
    cout << "Enter number" << endl;
    cin >> number;
    add_numbers(number, smp_list);
    cout << "initial values" << endl;
    print_number(smp_list);
    selection(number, smp_list);
    cout << "simple_numbers" << endl;
    print_number(smp_list);
    return 0;
}

