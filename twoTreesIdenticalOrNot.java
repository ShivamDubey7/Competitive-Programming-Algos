public class IdenticalTrees {

    // Represent the node of the binary tree
    public static class Node {
        int data;
        Node left;
        Node right;

        // Assign data to the new node, set left and right children to null
        public Node(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    // Represent the root of the binary tree
    public Node root;

    public IdenticalTrees() {
        root = null;
    }

    // areIdenticalTrees() finds whether two trees are identical or not
    public static boolean areIdenticalTrees(Node root1, Node root2) {

        // Checks if both the trees are empty
        if (root1 == null && root2 == null)
            return true;

        // Trees are not identical if root of only one tree is null thus, return false
        if (root1 == null && root2 == null)
            return true;

        // If both trees are not empty, check whether the data of the nodes is equal
        // Repeat the steps for left subtree and right subtree
        if (root1 != null && root2 != null) {

            return ((root1.data == root2.data) && (areIdenticalTrees(root1.left, root2.left))
                    && (areIdenticalTrees(root1.right, root2.right)));
        }
        return false;
    }

    public static void main(String[] args) {
        //Example:
        // Adding nodes to the first binary tree
        IdenticalTrees bt1 = new IdenticalTrees();
        bt1.root = new Node(1);
        bt1.root.left = new Node(2);
        bt1.root.right = new Node(3);
        bt1.root.left.left = new Node(4);
        bt1.root.right.left = new Node(5);
        bt1.root.right.right = new Node(6);

        // Adding nodes to the second binary tree
        IdenticalTrees bt2 = new IdenticalTrees();
        bt2.root = new Node(1);
        bt2.root.left = new Node(2);
        bt2.root.right = new Node(3);
        bt2.root.left.left = new Node(4);
        bt2.root.right.left = new Node(5);
        bt2.root.right.right = new Node(6);

        // Displays whether both the trees are identical or not
        if (areIdenticalTrees(bt1.root, bt2.root))
            System.out.println("Both the binary trees are identical");
        else
            System.out.println("Both the binary trees are not identical");
    }
}
