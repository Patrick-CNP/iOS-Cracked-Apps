//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DDIMReadStatusMessageManager : NSObject
{
}

- (void)updateSessionReadStatusWithSid:(unsigned long long)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)updateMessageReadStatusWithSid:(unsigned long long)arg1 mids:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)getPreUnreadMessageWithMessages:(id)arg1 count:(long long)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)getLeastUnreadMessageWithSid:(unsigned long long)arg1 inCount:(long long)arg2 withCallback:(CDUnknownBlockType)arg3;

@end
