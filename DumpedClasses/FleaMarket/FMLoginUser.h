//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMLoginUser : NSObject
{
    NSString *_avatarUrl;
}

+ (id)avatarUrl;
+ (id)encryptUserId;
+ (id)cookies;
+ (id)ecode;
+ (id)sid;
+ (id)nick;
+ (id)userId;
+ (_Bool)isLogin;
+ (_Bool)isLoginUserWithUserId:(id)arg1;
+ (id)instance;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
- (void).cxx_destruct;

@end

