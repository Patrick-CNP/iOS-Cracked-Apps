//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, UIViewController;

@protocol TTShareAppMethodSource <NSObject>
- (void)activityHasSharedWith:(id <TTActivityProtocol>)arg1 error:(NSError *)arg2 desc:(NSString *)arg3;
- (void)activityWillSharedWith:(id <TTActivityProtocol>)arg1;
- (UIViewController *)topmostViewController;
- (_Bool)isZoneVersion;
- (_Bool)isPadDevice;
@end
