#include <stdio.h>
#include <stdlib.h>
int strcmp(const char *str_1, const char *str_2);
void version() {
	puts("ecc - \x1B[32mEmerald Compiler");
}

void help() {
	puts("Usage:");
	puts("Usage ecc [Options] file");
	puts("\t--help");
	return;
}

int main(int argc, char *argv[]) {
	if (!strcmp(argv[1],"--help")) {
		help();
	}
	if (!strcmp(argv[1],"--version")) {
		version();
	}
	if (!strcmp(argv[1],"")) {
		puts("Error: no Input");
	}
	return 0;
}
