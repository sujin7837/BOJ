def preorder(x):
    if x != '.':
        for i in range(n):
            if li[i][0] == x:
                num = i
        print(x, end='')
        preorder(li[num][1])
        preorder(li[num][2])

def inorder(x):
    if x != '.':
        for i in range(n):
            if li[i][0] == x:
                num = i
        inorder(li[num][1])
        print(x, end='')
        inorder(li[num][2])

def postorder(x):
    if x != '.':
        for i in range(n):
            if li[i][0] == x:
                num = i
        postorder(li[num][1])
        postorder(li[num][2])
        print(x, end='')


n = int(input())
li = [list(input().split()) for i in range(n)]

preorder('A')
print('')
inorder('A')
print('')
postorder('A')