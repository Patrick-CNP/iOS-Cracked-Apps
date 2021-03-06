//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTChatGroupInfo, CTChatUserInfo, NSString, XMPPJID;

@interface XMPPCtripChatUser : NSObject
{
    NSString *_username;
    NSString *_password;
    long long _businessType;
    CTChatUserInfo *_userInfo;
    CTChatGroupInfo *_groupInfo;
    XMPPJID *_JID;
}

@property(retain, nonatomic) XMPPJID *JID; // @synthesize JID=_JID;
@property(retain, nonatomic) CTChatGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(retain, nonatomic) CTChatUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long businessType; // @synthesize businessType=_businessType;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (_Bool)isNeedUpdated;
- (void)updateIfForced:(_Bool)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)updateIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUsername:(id)arg1 password:(id)arg2 businessType:(long long)arg3;

@end

