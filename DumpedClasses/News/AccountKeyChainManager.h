//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AccountKeyChainManager : NSObject
{
}

+ (id)sharedManager;
- (void)installIDAvailable:(id)arg1;
- (id)accountFromKeychain;
- (void)gotAccountInfo:(id)arg1;
- (void)accountExpired:(id)arg1;
- (void)start;
- (id)init;
- (void)dealloc;

@end

