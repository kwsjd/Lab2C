#include "iostream"
using namespace std;
struct Type
{
    int form;
    char name[50];
    Type* next;
};
Type* AddFirst(Type *f, Type *t)
{
    t->next=f;
    return t;
}
Type* AddLast(Type *last, Type* t)
{
    last->next=t;
    t->next=NULL;
    return t;
}
int main()
{
    Type *p,*form9=0,*form9last=0, *form10=0, *form10last=0, *form11=0, *form11last=0;
    while(true)
    {
        p=new Type;
        cin>>p->form;
        cin.getline(p->name,50,'\n');
        if(p->form==9 && form9last==0) {AddFirst(form9last,p); form9=p; form9last=p;}
        else if(p->form==9 && form9last!=0) {AddLast(form9last,p); form9last=p;}
        else if(p->form==10 && form10last==0) {AddFirst(form10last,p); form10=p; form10last=p;}
        else if(p->form==10 && form10last!=0) {AddLast(form10last,p); form10last=p;}
        else if(p->form==11 && form11last==0) {AddFirst(form11last,p); form11=p; form11last=p;}
        else if(p->form==11 && form11last!=0) {AddLast(form11last,p); form11last=p;}
        if(cin.eof()) break;
    }
    Type* t9=form9;
    while(t9!=0)
    {
        cout<<t9->form<<' '<<t9->name<<'\n';
        t9=t9->next;
    }
    Type* t10=form10;
    while(t10!=0)
    {
        cout<<t10->form<<' '<<t10->name<<'\n';
        t10=t10->next;
    }
    Type* t11=form11;
    while(t11!=0)
    {
        cout<<t11->form<<' '<<t11->name<<'\n';
        t11=t11->next;
    }
    system("PAUSE");
    return 0;
}