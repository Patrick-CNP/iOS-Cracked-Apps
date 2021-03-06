//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAVShowPanelRestruct.h"

#import "QQGroupInviteSmallViewDelegate.h"
#import "QUIActionSheetDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface QQGroupAVShowPanelRestruct : QQAVShowPanelRestruct <QUIActionSheetDelegate, QQGroupInviteSmallViewDelegate>
{
    NSMutableDictionary *_inviteSubViews;
    NSNumber *_currentClickMember;
    NSMutableArray *_inviteSubViewKeys;
}

@property(retain, nonatomic) NSMutableArray *inviteSubViewKeys; // @synthesize inviteSubViewKeys=_inviteSubViewKeys;
- (void).cxx_destruct;
- (void)destroyInviteSmallViewWithUin:(unsigned long long)arg1;
- (void)handleCancleInviteUin:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addJoinVideoView;
- (void)relayoutAllInviteViews;
- (void)addGLViewWithFrame:(struct CGRect)arg1 ForKey:(id)arg2;
- (void)removeInviteSubViewForKey:(unsigned long long)arg1 withInvitId:(id)arg2;
- (void)handleRefuseInvite:(unsigned long long)arg1 withInvitId:(id)arg2;
- (void)addInviteSubViewOnView:(id)arg1 Forkey:(unsigned long long)arg2 withInvitId:(id)arg3;
- (_Bool)forceTipsRotate;
- (void)setGLFrame:(struct CGRect)arg1 forKey:(id)arg2;
- (void)adjustSubviewWhenAddFramewithKey:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handleDoubleTapGesture:(id)arg1;
- (void)handleSingleTapGesture:(id)arg1;
- (void)relayoutVideoView;
- (float)getCurrentOrientationDegree;
- (void)adjustInviteViewOrientation:(float)arg1;
- (void)onRotate:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

