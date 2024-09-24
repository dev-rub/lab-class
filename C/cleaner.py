import os
# This code is used for removing .o and .exe file from my c folder
def delete_files(extension):
    current_folder = os.getcwd()
    for filename in os.listdir(current_folder):
        if filename.endswith(extension):
            file_path = os.path.join(current_folder, filename)
            try:
                os.remove(file_path)
                print(f"Deleted: {file_path}")
            except Exception as e:
                print(f"Error deleting {file_path}: {e}")

delete_files('.o')
delete_files('.exe')