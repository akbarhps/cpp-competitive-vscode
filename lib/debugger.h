template <typename T>
inline void DebugPrint(const char *label, T &&var)
{
    std::cout << "(" << label << " : " << var << ")" << '\n';
}

template <typename T, typename... Args>
inline void DebugPrint(const char *labels, T &&var, Args &&...args)
{
    const char *del = strchr(labels, ',');
    std::cout << "(";
    std::cout.write(labels, del - labels) << ": " << var << "), ";
    return DebugPrint(del + 2, args...);
}