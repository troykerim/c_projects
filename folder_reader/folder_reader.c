/*
    Folder reader program

    Count the number of projects (Folders) that are in the specified path
    Ignore junk or extra files like: readme, .gitignore, etc...

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int is_directory(const char *base_path, struct dirent *entry) {
    // Skip "." and ".."
    if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
        return 0;

    // Skip hidden files/folders like .git
    if (entry->d_name[0] == '.')
        return 0;

    // Prefer d_type if defined and set
#ifdef _DIRENT_HAVE_D_TYPE
    if (entry->d_type == DT_DIR)
        return 1;
    else if (entry->d_type != DT_UNKNOWN)
        return 0;
#endif

    // Fallback to stat
    char full_path[1024];
    snprintf(full_path, sizeof(full_path), "%s/%s", base_path, entry->d_name);
    struct stat st;
    if (stat(full_path, &st) == 0 && S_ISDIR(st.st_mode))
        return 1;

    return 0;
}

int main() {
    const char folder_path[] = "/home/troy/c_projects/c_projects";

    DIR *dir = opendir(folder_path);
    if (dir == NULL) {
        perror("Error opening directory");
        return 1;
    }

    struct dirent *entry;
    int count = 0;

    while ((entry = readdir(dir)) != NULL) {
        if (is_directory(folder_path, entry)) {
            count++;
            printf("Project folder: %s\n", entry->d_name);
        }
    }

    closedir(dir);
    printf("Total project folders: %d\n", count);
    return 0;
}
