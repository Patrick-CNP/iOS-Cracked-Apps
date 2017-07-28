//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIPanGestureRecognizer;

@interface FXPromptFloatBoxView : UIView
{
    _Bool _bCanCloseBox;
    _Bool _bPanningSatate;
    id <FXPromptFloatBoxViewDelegate> _delegate;
    UIPanGestureRecognizer *_panGestureRecognizer;
}

@property(nonatomic) _Bool bPanningSatate; // @synthesize bPanningSatate=_bPanningSatate;
@property(nonatomic) _Bool bCanCloseBox; // @synthesize bCanCloseBox=_bCanCloseBox;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) __weak id <FXPromptFloatBoxViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateShadowEffect:(double)arg1;
- (void)didPanCloseBoxWithAnimate;
- (void)restoreNormalState:(double)arg1;
- (double)getNormalLeftMargin;
- (double)getAlphaValue:(double)arg1;
- (double)calculateDistanceRate:(double)arg1 with:(double)arg2;
- (void)panningState;
- (void)panFailedState;
- (void)panEndState;
- (void)panBeganState;
- (void)handlePanGesture:(id)arg1;
- (void)releasePanGestureRecognizer;
- (void)createPanGestureRecognizer;
- (void)endTouchInBoxView;
- (void)beginTouchInBoxView;
- (void)didPanCloseBoxView;
- (void)willPanCloseBoxView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
