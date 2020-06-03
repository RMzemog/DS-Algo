x = int(input("Length of the list Pleaseee :"))
done = []
for i in range(0, x):
    inp = int(input())
    done.append(inp)
print(done)

k= int(input('Enter the Kth element: '))

done.sort()
print(done)
print(done[k-1])