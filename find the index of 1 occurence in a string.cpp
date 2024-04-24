int strStr(char* haystack, char* needle) {
    char* ptr=strstr(haystack,needle);
    if (ptr==NULL)
    {
        return -1;
    }
    return ptr-haystack;
    }