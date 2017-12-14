#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "yuarel.h"

int main(void) {
	char *reqMethod  = getenv("REQUEST_METHOD");
	char *queryStr   = getenv("QUERY_STRING");
	char *contentLen = getenv("CONTENT_LENGTH");
	char *scriptName = getenv("SCRIPT_NAME");
	char *serverName = getenv("SERVER_NAME");
	char *serverPort = getenv("SERVER_PORT");
	char *requestUri = getenv("REQUEST_URI");
	char *httpHost   = getenv("HTTP_HOST");

	printf("reqMethod=%s\n", reqMethod);
	printf("queryStr=%s\n", queryStr);
	printf("contentLen=%s\n", contentLen);
	printf("scriptName=%s\n", scriptName);
	printf("serverName=%s\n", serverName);
	printf("serverPort=%s\n", serverPort);
	printf("requestUri=%s\n", requestUri);
	printf("httpHost=%s\n", httpHost);

	char urlStr[1024] = {0};
	sprintf(urlStr, "http://%s%s", httpHost, requestUri);

	// FIXME: just for test
	strcpy(urlStr, "http://localhost:8989/path/to/test?query=yes&param1=no");

	struct yuarel yuarel;
	if (-1 == yuarel_parse(&yuarel, urlStr)) {
		printf("Could not parse url!\n");
		return -1;
	}

	struct yuarel_param yuarelParams[3];
	int paramNum = yuarel_parse_query(yuarel.query, '&', yuarelParams, sizeof(yuarelParams)/sizeof(yuarelParams[0]));
	int i;
	for (i = 0; i < paramNum; i++) {
		printf("%s[%d]=%s\n", yuarelParams[i].key, i, yuarelParams[i].val);
	}

	return 0;
}
