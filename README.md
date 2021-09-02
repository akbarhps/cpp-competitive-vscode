# C++ Competitive Programming Template

<p align="center">
  <img alt="Template Screenshot" width="auto" height="auto" src="https://user-images.githubusercontent.com/69947442/128795187-94e99b97-1aab-476e-aa02-595f50521df7.png">
    <br>
    <br>
    <span>Simple C++ Template for Competitive Programming</span><br>
    <span>If you want to add more template, simply open issue for that or create pull request</span>
</p>

---

## Installation

### Visual Studio Code

1. Open `.vscode > c_cpp_properties.json`
2. Set your `compiler path` there
3. Open `tasks.json` file
4. Customize your command there

Note:

- `Default tasks.json` only work using `gcc compiler` and `windows`
- If you're using compiler `older` than `c++17` just comment `"-std=c++17"`

### CLion

- CLion will automatically detect CMakeLists.txt file

## Snippet

### Visual Studio Code

1. Open file `src > main.cpp`
2. Simply write `init` then hit `enter`

- Note:
    - Visual studio code automatically import `.code-snippets` file
    - if you want to customize the snippet, open `.vscode/template.code-snippets`

### CLion

1. Open file `template > template-v2.cpp` or choose higher version
2. Copy all
3. Open `File > Settings`
4. Navigate to `Editor > Live Templates`
5. Click `+` icon, then click `Live Template`  
   Or for shortcut press:
    - Windows/Linux (maybe): `alt + insert`
    - Mac: `ctrl + enter`
6. Change `Abbreviation` to `init` or whatever you want to call it
7. Paste template to `Template Text`
8. If you see `No applicable contexts` click `define` then choose `C++`
9. Click OK
10. Open file `src > main.cpp`
11. Type `init` or the `Abbreviation` you give, then you hit `tab`/`enter`

### Other Code Editor that doesn't support Snippet

1. Open file `template > template-v2.cpp` or choose higher version
2. Copy all
3. Paste in `src > main.cpp`

## How To Use

```c++
struct Vector3 {
    int x, y, z;

    Vector3(int x, int y, int z) : x(x), y(y), z(z) {}
};

int main() {
    SetIO;
    vector<Vector3> vec;
    Scan<Vector3, int, int, int>(vec, 3);
    Each(e, vec) {
        Print(e.x, e.y, e.z);
    }
}
```
    
---