Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

 

Example 1: \
\
![image](https://user-images.githubusercontent.com/86098096/194071891-0075d76b-3f4f-4a3c-ba16-34b004db0fa0.png)


```
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
```
Example 2: \
\
![image](https://user-images.githubusercontent.com/86098096/194071952-8d145941-6b85-43ec-aa30-b380742d03e5.png)


```
Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
```
Example 3: \
\
![image](https://user-images.githubusercontent.com/86098096/194072010-7cada59d-49aa-4678-b771-476577cb8297.png)


```
Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.
``` 

Constraints:
```
The number of the nodes in the list is in the range [0, 104].
-105 <= Node.val <= 105
pos is -1 or a valid index in the linked-list.
```
 
