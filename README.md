# SpaceScale

**SpaceScale** is a calculator that calculates your weight on earth to how much you would weigh on a different planet

## How to Compile

To turn the source code (`main.c`) into an executable (`SpaceScale.exe`), follow these steps:

### 1. Compiler
You need a C compiler installed (like **GCC** via MinGW). You can check if you have it by typing this command in your terminal:
```powershell
gcc --version
```
**Don't have one?** Download this one I like, but either one you like would be fine. [Win64Devkit](https://github.com/skeeto/w64devkit/releases/tag/v2.5.0) and if you don't know what a terminal is don't worry follow this next step

### 2. Find terminal if you don't know where it is
For Windows systems the terminal is either **PowerShell** or **Command Prompt** so search up **Command Prompt** on your windows machine then run it either as an admin or normally

### 3. Navigate to folder
Type in your **Powershell** or **Command Prompt:** `cd "C:\Users\Yourusernamehere\Downloads\SpaceScale\src"`

### 4. Run the program
Type this in your **PowerShell** or **Command Prompt:**
```powershell
gcc main.c -o SpaceScale.exe
```
Then to run it:
```powershell
.\SpaceScale.exe
```
