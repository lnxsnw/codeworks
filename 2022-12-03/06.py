# Shopping Cart v4
# Run this at https://www.onlinegdb.com/
import os
# Menu options
menu_items = {
    1: {"item": "Pistachio Cream Cold Brew", "price": 199.99},
    2: {"item": "Iced Caramel Macchiato", "price": 299.49},
    3: {"item": "Vanilla Sweet Cream Nitro Cold Brew", "price": 420.69},
    4: {"item": "Iced Peppermint White Chocolate Mocha", "price": 599.89},
    5: {"item": "Iced Clover Brewed® Decaf Pike Place® Roast", "price": 720.99}
}

# Cart to store the items
cart = []

# Main program loop
while True:
    # Print menu
    os.system("clear")
    print("Welcome to the store!")
    print("Here are the menu options:")
    print("\n")
    for key, value in menu_items.items():
        print(f"[{key}] - {value['item']}: P{value['price']}")
    print("\n")
    print("Select by typing from the numbers 1 to 5.")
    print("Type 'checkout' to proceed to checkout.")

    # Get user input
    print("\n")
    user_input = input("What would you like to buy? ")

    # Check if user wants to checkout
    if user_input.lower() == "checkout":
        break

    # Check if input is a valid menu option
    if not user_input.isdigit() or int(user_input) not in menu_items:
        print("Invalid input. Please try again.")
        continue

    # Add item to cart
    cart.append(menu_items[int(user_input)])

# Print the items in the cart
os.system("clear")
print("Here are the items in your cart:")
print("\n")
for item in cart:
    print(f"{item['item']}: {item['price']}")

# Calculate total price
print("\n")
total_price = sum([item["price"] for item in cart])
print(f"Total price: {total_price}")

# Get payment
while True:
    payment = input("Enter amount to pay: ")
    if not payment.isdigit():
        print("Invalid input. Please try again.")
        continue
    payment = float(payment)
    if payment < total_price:
        print("Not enough payment. Please try again.")
        continue
    break

# Calculate change
os.system("clear")
change = payment - total_price
print(f"Your change is: {change}")
print("Thank you for shopping with us!")
