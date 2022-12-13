# Shopping Cart v2
# Run this at https://www.onlinegdb.com/
import os # For use of os.system('clear') funtion. This clears the screen!
firstrun = 0
# Here goes the shop sells
products = ["Coffee", "Coke", "Pizza", "Cake", "Cookies"]
prices = [10, 15, 25, 50, 7]
# Here goes the customer picks
s_products = []
s_prices = []

# Menu List
def menu():
    print ("We Have:")
    print ("")
    print (f"[1] {products[0]}  - P{prices[0]}")
    print (f"[2] {products[1]}  - P{prices[1]}")
    print (f"[3] {products[2]}  - P{prices[2]}")
    print (f"[4] {products[3]}  - P{prices[3]}")
    print (f"[5] {products[4]}  - P{prices[4]}")
    print ("")
    print ("Select your order by entering the number.")
    print ("To order a product multiple times, simply re-enter it again!")
    print ("To checkout, press 9. To cancel everything and exit, press 0.")
    print ("")

def checkout():
    cartsize = len(s_prices)
    os.system('clear')
    print ("Name's Mini Store - Checkout")
    print ("")
    print (f"You currently have {cartsize} item(s) on your cart.")
    print ("To Place Order, press 1. To Go Back, press 0.")
    print ("")
    print ("=============================================")
    print ("            Your Cart Contains:             ")
    print ("=============================================")
    print ("")
    print("Products    Price")
    print ("")
    for i in range(len(s_prices)):
        print(s_products[i] + '\t    ' + s_prices[i])
    print ("")
    print ("=============================================")
    print("             Total Price: P", sum(int(i) for i in s_prices))
    print ("=============================================")
    print ("")
    while True: # Python has no switch case HAHAHAHA
        addcartinput=input("Type in your selection:\n")
        # Functions as a Switch Case (C/C++)
        if (addcartinput==''):
            os.system('clear')
            print ("What?")
            print ("")
            checkout()
        elif (addcartinput=='1'):
            os.system('clear')
            pay()
        elif (addcartinput=='0'):
            os.system('clear')
            menu()
        else:
            os.system('clear')
            print ("[ERR] Invalid Choice. Refreshing.")
            print ("")
            checkout()

def pay():
    print ("Name's Mini Store - Payment")
    print ("")
    print("Total Price: P", sum(int(i) for i in s_prices))
    payinput=input("Type in your amount to pay: P")
    if (int(payinput) > sum(int(i) for i in s_prices)):
        os.system('clear')
        print ("Name's Mini Store - Checked Out!")
        print ("")
        print ("Transaction Complete!")
        print ("Thank You for Shopping!")
        print ("")
        print ("=============================================")
        print ("            You have checked out:             ")
        print ("=============================================")
        print ("")
        print("Products    Price")
        print ("")
        for i in range(len(s_prices)):
            print(s_products[i] + '\t    ' + s_prices[i])
        print ("")
        print ("=============================================")
        print("             Total Price: P", sum(int(i) for i in s_prices))
        print("       Total Amount Paid: P", int(payinput))
        print ("=============================================")
        print ("")
        print ("Re-run the code to start again!")
        exit()
    elif (int(payinput) < sum(int(i) for i in s_prices)):
        os.system('clear')
        print ("Transaction Failed!")
        print ("You have insufficent funds!")
        print ("")
        pay()
    else:
        os.system('clear')
        print ("Wait, What?")
        print ("")

# Frontcode
print ("Welcome to Name's Mini Store!")
print ("")
menu()


##### This is a mess but it works
while True: # Python has no switch case HAHAHAHA
    addcartinput=input("Type in your selection:\n")
    # Functions as a Switch Case (C/C++)
    if (addcartinput==''):
        print ("What?")
    elif (addcartinput=='0'):
        os.system('clear')
        print ("Name's Mini Store - Goodbye!")
        print ("")
        print ("Re-Run the program to restart it!")
        exit()
    elif (addcartinput=='1'):
        os.system('clear')
        print ("Name's Mini Store - Product Selection")
        print ("")
        print ("You have selected:")
        print (f"[1] {products[0]}  - P{prices[0]}")
        print ("")
        ### Here is where customer will confirm the order or not
        confirmselect=input("Press y to confirm, n to cancel selection and try again:\n")
        if (confirmselect=='y'):
            s_products.append(f'{products[0]}') # Add to Cart: Name
            s_prices.append(f'{prices[0]}') # Add to Cart: Price
            os.system('clear')
            print (f'Hooray! Your {products[0]} has been added to the cart!')
            print ("")
            menu()
        elif (confirmselect=='n'):
            os.system('clear')
            print (f'Your {products[0]} selection has been cancelled!')
            print ("")
            menu()
        else:
            os.system('clear')
            print ("[ERR] Invalid Confirmation Choice. Restarting Menu.")
            print ("")
            menu()
    elif (addcartinput=='2'):
        os.system('clear')
        print ("Name's Mini Store - Product Selection")
        print ("")
        print ("You have selected:")
        print (f"[2] {products[1]}  - P{prices[1]}")
        print ("")

        confirmselect=input("Press y to confirm, n to cancel selection and try again:\n")
        if (confirmselect=='y'):
            s_products.append(f'{products[1]}')
            s_prices.append(f'{prices[1]}')
            os.system('clear')
            print (f'Hooray! Your {products[1]} has been added to the cart!')
            print ("")
            menu()
        elif (confirmselect=='n'):
            os.system('clear')
            print (f'Your {products[1]} selection has been cancelled!')
            print ("")
            menu()
        else:
            os.system('clear')
            print ("[ERR] Invalid Confirmation Choice. Restarting Menu.")
            print ("")
            menu()
    elif (addcartinput=='3'):
        os.system('clear')
        print ("Name's Mini Store - Product Selection")
        print ("")
        print ("You have selected:")
        print (f"[3] {products[2]}  - P{prices[2]}")
        print ("")

        confirmselect=input("Press y to confirm, n to cancel selection and try again:\n")
        if (confirmselect=='y'):
            s_products.append(f'{products[2]}')
            s_prices.append(f'{prices[2]}')
            os.system('clear')
            print (f'Hooray! Your {products[2]} has been added to the cart!')
            print ("")
            menu()
        elif (confirmselect=='n'):
            os.system('clear')
            print (f'Your {products[2]} selection has been cancelled!')
            print ("")
            menu()
        else:
            os.system('clear')
            print ("[ERR] Invalid Confirmation Choice. Restarting Menu.")
            print ("")
            menu()
    elif (addcartinput=='4'):
        os.system('clear')
        print ("Name's Mini Store - Product Selection")
        print ("")
        print ("You have selected:")
        print (f"[4] {products[3]}  - P{prices[3]}")
        print ("")

        confirmselect=input("Press y to confirm, n to cancel selection and try again:\n")
        if (confirmselect=='y'):
            s_products.append(f'{products[3]}')
            s_prices.append(f'{prices[3]}')
            os.system('clear')
            print (f'Hooray! Your {products[3]} has been added to the cart!')
            print ("")
            menu()
        elif (confirmselect=='n'):
            os.system('clear')
            print (f'Your {products[3]} selection has been cancelled!')
            print ("")
            menu()
        else:
            os.system('clear')
            print ("[ERR] Invalid Confirmation Choice. Restarting Menu.")
            print ("")
            menu()
    elif (addcartinput=='5'):
        os.system('clear')
        print ("Name's Mini Store - Product Selection")
        print ("")
        print ("You have selected:")
        print (f"[5] {products[4]}  - P{prices[4]}")
        print ("")

        confirmselect=input("Press y to confirm, n to cancel selection and try again:\n")
        if (confirmselect=='y'):
            s_products.append(f'{products[4]}')
            s_prices.append(f'{prices[4]}')
            os.system('clear')
            print (f'Hooray! Your {products[4]} has been added to the cart!')
            print ("")
            menu()
        elif (confirmselect=='n'):
            os.system('clear')
            print (f'Your {products[4]} selection has been cancelled!')
            print ("")
            menu()
        else:
            os.system('clear')
            print ("[ERR] Invalid Confirmation Choice. Restarting Menu.")
            print ("")
            menu()
    elif (addcartinput=='9'):
        os.system('clear')
        checkout()
    else:
        os.system('clear')
        print ("[ERR] Invalid Choice. Restarting Menu.")
        print ("")
        menu()
