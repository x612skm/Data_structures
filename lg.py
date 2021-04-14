loop = "true"
while(loop == "true"):
    username = input("Enter Username: ")
    password = input("Enter Password: ")
    h = input ("Do You Need Help [Y/N]: ")
    if(h == "Y" or h == "y" or h == "yes" or h == "Yes"):
    print ("Enter username and password to login. If you do not have an account yet, enter 'Guest' as the username and press enter when it asks for the password.")
    elif(h == "N" or h == "n" or h == "no" or h == "No"):
        print (" >> ")
    if(username == "Hello World" and password == "Hello World" or username == "Test User" and password == "Test User" or username == "Guest"):
        print ("Logged in Successfully as " + username)
        if(username == "Guest"):
            print ("Account Status: Online | Guest User")
        if not (username == "Guest"):
            print ("Account Status: Online | Standard User")

