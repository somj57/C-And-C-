#include <stdio.h>
#include <iostream>
using namespace std;
struct book{
    int book_id;
    char title[20];
    float price;
};

void display(book);
book input();
int main(){
    book b1;
    b1 = input();
    display(b1);
}

void display(book b){
    cout<<"Book id : "<<b.book_id<<"\nTitle : "<<b.title<<"\nPrice : "<<b.price;
}

book input(){
    book b;
    cout<<"Enter values : ";
    cin>>b.book_id>>b.title>>b.price;
    return (b);
}
