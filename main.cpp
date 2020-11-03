#include <iostream>

using namespace std;

struct b_node
{
    char b_name[70];
    char b_id[5];
    char b_genre[30];
    char b_author[60];
    double price;
    int edition;
    int total_qty;
    int qty_left;

    node * next;
};
class book
{
    b_node * head;
    public:
        book()
        {
            head=NULL;
        }

        b_node * add_book();
        b_node * update_b_details();
        b_node * remove_book();
        //b_node * recommend_book(head);
};

void b_node::add_book()
{
    //Sakshi or Shikha
}

struct v_node
{
    char v_name[70];
    char mem_no[5];
    char email[30];
    char mem_type[40];
    char exp_date[12];//Input date as : "Enter date (DD/MM/YY):";
    int no_of_books;
    int reissue_times;//DO NOT take this as input from user
    double money_due;
    char m_b_id[5];//id of book issued to member, only one book can be issued at a time

    node * next;
};

class visitor
{
    v_node * head;
    public:
        visitor()
        {
            head=NULL;
        }

        v_node * add_member();
        v_node * remove_member();
        v_node * add_details();
        v_node * remove_details();
        v_node * update_details();
        //Issue
        //Re-issue
        //Return
};

void v_node::add_member()
{
    //Sakshi or Shikha
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
