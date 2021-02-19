package Assignment3;

public class deleteNode {
    static Node head = new Node(0);

    static void printList(Node node) {
        while (node != null) {
            System.out.print(node.data + " ");
            node = node.next;
        }
    }
        public static void deleteNode(Node node) {
                Node q=node;
                while(node.next!=null)
                {
                    node.data=node.next.data;
                    q=node;
                    node=node.next;
                }
                q.next=null;
        }

        public static void main(String[] args) {
        head = new Node(1);
        head.next = new Node(2);
        head.next.next = new Node(3);
        head.next.next.next = new Node(4);
        head.next.next.next.next= new Node(5);
        System.out.println("Before delete");
        printList(head);
        deleteNode(head);
        System.out.println("\nAfter delete ");
        printList(head);
    }

}
