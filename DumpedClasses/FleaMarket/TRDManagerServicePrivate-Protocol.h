//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol TRDManagerServicePrivate <NSObject>
- (_Bool)log:(NSString *)arg1 andLevel:(long long)arg2 andFormat:(NSString *)arg3 andArgsList:(char *)arg4;
- (_Bool)extLog:(NSString *)arg1 andPrefix:(NSString *)arg2 andException:(NSString *)arg3 andLevel:(long long)arg4 andContent:(NSArray *)arg5 andType:(long long)arg6;
- (void)startInit;
@end
