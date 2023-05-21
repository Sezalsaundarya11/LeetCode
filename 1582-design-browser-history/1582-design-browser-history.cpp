struct  node{
    string url;
    node* next; node*prev;

    node(string url):next(nullptr),prev(nullptr),url(url){}
};
class BrowserHistory {
public:

    node *curr; node* head;
    BrowserHistory(string homepage) {
        node * newnode = new node(homepage);
        head = newnode;
        curr=head;
        
    }
    
    void visit(string url) {
        node *newnode = new node(url);
        curr->next = newnode;
        newnode->prev = curr;
        curr = newnode;
        
    }
    
    string back(int steps) {

        while(curr->prev!=NULL && steps--){
            curr=curr->prev;
        }
        return curr->url;
    }
    
    string forward(int steps) {
        while(curr->next!=NULL && steps--){
            curr=curr->next;
        }
        return curr->url;

        
        
    }
};


/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */