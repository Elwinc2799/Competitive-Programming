
def sub_lists (l):
    lists = [[]]
    for i in range(len(l) + 1):
        for j in range(i):
            lists.append(l[j: i])
    return lists

N = int(input())
length = str(input()).split()

length = [int(x) for x in length]

all_possible_list = sub_lists(length)

sum_list = []
num_values = []

for i in range(len(all_possible_list)):
    sum_list.append(sum(all_possible_list[i]))
    num_values.append(len(all_possible_list[i]))

max_temp = 0

for i in range(len(all_possible_list)):
    for j in range(i+1, len(all_possible_list)):
        if sum_list[i] == sum_list[j] and num_values[i] + num_values [j] <= N:
            max_temp = max(max_temp, sum_list[j])

print(max_temp)

