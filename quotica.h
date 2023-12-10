#include <stddef.h>


#ifndef QUOTICA_H_SENTRY
#define QUOTICA_H_SENTRY

void quot_scan_brackets(
	int getchar(void *stream_id),
	const void *stream_id,
	int *is_correct,
	size_t *max_depth,
	size_t depth_limit
);


void quot_lrscan_brackets(
	int getchar(void *stream_id),
	const void *stream_id,
	int *is_correct,
	size_t *max_depth
);


void quot_scan_quotation(
	int getchar(void *stream_id),
	const void *stream_id,
	int *is_correct,
	size_t *max_depth,
	size_t depth_limit
);


void quot_lrscan_quotation(
	int getchar(void *stream_id),
	const void *stream_id,
	int *is_correct,
	size_t *max_depth
);


void quot_scan(
	int getchar(void *stream_id),
	const void *stream_id,
	int *is_correct,
	size_t *max_depth,
	size_t depth_limit
);


void quot_lrscan(
	int getchar(void *stream_id),
	const void *stream_id,
	int *is_correct,
	size_t *max_depth
);


struct quot_BuffStream {
	char *buff;
	size_t size;
};


void quot_buff_stream_init(
	struct quot_BuffStream *obj,
	char *buff,
	size_t size
);


int quot_buff_stream_getchar(
	struct quot_BuffStream *stream_id
);

#endif


