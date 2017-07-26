//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AUHTTPConnection, NSInputStream;

@interface AUHTTPServerRequest : NSObject
{
    AUHTTPConnection *connection;
    struct __CFHTTPMessage *request;
    struct __CFHTTPMessage *response;
    NSInputStream *responseStream;
}

- (void)setResponseBodyStream:(id)arg1;
- (id)responseBodyStream;
- (void)setResponse:(struct __CFHTTPMessage *)arg1;
- (struct __CFHTTPMessage *)response;
- (struct __CFHTTPMessage *)request;
- (id)connection;
- (void)dealloc;
- (id)initWithRequest:(struct __CFHTTPMessage *)arg1 connection:(id)arg2;
- (id)init;

@end
