n = int(input("Enter n: "))
sum_even = 0
print("Even numbers:")
for i in range(1, n + 1):
    if i % 2 == 0:
        print(i)
        sum_even = sum_even + i
print("Sum of even numbers:", sum_even)
  

n = int(input("Enter n: "))
division = 0
for i in range(1, n + 1):
    if i % 3 == 0 and i % 5 == 0:
        division = division + 1

print("Count of numbers divisible by both 3 and 5:", division)



n = int(input("Enter n: "))
largest_prime = 0
for i in range(2, n + 1):
    prime = True
    for j in range(2, i):
        if i % j == 0:
            prime = False
            break
    if prime:
        largest_prime = i
print("Largest prime number:", largest_prime)
n = int(input("Enter n: "))
sum_digits = 0
for i in range(1, n + 1):
    for j in range(1, i + 1):
        if j * j == i:
            num = i
            while num > 0:
                sum_digits = sum_digits + num % 10
                num = num // 10

print("Sum of digits of perfect squares:", sum_digits)
n = int(input("Enter n: "))
total = 0
for i in range(1, n + 1):
    total = total + i
    if total % 100 == 0:
        print("Running total:", total)