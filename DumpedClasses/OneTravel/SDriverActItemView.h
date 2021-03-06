//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SABubbleViewDelegate.h"

@class NSString, NewDriverActModel, SABubbleView, SIMUnreadCountView, UIButton;

@interface SDriverActItemView : UIView <SABubbleViewDelegate>
{
    UIButton *_actButton;
    SIMUnreadCountView *_unreadView;
    SABubbleView *_tipBubble;
    NewDriverActModel *_actModel;
}

@property(retain, nonatomic) NewDriverActModel *actModel; // @synthesize actModel=_actModel;
@property(retain, nonatomic) SABubbleView *tipBubble; // @synthesize tipBubble=_tipBubble;
@property(retain, nonatomic) SIMUnreadCountView *unreadView; // @synthesize unreadView=_unreadView;
@property(retain, nonatomic) UIButton *actButton; // @synthesize actButton=_actButton;
- (void).cxx_destruct;
- (struct CGPoint)arrowPointForBubbleView:(id)arg1;
- (void)bubbleViewDidClick:(id)arg1;
- (void)bubbleViewDidHide:(id)arg1;
- (void)removeTipsBubble;
- (void)updateUnreadCount:(long long)arg1;
- (void)valueActItemView:(id)arg1;
- (void)actButtonClick:(id)arg1;
- (void)valueActButton:(id)arg1;
- (void)configTipsBubbleView:(id)arg1;
- (void)configUnreadView;
- (void)configActButton;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

