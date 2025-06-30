# Store all questions in nested dictionary
quiz_data = {}

# === Utility Function ===
def input_with_validation(prompt, options=None):
    while True:
        value = input(prompt).strip()
        if not value:
            print("❌ Input cannot be empty.")
        elif options and value not in options:
            print("❌ Invalid option. Try again.")
        else:
            return value

# === Quiz Master Functions ===
def add_question():
    qid = input("Enter Question ID: ").strip()
    if qid in quiz_data:
        print("❌ This ID already exists.")
        return

    question = input("Enter the question: ").strip()
    options = {}
    for opt in ['A', 'B', 'C', 'D']:
        options[opt] = input(f"Enter option {opt}: ").strip()

    answer = input_with_validation("Enter correct answer (A/B/C/D): ", ['A', 'B', 'C', 'D'])

    quiz_data[qid] = {
        "question": question,
        "options": options,
        "answer": answer
    }
    print("✅ Question added successfully.")

def view_questions():
    if not quiz_data:
        print("❌ No questions available.")
        return
    for qid, data in quiz_data.items():
        print(f"\nID: {qid}")
        print(f"Q: {data['question']}")
        for key in data['options']:
            print(f"  {key}. {data['options'][key]}")
        print(f"Answer: {data['answer']}")

def delete_question():
    qid = input("Enter Question ID to delete: ").strip()
    if qid not in quiz_data:
        print("❌ ID not found.")
        return

    confirm = input_with_validation("Are you sure to delete? (Y/N): ", ['Y', 'N'])
    if confirm == 'Y':
        del quiz_data[qid]
        print("✅ Deleted successfully.")
    else:
        print("❌ Deletion cancelled.")

def quiz_master_menu():
    while True:
        print("\n--- Quiz Master Menu ---")
        print("1. Add Question")
        print("2. View Questions")
        print("3. Delete Question")
        print("4. Back to Main Menu")
        choice = input("Enter your choice: ").strip()
        if choice == '1':
            add_question()
        elif choice == '2':
            view_questions()
        elif choice == '3':
            delete_question()
        elif choice == '4':
            break
        else:
            print("❌ Invalid choice.")

# === Quiz Cracker Function ===
def start_quiz():
    if not quiz_data:
        print("❌ No questions available. Ask Quiz Master to add.")
        return

    score = 0
    total = len(quiz_data)

    for qid, data in quiz_data.items():
        print(f"\nQ: {data['question']}")
        for key in data['options']:
            print(f"  {key}. {data['options'][key]}")
        ans = input_with_validation("Your answer (A/B/C/D): ", ['A', 'B', 'C', 'D'])

        if ans == data['answer']:
            print("✅ Correct!")
            score += 1
        else:
            print(f"❌ Wrong! Correct: {data['answer']}")

    print(f"\n🎯 Final Score: {score}/{total}")

# === Main Menu ===
def main_menu():
    print("\n=== QUIZ GAME ===")
    print("1. Quiz Master")
    print("2. Quiz Cracker")
    print("3. Exit")
    choice = input("Choose option: ").strip()

    if choice == '1':
        quiz_master_menu()
    elif choice == '2':
        start_quiz()
    elif choice == '3':
        print("👋 Exiting program...")
    else:
        print("❌ Invalid input. Try again.")

# === Start Program ===
main_menu()
