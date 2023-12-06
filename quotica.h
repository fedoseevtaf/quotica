#ifndef QUOTICA_H_SENTRY
#define QUOTICA_H_SENTRY

void quot_scan_brackets(
	int getchar(void *stream_id),
	const void *stream_id,
	int *is_correct,
	unsigned int *max_depth,
	unsigned int depth_limit
);


void quot_lrscan_brackets(
	int getchar(void *stream_id),
	const void *stream_id,
	int *is_correct,
	unsigned int *max_depth
);


void quot_scan_quotation(
	int getchar(void *stream_id),
	const void *stream_id,
	int *is_correct,
	unsigned int *max_depth,
	unsigned int depth_limit
);


void quot_lrscan_quotation(
	int getchar(void *stream_id),
	const void *stream_id,
	int *is_correct,
	unsigned int *max_depth
);


void quot_scan(
	int getchar(void *stream_id),
	const void *stream_id,
	int *is_correct,
	unsigned int *max_depth,
	unsigned int depth_limit
);


void quot_lrscan(
	int getchar(void *stream_id),
	const void *stream_id,
	int *is_correct,
	unsigned int *max_depth
);

#endif


