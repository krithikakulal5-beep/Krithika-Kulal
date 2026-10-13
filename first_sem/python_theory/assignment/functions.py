menu = {
    "panner chilly": 180,
    "meals": 50,
    "gobi": 80,
    "coffee": 30,
    "dosa": 50,
    "veg kurma":100,
    "veg roll":120

}

def get_price(item):
    if item == "paneer chilly":
        return 180
    elif item == "meals":
        return 50
    elif item == "gobi":
        return 80
    elif item == "coffee":
        return 30
    elif item == "dosa":
        return 50
    elif item == "veg kurma":
        return 100
    elif item == "veg roll":
        return 120
    else:
        return 0


def item_cost(item, qty):
    return get_price(item) * qty


def calculate_gst(amount, rate=0.05):
    return amount * rate


def generate_bill(subtotal, discount_percent=0):
    discount = subtotal * discount_percent
    amount_after_discount = subtotal - discount
    gst = calculate_gst(amount_after_discount)
    total = amount_after_discount + gst
    return discount, gst, total


def split_bill(total, people):
    each=total / people
    extra=total%people
    return each,extra


def take_orders():
    people = int(input("Enter number of people: "))
    subtotal = 0

    for p in range(people):
        print(f"\nPerson {p + 1}")

        no_of_items = int(input("How many items did you buy? "))

        for i in range(no_of_items):
            print(f"\nItem {i + 1}")
            item = input("Enter item name: ").lower()
            qty = int(input("Enter quantity: "))

            subtotal += item_cost(item, qty)

    return people, subtotal


def display_bill(subtotal, discount, gst, total, each,extra):
    print("\n----- FINAL BILL -----")
    print("Subtotal :", subtotal)
    print("Discount :", discount)
    print("GST      :", gst)
    print("Total    :", total)
    print("Each pays:", round(each, 2))
    print("Left over:",round(extra,2))


# Main Program
print("===== RESTAURANT MENU =====")
for item, price in menu.items():
    print(f"{item.title():10} : ₹{price}")
people, subtotal = take_orders()

discount, gst, total = generate_bill(subtotal, 0.10)

each,extra = split_bill(total, people)


display_bill(subtotal, discount, gst, total, each,extra)