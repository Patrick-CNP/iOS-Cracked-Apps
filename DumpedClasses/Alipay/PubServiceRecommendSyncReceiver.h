//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PubServiceRecommendSyncReceiver : NSObject
{
}

+ (id)sharedInstance;
- (id)followAccountFromSyncMessage:(id)arg1;
- (void)parseMessage:(id)arg1 userId:(id)arg2;
- (void)handleSyncNotification:(id)arg1;
- (void)observeSyncNotification;
- (void)dealloc;
- (id)init;

@end

