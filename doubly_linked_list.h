#include<iostream>
using namespace std;

template<typename T>

class Node{
    private:
        T data;
        Node<T>* next;
        Node<T>* prev;
        template<typename U>friend class LinkedList;
    public:
        Node(){
            this->next = NULL;
            this->prev = NULL;
        }
};

template<typename T>

class LinkedList{
    private:
        Node<T>* head;
    public:
        LinkedList(){
            this->head = NULL;
        }
        
        
         int length(){
            int len = 0;
            Node<int>* temp = head;
            while(temp != NULL){
                len++;
                temp = temp->next;
            }
            return len;
        }
        
        
        
       void insert(int index, T item){
           
         
           
            Node<T>* node = new Node<T>[1];
            node->data = item;
            
              if(head == NULL){
                head = node;
                return;
                
              }
            
            int count = 0;
            Node<T>* temp = head;
            while(temp != NULL && count < index){
                if(count == index-1){
                    if(temp->next != NULL){
                        node->next = temp->next;
                    }
                    temp->next = node;
                    node->prev = temp;
                    cout<<"new node added at index "<<index<<" !"<<endl;
                    break;
                }
                count++;
                temp = temp->next;
            }
       }
       
       
       void remove(int index){
            if(head == NULL){
                cout<<"linked list is empty !"<<endl;
                return;
            }
            if(index >= length() || index < 0){
                cout<<"index out of bound !"<<endl;
                return;
            }
            if(index == 0){
                removeFront();
                cout<<"item removed at index "<<index<<endl;
                return;
            }
            int count = 0;
            Node<T>* temp = head;
            while(temp != NULL){
                if(count == index - 1){
                    temp->next = temp->next->next;
                    cout<<"item removed at index "<<index<<endl;
                    break;
                }
                count++;
                temp = temp->next;
            }
        }
        
        void removeFront(){
            if(head == NULL){
                cout<<"linked list is empty !"<<endl;
                return;
            }
            head = head->next;
            head->next->prev = head;
            cout<<"front item removed"<<endl;
        }

        
        
        
        void displayAll(){
            if(head == NULL){
                cout<<"linked list is empty"<<endl;
                return;
            }
            cout<<endl<<"----link list items------"<<endl;
            Node<T>* temp = head;
            while(temp != NULL){
                cout<<temp->data<<" | ";
                temp = temp->next;
            }
            cout<<endl<<"--------------------------"<<endl;
        }
        
       
            
        
        
        
        
        
        
};