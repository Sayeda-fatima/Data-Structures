Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 

Example 1: \
\
![image](https://user-images.githubusercontent.com/86098096/184810301-8e11d7cb-af00-4892-bf61-fd764c97a0a2.png)


 ```
Input: root = [2,1,3]
Output: true
```
Example 2: \
\
![image](https://user-images.githubusercontent.com/86098096/184810664-5834a9da-8dc3-42b7-b727-4ab02e70fe26.png)

```
Input: root = [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.
 ```

Constraints:
```
The number of nodes in the tree is in the range [1, 104].
-231 <= Node.val <= 231 - 1
```
