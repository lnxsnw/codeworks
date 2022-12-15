# Shopping Cart v3
# Run this at https://www.onlinegdb.com/
import os
# Create a dictionary of food items and prices
menu = {
    "Coffee": 10,
    "Coke": 15,
    "Pizza": 25,
    "Cake": 50,
    "Cookies": 7
}

# Initialize a list to store the items the user picks
order = []

# Initialize a variable to store the total cost of the order
total_cost = 0

# Create a flag variable to track whether the user is done picking items
done = False

# Create a flag variable to track whether the user wants to checkout
checkout = False

# Loop until the user is done picking items
while not done:
    # Clear Screen and Print the menu
    os.system('clear')
    print("Menu:")
    for item, price in menu.items():
        print("{}: ${}".format(item, price))

    # Prompt the user to pick an item
    choice = input("Choose an item: ")

    # Add the item to the order and update the total cost
    order.append(choice)
    total_cost += menu[choice]

    # Ask if the user wants to choose another item
    another = input("Do you want to choose another item (y/n)? ")
    if another.lower() == "n":
        # If the user doesn't want to choose another item, set the "done" flag to True
        done = True

# Print the order and total cost
os.system('clear')
print("Your order: {}".format(order))
print("Total cost: P{}".format(total_cost))

# Ask if the user wants to checkout; Also repeat when customer has no money before and now has it
checkout = input("Do you want to checkout (y/n)? ")
if checkout.lower() == "y":
    # If the user wants to checkout, clear screen and calculate the change
    os.system('clear')
    paid = float(input("Type in your amount to pay: P"))
    if (int(paid) > int(total_cost)):
        change = paid - total_cost
        print("Your change is: P{:.2f}".format(change))
    else:
        change = paid - total_cost
        print("Oops! You are in short of P{:.2f}".format(change))
else:
    print("*Assumes you returned the items and left the store*")
