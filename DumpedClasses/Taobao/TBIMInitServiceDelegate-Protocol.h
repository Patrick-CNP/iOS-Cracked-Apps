//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TBIMInitServiceDelegate <NSObject>

@optional
- (void)imBiz:(NSString *)arg1 initFinish:(_Bool)arg2;
- (void)imInitFinish;
- (void)imInitBaseFinish;
- (void)imInitBegin;
@end

