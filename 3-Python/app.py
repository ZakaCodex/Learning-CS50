import datetime


def main():
    print("=== Welcome & Age Calculator ===")

    # Get input from the user
    name = input("Enter your name: ")
    birth_year = input("Enter your birth year (e.g., 2004): ")

    # Check if the input is a valid number
    if birth_year.isdigit():
        current_year = datetime.datetime.now().year
        age = current_year - int(birth_year)

        print("-" * 35)
        print(f"Hello, {name}!")
        print(f"Your estimated age is: {age} years old.")
        print("-" * 35)
    else:
        print("Error: Please enter a valid numeric year.")


if __name__ == "__main__":
    main()