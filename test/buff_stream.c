#include <stddef.h>
#include <stdio.h>

#include "quotica.h"


static char buff[] = "Hello, World!\n";

int main()
{
	struct quot_BuffStream stream;
	quot_buff_stream_init(&stream, buff, sizeof(buff));

	for (size_t i = 0; i < sizeof(buff); i++) {
		int next_char;

		next_char = quot_buff_stream_getchar(&stream);
		if (next_char == -1) {
			fprintf(stderr,
				"Error: Not all characters returned!\n"
			);
			return 1;
		}
		if ((char)next_char != buff[i]) {
			fprintf(stderr,
				"Error: Wrong characters returned!\n"
			);
			return 1;
		}
	}

	enum {ARBITRARY_CONST = 16};
	for (size_t i = 0; i < ARBITRARY_CONST; i++) {
		int next_char;
		next_char = quot_buff_stream_getchar(&stream);
		if (next_char != -1) {
			fprintf(stderr,
				"Error: Extra characters returned!\n"
			);
			return 1;
		}
	}

	fprintf(stderr,
		"Ok: BuffStream tested!\n"
	);
}



