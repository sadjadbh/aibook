# A mock session dictionary
session = {"user_id": 42, "username": "Dev_User"}

def logout():
    if "user_id" in session:
        session.clear()
        print("Successfully logged out.")
    else:
        print("No active session found.")

# Usage
logout()
print(f"Current session: {session}")
