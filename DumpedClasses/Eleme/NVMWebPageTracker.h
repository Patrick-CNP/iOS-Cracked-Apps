//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface NVMWebPageTracker : NSObject
{
    _Bool _didSucceed;
    NSURL *_URL;
    NSString *_pageName;
    double _startTime;
}

@property(nonatomic) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)reportFinish:(_Bool)arg1;
- (void)reportError;
- (void)reportSuccess;
- (void)start;
- (id)initWithPageName:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

