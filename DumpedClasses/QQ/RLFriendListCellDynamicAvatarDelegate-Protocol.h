//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQDynamicAvatarView, UITableViewCell;

@protocol RLFriendListCellDynamicAvatarDelegate <NSObject>

@optional
- (void)onDynamicAvatarReadyToPlayOnce:(QQDynamicAvatarView *)arg1 cell:(UITableViewCell *)arg2;
- (_Bool)shouldPlayOnceDynamicAvatar:(QQDynamicAvatarView *)arg1 cell:(UITableViewCell *)arg2;
@end

