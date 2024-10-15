 1. **Create a Build Folder**:
    -   Open your terminal (or command prompt).
    -   Go to your project folder where the CMakeLists.txt file is located.
    -   Create a new folder called `build` by running this command: `mkdir build`
    -   Navigate into that folder with this command: `cd build`

 2. **Run CMake**:
    -   Inside the `build` folder, run CMake to generate the necessary build files by using: `cmake ..`

3. **Build the Project**:
    -   After running CMake, build the project:
        -   On **Linux/macOS**, use this command: `make`
        -   On **Windows**, use this command: `cmake --build .`

4. **Run the Program**:
    -   After the build is complete, run the generated program called `Application`:
        -   On **Linux/macOS**, use this command: `./Application`
        -   On **Windows**, use this command: `Application.exe`
