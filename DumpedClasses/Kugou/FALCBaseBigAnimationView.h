//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FALCBigAnimationViewProtocol.h"

@class NSString;

@interface FALCBaseBigAnimationView : UIView <FALCBigAnimationViewProtocol>
{
    _Bool _animating;
    id <FALCBigAnimationViewDelegate> _delegate;
    NSString *_animationPath;
}

@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) NSString *animationPath; // @synthesize animationPath=_animationPath;
@property(nonatomic) __weak id <FALCBigAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bigAnimationViewDidStop;
- (void)bigAnimationViewWillStop;
- (void)bigAnimationViewStop;
- (void)caromSendGiftNumber:(long long)arg1;
- (void)commonSendGiftNumber:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

