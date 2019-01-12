#include<iostream>
using namespace std;

class Story {
 public:
 int info;
 Story*next;

Story () {
    
    next=NULL;
}
};


class listlink {
 public:
 Story*head;
 Story*tail;
 Story*temp;
 listlink() {
   head=NULL;
   tail=NULL;
}

//INSERT

void insert( int value) {
 Story*temp=new Story;
 temp->info=value;
 if(head==NULL) {
     head=temp;
   }
 else {
   tail->next=temp;
  }
  
 tail=temp;
}

//INSERTAT

void insertAt(int pos,int value) {
 Story*current=head;
 int i=1;
 while (i<pos-1) {
   i++;
 current=current->next;
 }

 Story*temp=new Story;
 temp->info=value;
 temp->next=current->next;
 current->next=temp;
}

//DELETE

void delta() {
  Story*temp=tail;
  Story*current=head;
while(current->next!=tail) {
   current=current->next;
  }
 current->next=NULL;
 tail= current;
 delete temp;
 }

//DELETEAT
 
void deleteAt (int pos) {
 Story*current=head;
  int i=1;

  Story*temp2=new Story;
  while(i<pos) {
  temp2=temp->next;
   i++;
  }

Story*temp1=head;
while (i<pos-1)
  {temp=temp->next;
    i++;
}

while (i<pos) {
 current=current->next;
  i++;}
temp->next=current ;


delete temp2;
}
//countitems
  
int counter()
 {int i=1;
   Story*current=head;
  while (current->next !=NULL) {
     current=current->next;
      i++;
}
return i;
}

//DISPLAY

void display(){
 Story*current=head;
 while (current != NULL) {
  cout<<current->info<<"->";
  current=current->next;
}
 cout<<endl;
}
};



int main () {
listlink l1;

  l1.insertAt(1,3);
  l1.display();
  l1.insert(5);
  l1.insert(10);
  l1.insert(15);
 l1.insert(20);
 l1.display();
 l1.delta();
 l1.display();
 l1.deleteAt(2);
 l1.counter();

 return 0;

}

































