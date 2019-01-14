//including library
#include<iostream>
using namespace std;

// creating a main class
class Story {
 public:
 int info;
 //adding constuctor to class story
 Story*next;

Story () {
    
    next=NULL;
}
};


// starting linked list with class
class listlink {
 public:
 Story*head;
 Story*tail;
 Story*temp;
 //adding constructor to class listlink
 listlink() {
   head=NULL;
   tail=NULL;
}

//INSERT

void insert( int value) {
 //making a new element
 Story*temp=new Story;
 temp->info=value;
 //using conditions
 if(head==NULL) {
     head=temp;
   }
 else {
   tail->next=temp;
  }
  
 //inserting the new element
 tail=temp;
}

//INSERTAT

void insertAt(int pos,int value) {
 Story*current=head;
 int i=1;
 //loop for the particular position
 while (i<pos-1) {
   i++;
 current=current->next;
 }

 //new element to be inserted
 Story*temp=new Story;
 temp->info=value;
 temp->next=current->next;
 //element inserted
 current->next=temp;
}

//DELETE

void delta() {
  Story*temp=tail;
  Story*current=head;
 //loop to reach end position
while(current->next!=tail) {
   current=current->next;
  }
 current->next=NULL;
 tail= current;
 // element deleted
 delete temp;
 }

//DELETEAT
 
void deleteAt (int pos) {
 Story*current=head;
  int i=1;

 //first new element 
  Story*temp2=new Story;
 //loop to get to the required position
  while(i<pos) {
  temp2=temp->next;
   i++;
  }

 //new element again
Story*temp1=head;
 //loops for the position
while (i<pos-1)
  {temp=temp->next;
    i++;
}

while (i<pos) {
 current=current->next;
  i++;}
temp->next=current ;

//deleted
delete temp2;
}
 
//COUNT ITEMS
  
int counter()
 {int i=1;
   Story*current=head;
  //loops to count 
  while (current->next !=NULL) {
     current=current->next;
      i++;
}
//returning the value to user
return i;
}

//DISPLAY

void display(){
 Story*current=head;
 //loop for display
 while (current != NULL) {
  cout<<current->info<<"->";
  current=current->next;
}
 cout<<endl;
}
};


//TIME TO EXECUTE
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

 // YAY! Mission completed
 return 0;

}

































