//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSTid, NSString;

@interface MSSecurityCheckReq : NSObject
{
    _Bool _setGesture;
    _Bool _openPush;
    NSString *_logonId;
    MSTid *_tid;
}

@property(nonatomic) _Bool openPush; // @synthesize openPush=_openPush;
@property(nonatomic) _Bool setGesture; // @synthesize setGesture=_setGesture;
@property(retain, nonatomic) MSTid *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *logonId; // @synthesize logonId=_logonId;
- (void).cxx_destruct;

@end
