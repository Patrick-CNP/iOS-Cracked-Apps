//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBAMPBindMobileUser.h"

@class NSDate, NSString;

@interface TBAMPBindMobileUser : NSObject <TBAMPBindMobileUser>
{
    _Bool _taoTag;
    NSString *_phone;
    NSString *_userLogo;
    NSString *_uid;
    NSDate *_modifyTime;
}

@property(retain, nonatomic) NSDate *modifyTime; // @synthesize modifyTime=_modifyTime;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *userLogo; // @synthesize userLogo=_userLogo;
@property(nonatomic) _Bool taoTag; // @synthesize taoTag=_taoTag;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)ampDeepCopy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
