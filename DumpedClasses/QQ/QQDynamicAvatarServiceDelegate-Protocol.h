//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQDynamicAvatarInfo;

@protocol QQDynamicAvatarServiceDelegate <NSObject>

@optional
- (void)onRemoveAvatarViedoFile:(NSString *)arg1 type:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (void)onFailedDownloadAvatarViedoFile:(QQDynamicAvatarInfo *)arg1;
- (void)onFailedRequestAvatarInfo;
- (void)onFinishedDownloadAvatarViedoFile:(QQDynamicAvatarInfo *)arg1 filePath:(NSString *)arg2;
- (void)onFinishedRequestAvatarInfo:(QQDynamicAvatarInfo *)arg1;
@end

