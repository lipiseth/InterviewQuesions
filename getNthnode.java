```java

public ListNode getMiddleNode(){
    ListNode slowPtr = head;
    ListNode fastPtr = head;
    while(fastPtr!=null && fastPtr.next!=null){
        slowPtr = slowPtr.next;
        fastPtr = fastPtr.next.next;
    }
    return slowPtr;
}

public ListNode getNthNodeFromEnd(int n){
    if(head==null){
        return null;
    }
    if(n<0){
        throw IllegalArguementException("invalid input value : n = " + n);
    }
    ListNode mainPtr = head;
    ListNode refPtr = head;
    int count = 0;
    while(count < n){
        if(refPtr==null){
            throw IllegalArguementException(n + " is greater than the number of nodes in the list");
        }
        refPtr = refPtr.next;
        count++;
    }
    while(refPtr!=null){
        refPtr = refPtr.next;
        mainPtr = mainPtr.next;
    }
    return mainPtr;
}

public void removeDuplicatesFromSortedList(){
    if(head == null){
        return null;
    }
    ListNode current = head;
    while(current != null && current.next != null){
        if(current.data == current.next.data){
            curren.next = current.next.next;
        }
        else{
            current = current.next;
        }
    }
}
```
