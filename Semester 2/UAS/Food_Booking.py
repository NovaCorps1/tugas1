menu = [
    {
        'item':'Hotdog',
        'price': 18000
    },
    {
        'item':'Sandwhich',
        'price':13000   
    },
    {
        'item':'Smoothies',
        'price':15000 
    },
    {
        'item':'Juice',
        'price':11000 
    }
]

booking = []

def totalOrder():
    if len(booking) > 0:
        print('Your order:')
        total = 0
        for item in booking:
            total += item['qty']*item['price']
            print(f'{item["qty"]} {item["item"]}')
        print()

        print(f'Total = Rp {total}\n')

def placeOrder(index, qty):
    item = menu[index]

    item.update({'qty':qty})
    booking.append(item)



while True:
    print('Take It, Enjoy it!\n')
    
    totalOrder()

    print(36*'-')

    for index, item in enumerate(menu, 1):
        print(f'{index} {item["item"]} \t- Rp {item["price"]}')
    print()
    
    confirmOrder = input('Order? y/n: ')

    if confirmOrder == 'y':
        choose = int(input('\nChoose your order: '))
        qty = int(input('How many? '))
    else:
        totalOrder()
        exit('Thank you')

    placeOrder(choose-1, qty)