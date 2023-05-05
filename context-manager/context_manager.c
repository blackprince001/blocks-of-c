#include "../context-manager/context_manager.h"

int main()
{
  FileContextManager* file = FileContextManager_new("./tests/file_context_manager_test.c");

  if (FileContextManager_enter(file)) {
    char line[256];
    while (fgets(line, sizeof(line), file->file))
      printf("%s", line);

    FileContextManager_exit(file, 0, NULL, NULL);
  } else {
    printf("Failed to open the file");

    FileContextManager_exit(file, 0, NULL, NULL);
  }
}