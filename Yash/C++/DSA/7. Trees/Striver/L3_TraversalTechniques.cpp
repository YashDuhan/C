//There are 2 types of Traversal techniques
/*
1. DFS(Depth First Search)
2. BFS(Breadth First Search)


For DFS
i) In-Order Traversal ---> Left Root Right or LNR
ii) Pre-Order Traversal ---> Root Left Right or NLR
iii) Post-Order Traversal ---> Left Right Root or LRN

e.g For This Binary-Tree

.            1
.          /   \
.         2     3
.        / \   / \ 
.       4  5  6  7


i) In-Order Traversal (Left Root Right)
In this technique we will first go the extreme left subtree
then we will apply this LNR logic then we will go the root then after that we will 
go to the extreme right subtree and apply the same

in that tree the extreme left subtree is 

.           2
.          / \
.         4   5

so after applying the LNR logic we will get 
4 as left
2 as root
5 as right

now since the extreme left is done now will print the root which is 1

now we will go the extreme right subtree

.           3
.          / \      
.         6   7

so after applying the LNR logic we will get
6 as left 
3 as root
5 as right

So, The Final answer is 4 2  5 1  6 3  7
.                       ^ ^  ^ ^  ^ ^  ^
.                       L Ro R Ro L Ro R


ii) Pre-Order Traversal (Root Left Right)

Step 1: Print the Root Node
Step 2: Print the extreme left subtree
Step 3: Print the extreme right subtree


So, Now the Answer is 1 2 4 5 3  6 5
.                     ^ ^ ^ ^ ^  ^ ^
.                   Ro Ro L R Ro L R



iii) Post-Order Traversal (Left Right Root)

Step 1: Print the extreme left subtree
Step 2: Print the extreme right subtree
Step 3: Print the Root Node


So, Now the Answer is 4 5 2  6 7 3  1
.                     ^ ^ ^  ^ ^ ^  ^
.                     L R Ro L R Ro Ro




For BFS:
It's als0 known as Level Wise Traversal 

.            1              ---------- Level 0(L0)
.          /   \
.         2     3           ---------- Level 1(L1)
.        / \   / \ 
.       4  5  6   7         ---------- Level 2(L2)

Answer is 1  2  3  4  5  6  7
.         ^  ^  ^  ^  ^  ^  ^
.         L0 L1 L1 L2 L2 L2 L2

*/