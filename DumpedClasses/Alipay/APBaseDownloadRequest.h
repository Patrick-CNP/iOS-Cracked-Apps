//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APBaseRequest.h"

@interface APBaseDownloadRequest : APBaseRequest
{
    _Bool _useHttps;
    unsigned long long _priority;
}

@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool useHttps; // @synthesize useHttps=_useHttps;
- (id)init;

@end

