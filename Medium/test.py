# def kad(arr):
#     max_sum = arr[0]
#     current_sum = max_sum
#     for i in range(1,len(arr)):
#         current_sum = max((current_sum + arr[i]), arr[i])
#         max_sum = max(current_sum, max_sum)
#     return max_sum
# def imp(a):
#     b = [-i for i in a]
#     print(a)
#     print(b)
#     plus = kad(a)
#     print('plus', plus)
#     minus = kad(b)
#     print('Minus', minus)
#     cs = sum(a)
#     print("cs", cs)
#     cs += minus
#     print('cs2', cs)
#     if cs > plus and cs != 0:
#         return cs
#     else:
#         return plus


# print(imp([-2, -3, -1]))



def med(arr):
    current_max = arr[0]
    final_max= arr[0]
    current_min = arr[0]
    for i in range(1, len(arr)):
        temp = current_max
        current_max = max(max(current_max * arr[i], current_min * arr[i]), arr[i])
        print("MAX",current_max)
        current_min = min(min(temp * arr[i], current_min*arr[i]),arr[i])
        print('MIN', current_min)
        if current_max > final_max:
            print('FINAL', final_max)
            final_max = current_max
    return final_max
print(med([2, -3, 4, -2, -1]))

# def lcc(names):
#     names.sort
#     return names
# print(lcc(['wano', 'wano(1)']))