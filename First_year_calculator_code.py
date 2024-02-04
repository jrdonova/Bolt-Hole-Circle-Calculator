'''
Jack Donovan
12/9/21
CS 021 EDDY
FINAL PROJECT! Machinist Calculator'''


import math

RPM_FORMUALA_NUMBER = 3.82

def main():
    '''fetch user input and direct to appropriate menu'''  

    validate = True
    while validate == True:
        selection = get_menu_option()
        if selection == 1:
            speeds_feeds_mill()       
        elif selection == 2:
            speeds_feeds_hole_making()
        elif selection == 3:
            speeds_feeds_lathe()
        elif selection == 4:
            bolt_circle_layout()
        elif selection == 5:
            bolt_dia()
        elif selection == 6:
            sin_bar()
        elif selection == 7:
            validate = program_exit()


def speeds_feeds_mill():
    '''Takes speeds and feed inputs and prints out relevent speed and feed outputs'''
    try:
        sfm = float(input("What is your desired surface feet per minute? "))
        dia = float(input("What is the diameter of your cutter in inches? "))
        while dia == 0:
            print("You can't have zero or diameter!")
            dia = float(input("What is the diameter of your cutter in inches? "))
        ipt = float(input("What is your desired feed per tooth in inches? "))
        teeth = float(input("How many teeth does your cutter have? "))
        rpm = (sfm * RPM_FORMUALA_NUMBER) / dia
        ipm = rpm * ipt * teeth
        print(f"Your revolutions per minute is {abs(rpm):.0f}")
        print(f"Your inches per minute is {abs(ipm):.2f}")
    except ValueError:
        print("It looks like you didn't put in a number, please try again.")
        main()
    except:
        print("I'm not sure what you did but it seriously broke my little calculator :(")
        main()

def speeds_feeds_hole_making():
    '''Takes speeds and feed inputs and prints out relevent speed and feed outputs'''
    try:
        sfm = float(input("What is your desired surface feet per minute? "))
        dia = float(input("What is the diameter of your cutter in inches? "))
        while dia == 0:
            print("You can't have zero or negative diameter!")
            dia = float(input("What is the diameter of your cutter in inches? "))
        ipr = float(input("What is your desired feed per revolution in inches? "))
        rpm = (sfm * RPM_FORMUALA_NUMBER) / dia
        ipm = rpm * ipr
        print(f"Your revolutions per minute is {abs(rpm):.0f}")
        print(f"Your inches per minute is {abs(ipm):.2f}")
    except ValueError:
        print("It looks like you didn't put in a number, please try again.")
        main()
    except:
        print("I'm not sure what you did but it seriously broke my little calculator :(")
        main()
    

def speed_feeds_lathe():
    '''Takes speeds and feed inputs and prints out relevent speed and feed outputs'''
    try:
        sfm = float(input("What is your desired surface feet per minute? "))
        dia = float(input("What is the diameter of your part in inches. "))
        while dia == 0:
            print("You can't have zero diamter!")
            dia = float(input("What is the diameter of your cutter in inches? "))
        ipr = float(input("What is your desired feed per revolution in inches? "))
        rpm = (sfm * RPM_FORMUALA_NUMBER) / dia
        ipm = rpm * ipr
        print(f"Your revolutions per minute is {abs(rpm):.0f}")
        print(f"Your inches per minute is {abs(ipm):.2f}")
    except ValueError:
        print("It looks like you didn't put in a number, please try again.")
        main()
    except:
        print("I'm not sure what you did but it seriously broke my little calculator :(")
        main()


def bolt_circle_layout():
    '''Uses various bolt hole circle dimensions and prints out each hole's x and y location'''
    try:
        num_holes = float(input("How many holes in this bolt hole circle? "))
        while num_holes == 0:
            print("You can't have zero holes!")
            num_holes = float(input("How many holes in this bolt hole circle? "))
        while num_holes < 0:
            print("You can't have negative holes!")
            num_holes = float(input("How many holes in this bolt hole circle? "))
        dia_cir = float(input("What is the diameter in inches of the bolt hole circle? "))
        while dia_cir < 0:
            print("You can't have negative!")
            dia_cir = float(input("What is the diameter in inches of the bolt hole circle? "))
        first_hole_angle = float(input("What is the angle of the first hole from the x-axis coutnerclockwise in degrees? "))
        x_offset = float(input("How far along the x-axis is the center of your bolt cirlce offset from the origin? "))
        y_offset = float(input("How far along the y-axis is the center of your bolt cirlce offset from the origin? "))
        first_hole_radians = (first_hole_angle * math.pi) / 180
        i = 0
        j = 1
        for num in range(num_holes):
            x_pos = (dia_cir / 2) * math.cos(first_hole_radians + i) + x_offset
            y_pos = (dia_cir / 2) * math.sin(first_hole_radians + i) + y_offset
            spacing = 2 * math.pi / num_holes
            i += spacing
            print(f"Hole {j}: x: {x_pos:.4f}  y: {y_pos:.4f}")
            j += 1
    except ValueError:
        print("It looks like you didn't put in a number, please try again.")
        main()
    except:
        print("I'm not sure what you did but it seriously broke my little calculator :(")
        main()
def bolt_dia():
    '''Calculates and prints diamter of a bolt hole circle using user input'''
    try:
        chord = float(input("What is the distance between the centers of two adjacent holes on your circle? "))
        num_holes = float(input("How many holes are on your circle? "))
        while num_holes == 0:
            print("You can't have zero holes!")
            num_holes = float(input("How many holes in this bolt hole circle? "))
        dia = (chord) /  (math.sin(math.pi / num_holes))
        print(f"Your bolt hole circle has a diameter of {abs(dia):.4f} inches.")
    except ValueError:
        print("It looks like you didn't put in a number, please try again.")
        main()
    except:
        print("I'm not sure what you did but it seriously broke my little calculator :(")
        main()        
        

def sin_bar():
    '''Prints height of blocks you will need for a specific angle and sin bar. Of note, I was going to print out which size gauge blocks
you'll need based off a standard list but unforntunetely floating point numbers do not like to behave and I accept the dedecuted points on complexity.'''
    try:
        length = float(input("What is the center to center distance of your sin bar? "))
        angle = float(input("What angle do you want to create? "))
        angle_rad = angle * math.pi / 180
        height = length * math.sin(angle_rad)
        print(f"You will need a block height of {abs(height):.4f} inches.")
    except ValueError:
        print("It looks like you didn't put in a number, please try again.")
        main()
    except:
        print("I'm not sure what you did but it seriously broke my little calculator :(")
        main()

def get_menu_option():
    '''displays and asks for menu options, returns user input'''
    display_title()

    print("Please select from the following options:\n1. Milling Speeds and Feeds\n2. Hole Making Speeds and Feeds\n3. Turning Speeds and Feeds")
    print("4. Bolt Hole Layout\n5. Bolt Hole Circle Diameter\n6. Sin Bar Height Calculator\n7. Quit ")
    try:
        choice = int(input())   
        while choice < 1 or choice > 7:
                print("Invalid Option")
                print("Please select from the following options:\n1. Milling Speeds and Feeds\n2. Hole Making Speeds and Feeds\n3. Turning Speeds and Feeds")
                print("4. Bolt Hole Layout\n5. Bolt Hole Circle Diameter\n6. Sin Bar Height Calculator\n7. Quit ")
                choice = int(input())

        return (choice)
    except:
        print("Input not integer")
        main()

def display_title():
    '''It displays program title with the print function using the program language 'Python' version 3.9.7'''
    print("---------------------\nMachinist Calculators\n---------------------")



def program_exit():
    '''exits program, asks user if they are sure'''
    r_u_sure = input("Are you sure you want to exit? (y/n) ")
    r_u_sure = r_u_sure.lower()
 
    option = False    
    while option == False:
        if r_u_sure == "y":
            print("Thank you for using the Machinist Calculator!")
            option = True
            validate = False
            return validate
        elif r_u_sure == "n":
            option = True
            validate = True
            return validate
        else:
            print("Invalid option")
            option = False
            r_u_sure = input("Are you sure you want to exit? (y/n) ")

if __name__ == '__main__':
    main()   
