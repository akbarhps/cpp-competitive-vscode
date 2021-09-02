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
- If you're using `#include <bits/stdc++.h>` also comment `"-std=c++17"`

## Snippet

### Visual Studio Code

1. Open file `src > main.cpp`
2. Simply write `init` then hit `enter`

- Note:
    - Visual studio code automatically import `.code-snippets` file
    - if you want to customize or look for another snippet, open `.vscode/template.code-snippets`

### Other Code Editor that doesn't support Snippet

1. Open file `template > template-v.cpp`
2. Copy all
3. Paste in `src > main.cpp`