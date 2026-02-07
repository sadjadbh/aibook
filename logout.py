class UserSystem:
    def __init__(self):
        self.is_authenticated = True

    def logout(self):
        self.is_authenticated = False
        print("User has been signed out.")

# Usage
app = UserSystem()
app.logout()
