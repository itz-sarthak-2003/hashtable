#include<iostream>
using namespace std;
int c[20],key[20];
int n,i;
class student{
public:
int track_no;
string name;
void htable();
void declare();
void accept();
void search();
void update();
void Delete();
}h[20];

void student::Delete(){
        int no,pr,pos,f=0;
    cout<<"enter track no which u want to deleted"<<endl;
    cin>>pr;
    for(int i=0;i<n;i++){
        no=pr%10;
        pos=no;
        do{
            if(h[no].track_no==pr){
                f=1;
                break;
            }
            else{
                no++;
                c[pos]=no;
                if(no>10){
                    no=0;
                }
            }
        
    }while(no<10);
    }
if(f==1){
    cout<<"song deleted successfully";
    h[no].track_no=-1;
    h[no].name=" ";
    
}
else{
    cout<<"record is not found";
}
}

void student::update(){
    int no,pr,pos,f=0;
    cout<<"enter song name which u want to update"<<endl;
    cin>>pr;
    for(int i=0;i<n;i++){
        no=pr%10;
        pos=no;
        do{
            if(h[no].track_no==pr){
                f=1;
                break;
            }
            else{
                no++;
                c[pos]=no;
                if(no>10){
                    no=0;
                }
            }
        
    }while(no<10);
    }
if(f==1){
    cout<<"enter info "<<endl;
     cout<<"\n name of song"<<endl;
     cin>>h[no].name ;
}
else{
    cout<<"song is not found";
}
}
void student::search(){
    int no,pr,pos,f=0;
    cout<<"enter song which u want to search "<<endl;
    cin>>pr;
    for(int i=0;i<n;i++){
        no=pr%10;
        pos=no;
        do{
            if(h[no].track_no==pr){
                f=1;
                break;
            }
            else{
                no++;
                c[pos]=no;
                if(no>10){
                    no=0;
                }
            }
        
    }while(no<10);
    }
if(f==1){
     cout<<"\n track_no \tsong  \tchain"<<endl;
       cout<<"\n"<<h[no].track_no<< "\t"<<h[no].name<<"\t"<<c[i]<<endl;
}
else{
    cout<<"song is not found";
}
}
void student::accept(){
    int no,pos;
    for(i = 0; i < n; i++) {
    no=key[i] % 10;
    pos=no;
    do{
        if(h[no].track_no==-1){
            h[no].track_no=key[i];
            cout<<"enter song name : "<<endl;
            cin>>h[no].name;
            break;
        }
        else{
            no++;
            c[pos]=no;
        }
    }while(no<10);
}
}
void student::declare(){
    cout<<"enter how many track_key u want to insert : ";
    cin>>n;
    cout<<"enter the track_keys : ";
    for( i=0;i<n;i++){
        cin>>key[i];
    }
    for( i=0;i<20;i++){
        h[i].track_no=-1;
        c[i]=0;
    }
}
void student::htable(){
    cout<<"\ntrack_no\tsong \tchain"<<endl;
    for( i=0;i<20;i++){
        cout<<"\n"<<h[i].track_no<< "\t \t"<<h[i].name<<"\t "<<c[i]<<endl;
    }
}
int main()
{
    int ch;
    student s;
    do{
         cout << "\nWELCOME TO Music Application ! ";
        cout << "\n1.enter track_keys  \n2.accept song details  \n3.display song library \n4.search a song\n5.update a song \n6.delete a song \n7.exit from music application";
        cout << "\nENTER YOUR CHOICE = : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        cout<<"enter track_keys "<<endl;
            s.declare();
            break;
        case 2:
            cout << "accept song details "<<endl;
            s.accept();
            break;
        case 3:
            s.htable();
            break;
        case 4:
            s.search();
            break;
        case 5:
            s.update();
            break;
        case 6:
            s.Delete();
            break;
        case 7:
            exit(0);
            cout << "Thanks........";
            break;
        default:
            cout << "Wrong choice";
        }

    }while(ch!=7);
return 0;
}