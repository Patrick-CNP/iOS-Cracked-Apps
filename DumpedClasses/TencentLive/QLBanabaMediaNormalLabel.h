//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBanabaMediaBaseLabel.h"

#import "QLImageLoadDelegate.h"

@class NSString, QLImageLayer, UIButton;

@interface QLBanabaMediaNormalLabel : QLBanabaMediaBaseLabel <QLImageLoadDelegate>
{
    _Bool _isWordsExceeded;
    UIButton *_leftActionButton;
    UIButton *_rightActionButton;
    QLImageLayer *_thumbImageLayer;
}

@property(retain, nonatomic) QLImageLayer *thumbImageLayer; // @synthesize thumbImageLayer=_thumbImageLayer;
@property(retain, nonatomic) UIButton *rightActionButton; // @synthesize rightActionButton=_rightActionButton;
@property(retain, nonatomic) UIButton *leftActionButton; // @synthesize leftActionButton=_leftActionButton;
@property(nonatomic) _Bool isWordsExceeded; // @synthesize isWordsExceeded=_isWordsExceeded;
- (void).cxx_destruct;
- (void)__handleTapBySelf:(id)arg1;
- (_Bool)__needHandleTapBySelf:(id)arg1;
- (void)__configThumbImageLayer:(id)arg1;
- (void)__configureRightActionButton:(id)arg1;
- (void)__configureLeftActionButton:(id)arg1;
- (struct CGSize)__caculateButtonSize:(id)arg1 maxHeight:(double)arg2;
- (struct CGRect)__setRightViewsFrame:(double)arg1 viewMaxHeight:(double)arg2;
- (struct CGRect)__setMiddleViewsFrame:(double)arg1 contentSize:(struct CGSize)arg2;
- (void)updateViewsAttributesForBanabaSetting;
- (void)configureLabelContentWithBanabaItem:(id)arg1 onCanvas:(id)arg2 atChannelPoint:(struct CGPoint)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

